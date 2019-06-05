#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColorDialog>
#include <QKeyEvent>
#include <QMouseEvent>
#include "paintwidget.h"
#include "keysinstruction.h"

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

    void on_sliderK_valueChanged(int value);

    void on_resetButton_clicked();
    void createKeys();
protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
private:
    Ui::MainWindow *ui;
    PaintWidget *paint_widget;
    void sendData();
    void rotate();
    bool key_down_pressed;
    bool key_up_pressed;
    bool key_left_pressed;
    bool key_right_pressed;
    bool key_z_up_pressed;
    bool key_z_down_pressed;
    KeysInstruction *keys_window;
};

#endif // MAINWINDOW_H
