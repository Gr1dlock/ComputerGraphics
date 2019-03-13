#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    epicycloid = new Epicycloid(8, 24);
    ui->graphicsView->setScene(scene);
    scene->addItem(epicycloid);
    QRegExp check("[-+]?(\\d+(\\.\\d*)?|\\.\\d+)$");
    QRegExpValidator *valid = new QRegExpValidator(check, this);

    inputcheck = false;
    ui->pushButton->setEnabled(inputcheck);
    ui->pushButton_2->setEnabled(inputcheck);
    ui->pushButton_3->setEnabled(inputcheck);
    ui->pushButton_6->setEnabled(inputcheck);
    ui->lineEdit->setValidator(valid);
    ui->lineEdit_2->setValidator(valid);
    ui->lineEdit_3->setValidator(valid);
    ui->lineEdit_4->setValidator(valid);
    ui->lineEdit_5->setValidator(valid);
    ui->lineEdit_6->setValidator(valid);
    ui->lineEdit_7->setValidator(valid);
    ui->lineEdit_8->setValidator(valid);
    ui->lineEdit_9->setValidator(valid);
    ui->lineEdit_10->setValidator(valid);
    ui->lineEdit_11->setValidator(valid);

    connect(ui->lineEdit, SIGNAL(textChanged(QString)), this, SLOT(transferEnabled()));
    connect(ui->lineEdit_2, SIGNAL(textChanged(QString)), this, SLOT(transferEnabled()));
    connect(ui->lineEdit_3, SIGNAL(textChanged(QString)), this, SLOT(scaleEnabled()));
    connect(ui->lineEdit_4, SIGNAL(textChanged(QString)), this, SLOT(scaleEnabled()));
    connect(ui->lineEdit_5, SIGNAL(textChanged(QString)), this, SLOT(scaleEnabled()));
    connect(ui->lineEdit_6, SIGNAL(textChanged(QString)), this, SLOT(scaleEnabled()));
    connect(ui->lineEdit_7, SIGNAL(textChanged(QString)), this, SLOT(turnEnabled()));
    connect(ui->lineEdit_8, SIGNAL(textChanged(QString)), this, SLOT(turnEnabled()));
    connect(ui->lineEdit_9, SIGNAL(textChanged(QString)), this, SLOT(turnEnabled()));
    connect(ui->lineEdit_10, SIGNAL(textChanged(QString)), this, SLOT(setEnabled()));
    connect(ui->lineEdit_11, SIGNAL(textChanged(QString)), this, SLOT(setEnabled()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::scaleEnabled()
{
    inputcheck = (ui->lineEdit_3->hasAcceptableInput() &&
                  ui->lineEdit_4->hasAcceptableInput() &&
                  ui->lineEdit_5->hasAcceptableInput() &&
                  ui->lineEdit_6->hasAcceptableInput());
    ui->pushButton_2->setEnabled(inputcheck);
}

void MainWindow::transferEnabled()
{
    inputcheck = (ui->lineEdit->hasAcceptableInput() &&
                  ui->lineEdit_2->hasAcceptableInput());
    ui->pushButton->setEnabled(inputcheck);
}

void MainWindow::turnEnabled()
{
    inputcheck = (ui->lineEdit_7->hasAcceptableInput() &&
                  ui->lineEdit_8->hasAcceptableInput() &&
                  ui->lineEdit_9->hasAcceptableInput());
    ui->pushButton_3->setEnabled(inputcheck);
}

void MainWindow::setEnabled()
{
    double a, b;
    inputcheck = (ui->lineEdit_10->hasAcceptableInput() &&
                  ui->lineEdit_11->hasAcceptableInput());
    QString str = ui->lineEdit_10->text();
    a = str.toDouble();
    str = ui->lineEdit_11->text();
    b = str.toDouble();
    inputcheck = inputcheck && qFuzzyCompare(qRound(b / a), b/a);
    ui->pushButton_4->setEnabled(inputcheck);
}

void MainWindow::on_pushButton_clicked()
{
    QString tmp;
    double dx, dy;
    tmp = ui->lineEdit->text();
    dx = tmp.toDouble();
    tmp = ui->lineEdit_2->text();
    dy = tmp.toDouble();
    epicycloid->transfer(dx, dy);
    scene->update();
    ui->pushButton_6->setEnabled(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString tmp;
    double xm, ym;
    double kx, ky;
    tmp = ui->lineEdit_3->text();
    xm = tmp.toDouble();
    tmp = ui->lineEdit_4->text();
    ym = tmp.toDouble();
    tmp = ui->lineEdit_5->text();
    kx = tmp.toDouble();
    tmp = ui->lineEdit_6->text();
    ky = tmp.toDouble();
    epicycloid->scale(xm, ym, kx, ky);
    scene->update();
    ui->pushButton_6->setEnabled(true);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString tmp;
    double xc, yc;
    double angle;
    tmp = ui->lineEdit_7->text();
    xc = tmp.toDouble();
    tmp = ui->lineEdit_8->text();
    yc = tmp.toDouble();
    tmp = ui->lineEdit_9->text();
    angle = tmp.toDouble();
    epicycloid->turn(xc, yc, angle);
    scene->update();
    ui->pushButton_6->setEnabled(true);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString tmp;
    double a, b;
    tmp = ui->lineEdit_10->text();
    a = tmp.toDouble();
    tmp = ui->lineEdit_11->text();
    b = tmp.toDouble();
    epicycloid->setParam(a, b);
    scene->update();
    ui->pushButton_6->setEnabled(false);
}

void MainWindow::on_pushButton_5_clicked()
{
    epicycloid->drawEpicycloid();
    scene->update();
    ui->pushButton_6->setEnabled(true);
}

void MainWindow::on_pushButton_6_clicked()
{
    epicycloid->stepback();
    scene->update();
    ui->pushButton_6->setEnabled(false);
}
