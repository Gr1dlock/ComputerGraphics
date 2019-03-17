#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QColorDialog>
#include <QtAlgorithms>
#include <cmath>
#include "point.h"


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
    void on_clearButton_clicked();
    void buildEnabled();
    void buildVisualEnabled();
    void on_chooseButton_clicked();
    void on_buildButton_clicked();
    void on_radioButton_6_clicked();
    void on_radioButton_7_clicked();
    void on_buildVisualButton_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QColor chosen_color;
    QColor cur_color;
    QPalette pal;
    void drawDDA(int xn, int yn, int xk, int yk);
    void drawBresenham(int xn, int yn, int xk, int yk);
    void drawBresenhamInt(int xn, int yn, int xk, int yk);
    void drawBresenhamStepless(int xn, int yn, int xk, int yk);
    int sign(int x);
    void drawVisual(int xc, int yc, double length, double angle);
};

#endif // MAINWINDOW_H
