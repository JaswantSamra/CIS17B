#include "imageviewer.h"
#include "ui_imageviewer.h"
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QPrintDialog>


ImageViewer::ImageViewer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ImageViewer)
{
    ui->setupUi(this);
    ui->openAct = new QAction(tr("&Open...;"), this);
    ui->openAct->setShortcut(tr("Ctrl+O"));

    ui->printAct = new QAction(tr("&Print...;"), this);
    ui->printAct->setShortcut(tr("Ctrl+P"));
    ui->printAct->setEnabled(false);

    ui->exitAct = new QAction(tr("E&xit;"), this);
    ui->exitAct->setShortcut(tr("Ctrl+Q"));

    ui->zoomInAct = new QAction(tr("Zoom &In; (25%)"), this);
    ui->zoomInAct->setShortcut(tr("Ctrl+="));   //(Ctrl)(+)
    ui->zoomInAct->setEnabled(false);

    ui->zoomOutAct = new QAction(tr("Zoom &Out; (25%)"), this);
    ui->zoomOutAct->setShortcut(tr("Ctrl+-"));  //(Ctrl)(-)
    ui->zoomOutAct->setEnabled(false);

    ui->normalSizeAct = new QAction(tr("&Normal; Size"), this);
    ui->normalSizeAct->setShortcut(tr("Ctrl+S"));
    ui->normalSizeAct->setEnabled(false);

    ui->fitToWindowAct = new QAction(tr("&Fit; to Window"), this);
    ui->fitToWindowAct->setEnabled(false);
    ui->fitToWindowAct->setCheckable(true);
    ui->fitToWindowAct->setShortcut(tr("Ctrl+F"));

    ui->aboutAct = new QAction(tr("&About;"), this);

    ui->aboutQtAct = new QAction(tr("About &Qt;"), this);

    openAct = ui->openAct;
    printAct = ui->printAct;
    exitAct = ui->exitAct;
    zoomInAct = ui->zoomInAct;
    zoomOutAct = ui->zoomOutAct;
    normalSizeAct = ui->normalSizeAct;
    fitToWindowAct = ui->fitToWindowAct;
    aboutAct = ui->aboutAct;
    aboutQtAct = ui->aboutQtAct;

    ui->imageLabel = new QLabel;
    ui->imageLabel->setBackgroundRole(QPalette::Base);
    ui->imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->imageLabel->setScaledContents(true);

    setWindowTitle(tr("Image Viewer"));

    connect(ui->openAct, SIGNAL(triggered()), this, SLOT(open()));
    connect(ui->printAct, SIGNAL(triggered()), this, SLOT(print()));
    connect(ui->exitAct, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->zoomInAct, SIGNAL(triggered()), this, SLOT(zoomIn()));
    connect(ui->zoomOutAct, SIGNAL(triggered()), this, SLOT(zoomOut()));
    connect(ui->normalSizeAct, SIGNAL(triggered()), this, SLOT(normalSize()));
    connect(ui->fitToWindowAct, SIGNAL(triggered()), this, SLOT(fitToWindow()));
    connect(ui->aboutAct, SIGNAL(triggered()), this, SLOT(about()));
    connect(ui->aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

ImageViewer::~ImageViewer()
{
    delete ui;
}

void ImageViewer::open()
{
    qDebug() << "open()";
        QString fileName = QFileDialog::getOpenFileName(this,
                                         tr("Open File"), QDir::currentPath());
        if (!fileName.isEmpty()) {
             QImage image(fileName);
             if (image.isNull()) {
                 QMessageBox::information(this, tr("Image Viewer"),
                                          tr("Cannot load %1.").arg(fileName));
                 return;
             }
             ui->imageLabel->setPixmap(QPixmap::fromImage(image));
             scaleFactor = 1.0;

             printAct->setEnabled(true);
             fitToWindowAct->setEnabled(true);
             updateActions();

             if (!fitToWindowAct->isChecked())
                 ui->imageLabel->adjustSize();
        }
}

void ImageViewer::adjustScrollBar(QScrollBar *scrollBar, double factor)
{
    scrollBar->setValue(int(factor * scrollBar->value()
                            + ((factor - 1) * scrollBar->pageStep()/2)));
}

void ImageViewer::scaleImage(double factor)
{
    Q_ASSERT(imageLabel->pixmap());
    scaleFactor *= factor;
    imageLabel->resize(scaleFactor * imageLabel->pixmap()->size());

    adjustScrollBar(scrollArea->horizontalScrollBar(), factor);
    adjustScrollBar(scrollArea->verticalScrollBar(), factor);

    zoomInAct->setEnabled(scaleFactor < 3.0);
    zoomOutAct->setEnabled(scaleFactor > 0.333);
}

void ImageViewer::zoomIn()
{
    scaleImage(1.25);
}

void ImageViewer::zoomOut()
{
     scaleImage(0.8);
}

void ImageViewer::normalSize()
{
    ui->imageLabel->adjustSize();
    scaleFactor = 1.0;
}

void ImageViewer::fitToWindow()
{
    bool fitToWindow = fitToWindowAct->isChecked();
    scrollArea->setWidgetResizable(fitToWindow);
    if (!fitToWindow) {
         normalSize();
    }
    updateActions();
}

/*void ImageViewer::print()
{
    Q_ASSERT(ui->imageLabel->pixmap());
    #ifndef QT_NO_PRINTER
        QPrintDialog dialog(&printer, this);
        if (dialog.exec()) {
            QPainter painter(&printer);
            QRect rect = painter.viewport();
            QSize size = ui->imageLabel->pixmap()->size();
            size.scale(rect.size(), Qt::KeepAspectRatio);
            painter.setViewport(rect.x(), rect.y(), size.width(), size.height());
            painter.setWindow(ui->imageLabel->pixmap()->rect());
            painter.drawPixmap(0, 0, *ui->imageLabel->pixmap());
        }
    #endif
}*/

void ImageViewer::about()
{
    QMessageBox::about(this, tr("About Image Viewer"),
                tr("<b>Image Viewer</b> example."));
}

void ImageViewer::updateActions()
{
    zoomInAct->setEnabled(!fitToWindowAct->isChecked());
    zoomOutAct->setEnabled(!fitToWindowAct->isChecked());
    normalSizeAct->setEnabled(!fitToWindowAct->isChecked());
}
