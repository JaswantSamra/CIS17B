/********************************************************************************
** Form generated from reading UI file 'imageviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIEWER_H
#define UI_IMAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageViewer
{
public:
    QAction *OpenAct;
    QAction *PrintAct;
    QAction *ExitAct;
    QAction *zoomInAct;
    QAction *zoomOutAct;
    QAction *normalSizeAct;
    QAction *fitToWindowAct;
    QAction *aboutAct;
    QAction *aboutQTAct;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *imageLabel;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *viewMenu;
    QMenu *helpMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ImageViewer)
    {
        if (ImageViewer->objectName().isEmpty())
            ImageViewer->setObjectName(QString::fromUtf8("ImageViewer"));
        ImageViewer->resize(800, 600);
        OpenAct = new QAction(ImageViewer);
        OpenAct->setObjectName(QString::fromUtf8("OpenAct"));
        OpenAct->setEnabled(true);
        PrintAct = new QAction(ImageViewer);
        PrintAct->setObjectName(QString::fromUtf8("PrintAct"));
        ExitAct = new QAction(ImageViewer);
        ExitAct->setObjectName(QString::fromUtf8("ExitAct"));
        zoomInAct = new QAction(ImageViewer);
        zoomInAct->setObjectName(QString::fromUtf8("zoomInAct"));
        zoomOutAct = new QAction(ImageViewer);
        zoomOutAct->setObjectName(QString::fromUtf8("zoomOutAct"));
        normalSizeAct = new QAction(ImageViewer);
        normalSizeAct->setObjectName(QString::fromUtf8("normalSizeAct"));
        fitToWindowAct = new QAction(ImageViewer);
        fitToWindowAct->setObjectName(QString::fromUtf8("fitToWindowAct"));
        fitToWindowAct->setCheckable(true);
        aboutAct = new QAction(ImageViewer);
        aboutAct->setObjectName(QString::fromUtf8("aboutAct"));
        aboutQTAct = new QAction(ImageViewer);
        aboutQTAct->setObjectName(QString::fromUtf8("aboutQTAct"));
        centralwidget = new QWidget(ImageViewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 791, 551));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 789, 549));
        imageLabel = new QLabel(scrollAreaWidgetContents);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(10, 180, 47, 13));
        scrollArea->setWidget(scrollAreaWidgetContents);
        ImageViewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ImageViewer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        helpMenu = new QMenu(menubar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        ImageViewer->setMenuBar(menubar);
        statusbar = new QStatusBar(ImageViewer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ImageViewer->setStatusBar(statusbar);

        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menubar->addAction(helpMenu->menuAction());
        fileMenu->addAction(OpenAct);
        fileMenu->addAction(PrintAct);
        fileMenu->addAction(ExitAct);
        viewMenu->addAction(zoomInAct);
        viewMenu->addAction(zoomOutAct);
        viewMenu->addAction(normalSizeAct);
        viewMenu->addAction(fitToWindowAct);
        helpMenu->addAction(aboutAct);
        helpMenu->addAction(aboutQTAct);

        retranslateUi(ImageViewer);

        QMetaObject::connectSlotsByName(ImageViewer);
    } // setupUi

    void retranslateUi(QMainWindow *ImageViewer)
    {
        ImageViewer->setWindowTitle(QApplication::translate("ImageViewer", "ImageViewer", nullptr));
        OpenAct->setText(QApplication::translate("ImageViewer", "&Open", nullptr));
#ifndef QT_NO_SHORTCUT
        OpenAct->setShortcut(QApplication::translate("ImageViewer", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        PrintAct->setText(QApplication::translate("ImageViewer", "&Print", nullptr));
#ifndef QT_NO_TOOLTIP
        PrintAct->setToolTip(QApplication::translate("ImageViewer", "Print", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        PrintAct->setShortcut(QApplication::translate("ImageViewer", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        ExitAct->setText(QApplication::translate("ImageViewer", "&Exit", nullptr));
#ifndef QT_NO_TOOLTIP
        ExitAct->setToolTip(QApplication::translate("ImageViewer", "Exit", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        ExitAct->setShortcut(QApplication::translate("ImageViewer", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        zoomInAct->setText(QApplication::translate("ImageViewer", "Zoom &In (25%)", nullptr));
#ifndef QT_NO_TOOLTIP
        zoomInAct->setToolTip(QApplication::translate("ImageViewer", "Zoom In (25%)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        zoomInAct->setShortcut(QApplication::translate("ImageViewer", "Ctrl+=", nullptr));
#endif // QT_NO_SHORTCUT
        zoomOutAct->setText(QApplication::translate("ImageViewer", "Zoom &Out (25%)", nullptr));
#ifndef QT_NO_TOOLTIP
        zoomOutAct->setToolTip(QApplication::translate("ImageViewer", "Zoom Out (25%)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        zoomOutAct->setShortcut(QApplication::translate("ImageViewer", "Ctrl+-", nullptr));
#endif // QT_NO_SHORTCUT
        normalSizeAct->setText(QApplication::translate("ImageViewer", "&Normal Size", nullptr));
#ifndef QT_NO_TOOLTIP
        normalSizeAct->setToolTip(QApplication::translate("ImageViewer", "Normal Size", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        normalSizeAct->setShortcut(QApplication::translate("ImageViewer", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        fitToWindowAct->setText(QApplication::translate("ImageViewer", "&Fit to Window", nullptr));
#ifndef QT_NO_TOOLTIP
        fitToWindowAct->setToolTip(QApplication::translate("ImageViewer", "Fit to Window", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        fitToWindowAct->setShortcut(QApplication::translate("ImageViewer", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        aboutAct->setText(QApplication::translate("ImageViewer", "&About", nullptr));
#ifndef QT_NO_TOOLTIP
        aboutAct->setToolTip(QApplication::translate("ImageViewer", "About", nullptr));
#endif // QT_NO_TOOLTIP
        aboutQTAct->setText(QApplication::translate("ImageViewer", "About &QT", nullptr));
#ifndef QT_NO_TOOLTIP
        aboutQTAct->setToolTip(QApplication::translate("ImageViewer", "About QT", nullptr));
#endif // QT_NO_TOOLTIP
        imageLabel->setText(QApplication::translate("ImageViewer", "TextLabel", nullptr));
        fileMenu->setTitle(QApplication::translate("ImageViewer", "File", nullptr));
        viewMenu->setTitle(QApplication::translate("ImageViewer", "View", nullptr));
        helpMenu->setTitle(QApplication::translate("ImageViewer", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageViewer: public Ui_ImageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
