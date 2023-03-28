#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>

#include "opencv2/opencv.hpp"
#include "opencv2/imgproc.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();


public slots:
    void catch_image();

    void show_image(int flag);

    void calculate();

signals:
    void tried_show(int flag);


private:
    Ui::MainWindow *ui;
    int catch_flag=1;
};
#endif // MAINWINDOW_H
