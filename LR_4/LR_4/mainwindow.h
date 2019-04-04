#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QColorDialog>
#include <QtAlgorithms>
#include "circle.h"
#include "ellipse.h"
#include "chartwindow.h"
#include <QtCharts>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void drawVisualCircle(Circle &circle, const int &n, const int &step);
    void drawVisualEllipse(Ellipse &ellipse, const int &n, const int &step, const double &size);
    QVector<QList<QPointF>> countTime(const int &r_start, const int &r_end, const int &step);
    void drawCircleTimeChart(const QVector<QList<QPointF>> &time_vector);
    ~MainWindow();

private slots:
    void buildCircleEnabled();
    void buildVisualCircleEnabled();
    void buildEllipseEnabled();
    void buildVisualEllipseEnabled();
    void on_chooseButton_clicked();
    void on_clearSceneButton_clicked();
    void on_radioButton_6_clicked();
    void on_radioButton_7_clicked();
    void on_buildCircleButton_clicked();
    void on_buildEllipseButton_clicked();
    void on_buildVisualCircleButton_clicked();
    void on_buildVisualEllipseButton_clicked();
    void on_drawCircleChartButton_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QColor chosen_color;
    QColor cur_color;
    QPalette pal;
    ChartWindow *chart_window;
};

#endif // MAINWINDOW_H
