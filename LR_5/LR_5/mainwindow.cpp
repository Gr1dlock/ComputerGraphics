#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    paint_widget = new PaintWidget(this);
    QRegExp check("[-+]?\\d+$");
    QRegExpValidator *valid = new QRegExpValidator(check, this);
    ui->addPointButton->setEnabled(false);
    ui->finishFigureButton->setEnabled(false);
    ui->lineEditX->setValidator(valid);
    ui->lineEditY->setValidator(valid);
    connect(ui->lineEditX, SIGNAL(textChanged(QString)), this, SLOT(addPointEnabled()));
    connect(ui->lineEditY, SIGNAL(textChanged(QString)), this, SLOT(addPointEnabled()));
    connect(paint_widget, SIGNAL(pointsChanged(const int&, const int&)),
            this, SLOT(finishFigureEnabled(const int&, const int&)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addPointEnabled()
{
    bool inputcheck = ui->lineEditX->hasAcceptableInput() &&
                  ui->lineEditY->hasAcceptableInput();
    ui->addPointButton->setEnabled(inputcheck);
}

void MainWindow::finishFigureEnabled(const int &cur_index, const int &start_index)
{
    bool enable = cur_index > start_index + 2;
    ui->finishFigureButton->setEnabled(enable);
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

void MainWindow::on_chooseBordersColorButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this,"Выберите цвет");
    if (color.isValid())
    {
        QPalette palette;
        palette.setColor(QPalette::Background, color);
        ui->bordersFrame->setPalette(palette);
        paint_widget->setBordersColor(color);
    }
}

void MainWindow::on_chooseFillColorButton_clicked()
{

}

void MainWindow::on_addPointButton_clicked()
{
    QString tmp;
    QPoint cur_point;
    tmp = ui->lineEditX->text();
    cur_point.setX(tmp.toInt());
    tmp = ui->lineEditY->text();
    cur_point.setY(tmp.toInt());
    paint_widget->drawByButton(cur_point);
}

void MainWindow::on_clearAllButton_clicked()
{
    paint_widget->clearAll();
}

void MainWindow::on_finishFigureButton_clicked()
{
    paint_widget->finishByButton();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return)
    {
        paint_widget->finishByButton();
    }
}

void MainWindow::on_fillButton_clicked()
{
    if (ui->withoutTimeRadioButton->isChecked())
    {
        paint_widget->fillFigure();
    }
}
