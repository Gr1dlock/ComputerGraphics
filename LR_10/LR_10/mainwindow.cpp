#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    paint_widget = new PaintWidget(this);

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
    sendData();
    Q_UNUSED(value);
}

void MainWindow::sendData()
{
    int cur_func = ui->funcComboBox->currentIndex();
    TransformData t_data(ui->sliderX->value(), ui->sliderY->value(), ui->sliderZ->value());
    SurfaceData s_data;
    s_data.setXRange(ui->spinBoxXBeg->value(), ui->spinBoxXEnd->value(), ui->spinBoxXStep->value());
    s_data.setZRange(ui->spinBoxZBeg->value(), ui->spinBoxZEnd->value(), ui->spinBoxZStep->value());
    paint_widget->buildSurface(s_data, t_data, cur_func);
}

void MainWindow::on_sliderY_valueChanged(int value)
{
    sendData();
    Q_UNUSED(value);
}

void MainWindow::on_sliderZ_valueChanged(int value)
{
    sendData();
    Q_UNUSED(value);
}
