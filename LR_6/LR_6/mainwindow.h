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

protected:
    void keyPressEvent(QKeyEvent *event);
private slots:
    void addPointEnabled();
    void finishFigureEnabled(const int &cur_index, const int &start_index);
    void on_chooseBGColorButton_clicked();
    void on_chooseBordersColorButton_clicked();
    void on_chooseFillColorButton_clicked();
    void on_addPointButton_clicked();
    void on_clearAllButton_clicked();
    void on_finishFigureButton_clicked();
    void on_fillButton_clicked();
    void on_clearFillButton_clicked();
    void changeSeedLabels(const QPoint &seed_pos);
    void on_seedRadioButton_clicked();

    void on_figureRadioButton_clicked();

    void on_arbitraryRadioButton_clicked();

private:
    PaintWidget *paint_widget;
    Ui::MainWindow *ui;
    bool enable_finish;
    bool enable_add;
};

#endif // MAINWINDOW_H
