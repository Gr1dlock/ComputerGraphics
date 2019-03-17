#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QColorDialog>
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
    void on_chooseButton_clicked();
    void on_buildButton_clicked();
    void on_radioButton_6_clicked();
    void on_radioButton_7_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QColor chosen_color;
    QColor cur_color;
    QPalette pal;
    void drawDDA(double xn, double yn, double xk, double yk);
    void drawBresenham(double xn, double yn, double xk, double yk);
    void drawBresenhamInt(double xn, double yn, double xk, double yk);
    void drawBresenhamStepless(double xn, double yn, double xk, double yk);
};

#endif // MAINWINDOW_H
