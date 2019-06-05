#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    paint_widget = new PaintWidget(this);
    connect(ui->action, SIGNAL(triggered()), this, SLOT(createKeys()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_chooseBGColorButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this,"Выберите цвет");
    if (color.isValid())
    {
        QPalette palette;
        palette.setColor(QPalette::Background, color);
        ui->BGFrame->setPalette(palette);
        paint_widget->setBGColor(color);
    }
}

void MainWindow::on_chooseLineColorButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this,"Выберите цвет");
    if (color.isValid())
    {
        QPalette palette;
        palette.setColor(QPalette::Background, color);
        ui->lineFrame->setPalette(palette);
        paint_widget->setLineColor(color);
    }
}

void MainWindow::on_buildButton_clicked()
{
    sendData();
}

void MainWindow::on_sliderX_valueChanged(int value)
{
    if (paint_widget->surfaceIsSet())
        sendData();
    Q_UNUSED(value);
}

void MainWindow::sendData()
{
    int cur_func = ui->funcComboBox->currentIndex();
    TransformData t_data(ui->sliderX->value(), ui->sliderY->value(), ui->sliderZ->value(), ui->sliderK->value());
    SurfaceData s_data;
    s_data.setXRange(ui->spinBoxXBeg->value(), ui->spinBoxXEnd->value(), ui->spinBoxXStep->value());
    s_data.setZRange(ui->spinBoxZBeg->value(), ui->spinBoxZEnd->value(), ui->spinBoxZStep->value());
    paint_widget->buildSurface(s_data, t_data, cur_func);
}

void MainWindow::rotate()
{
    if (key_down_pressed)
    {
        int angle_x = ui->sliderX->value();
        if (angle_x == -180)
            angle_x = 180;
        ui->sliderX->setValue(angle_x - 1);
    }
    if (key_up_pressed)
    {
        int angle_x = ui->sliderX->value();
        if (angle_x == 180)
            angle_x = -180;
        ui->sliderX->setValue(angle_x + 1);
    }
    if (key_left_pressed)
    {
        int angle_y = ui->sliderY->value();
        if (angle_y == -180)
            angle_y = 180;
        ui->sliderY->setValue(angle_y - 1);
    }
    if (key_right_pressed)
    {
        int angle_y = ui->sliderY->value();
        if (angle_y == 180)
            angle_y = -180;
        ui->sliderY->setValue(angle_y + 1);
    }
    if (key_z_up_pressed)
    {
        int angle_z = ui->sliderZ->value();
        if (angle_z == 45)
            angle_z = -45;
        ui->sliderZ->setValue(angle_z + 1);
    }
    if (key_z_down_pressed)
    {
        int angle_z = ui->sliderZ->value();
        if (angle_z == -45)
            angle_z = 45;
        ui->sliderZ->setValue(angle_z - 1);
    }
}

void MainWindow::on_sliderY_valueChanged(int value)
{
    if (paint_widget->surfaceIsSet())
        sendData();
    Q_UNUSED(value);
}

void MainWindow::on_sliderZ_valueChanged(int value)
{
    if (paint_widget->surfaceIsSet())
        sendData();
    Q_UNUSED(value);
}

void MainWindow::on_sliderK_valueChanged(int value)
{
    if (paint_widget->surfaceIsSet())
        sendData();
    Q_UNUSED(value);
}

void MainWindow::on_resetButton_clicked()
{
    ui->sliderX->setValue(0);
    ui->sliderY->setValue(0);
    ui->sliderZ->setValue(0);
}

void MainWindow::createKeys()
{
    keys_window = new KeysInstruction();
    keys_window->show();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_S)
        key_down_pressed = true;
    if (event->key() == Qt::Key_W)
        key_up_pressed = true;
    if (event->key() == Qt::Key_A)
        key_left_pressed = true;
    if (event->key() == Qt:: Key_D)
        key_right_pressed = true;
    if (event->key() == Qt:: Key_Q)
        key_z_up_pressed = true;
    if (event->key() == Qt:: Key_E)
        key_z_down_pressed = true;
    rotate();
}

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_S)
        key_down_pressed = false;
    if (event->key() == Qt::Key_W)
        key_up_pressed = false;
    if (event->key() == Qt::Key_A)
        key_left_pressed = false;
    if (event->key() == Qt:: Key_D)
        key_right_pressed = false;
    if (event->key() == Qt:: Key_Q)
        key_z_up_pressed = false;
    if (event->key() == Qt:: Key_E)
        key_z_down_pressed = false;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    this->setFocusPolicy(Qt::StrongFocus);
    Q_UNUSED(event);
}
