#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(QRect(QPoint(0,0), QPoint(535,535)));
    ui->buildButton->setEnabled(false);
    QRegExp check("[-+]?(\\d+(\\.\\d*)?|\\.\\d+)$");
    QRegExpValidator *valid = new QRegExpValidator(check, this);
    ui->lineEdit_Xk->setValidator(valid);
    ui->lineEdit_Yk->setValidator(valid);
    ui->lineEdit_Xn->setValidator(valid);
    ui->lineEdit_Yn->setValidator(valid);
    cur_color = Qt::black;
    chosen_color = Qt::black;
    pal = palette();
    pal.setColor(QPalette::Background, chosen_color);
    ui->frame->setPalette(pal);

    connect(ui->lineEdit_Xk, SIGNAL(textChanged(QString)), this,SLOT(buildEnabled()));
    connect(ui->lineEdit_Xn, SIGNAL(textChanged(QString)), this,SLOT(buildEnabled()));
    connect(ui->lineEdit_Yk, SIGNAL(textChanged(QString)), this,SLOT(buildEnabled()));
    connect(ui->lineEdit_Yn, SIGNAL(textChanged(QString)), this,SLOT(buildEnabled()));

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_clearButton_clicked()
{
    scene->clear();
}

void MainWindow::buildEnabled()
{
    bool enabled = (ui->lineEdit_Xk->hasAcceptableInput() &&
                   ui->lineEdit_Xn->hasAcceptableInput() &&
                   ui->lineEdit_Yk->hasAcceptableInput() &&
                   ui->lineEdit_Yn->hasAcceptableInput());
     ui->buildButton->setEnabled(enabled);
}

void MainWindow::on_chooseButton_clicked()
{
    QColor tmp_color = QColorDialog::getColor(Qt::white, this,"Выберите цвет");
    if (tmp_color.isValid())
    {
        chosen_color = tmp_color;
        pal.setColor(QPalette::Background, chosen_color);
        ui->frame->setPalette(pal);
        if (ui->radioButton_7->isChecked())
            cur_color = chosen_color;
    }
}

void MainWindow::on_buildButton_clicked()
{
    double xn, yn;
    double xk, yk;
    QString tmp;
    tmp = ui->lineEdit_Xn->text();
    xn = tmp.toDouble();
    tmp = ui->lineEdit_Yn->text();
    yn = tmp.toDouble();
    tmp = ui->lineEdit_Xk->text();
    xk = tmp.toDouble();
    tmp = ui->lineEdit_Yk->text();
    yk = tmp.toDouble();
    if (ui->radioButton->isChecked())
        drawDDA(xn, yn, xk, yk);
}

void MainWindow::on_radioButton_6_clicked()
{
    cur_color = Qt::white;
}

void MainWindow::on_radioButton_7_clicked()
{
    cur_color = chosen_color;
}

void MainWindow::drawDDA(double xn, double yn, double xk, double yk)
{
    if (qFuzzyCompare(xn, xk) && qFuzzyCompare(yn, yk))
    {
        Point *point = new Point(static_cast<int>(xk), static_cast<int>(yk), cur_color);
        scene->addItem(point);
    }
    else
    {
        double l = abs(xk - xn) > (yk - yn) ? abs(xk - xn) : abs(yk - yn);
        double dx = (xk - xn) / l;
        double dy = (yk - yn) / l;
        double x = xn, y = yn;
        for (int i = 0; i < l + 1; i++)
        {
            Point *point = new Point(static_cast<int>(x), static_cast<int>(y), cur_color);
            scene->addItem(point);
            x += dx;
            y += dy;
        }
    }
    scene->update();
}
