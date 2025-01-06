#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QLineEdit>
#include <QTime>
#include <QDate>
#include <QDateTime>
#include <QMessageBox>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void submit();
    void clear();
    void cancel();
    void addToCart();
    void checkout();
private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
