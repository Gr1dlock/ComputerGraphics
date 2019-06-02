#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColorDialog>
#include "paintwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_chooseBGColorButton_clicked();

    void on_chooseLineColorButton_clicked();

    void on_buildButton_clicked();

    void on_sliderX_valueChanged(int value);

    void on_sliderY_valueChanged(int value);

    void on_sliderZ_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    PaintWidget *paint_widget;
    void sendData();
};

#endif // MAINWINDOW_H
