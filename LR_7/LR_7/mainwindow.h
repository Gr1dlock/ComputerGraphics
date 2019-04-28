#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColorDialog>
#include <QValidator>
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
    void addEnabled();
    void on_clipRadioButton_clicked();
    void on_lineRadioButton_clicked();
    void on_chooseLineColorButton_clicked();
    void on_chooseClipColorButton_clicked();
    void on_chooseClippedPartButton_clicked();
    void on_clearAllButton_clicked();
    void on_addButton_clicked();
    void on_clipButton_clicked();

    void on_clearLinesButton_clicked();

private:
    PaintWidget *paint_widget;
    Ui::MainWindow *ui;
    bool enable_add_clip;
    bool enable_add_line;
};

#endif // MAINWINDOW_H
