#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    epicycloid = new Epicycloid(30, 90);
    ui->graphicsView->setScene(scene);
    scene->setBackgroundBrush(QBrush(Qt::black, Qt::BDiagPattern));
    scene->addItem(epicycloid);
    epicycloid->setPos(270, 270);
}

MainWindow::~MainWindow()
{
    delete ui;
}
