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
    enable_finish = false;
    enable_add = false;
    ui->addPointButton->setEnabled(false);
    ui->finishFigureButton->setEnabled(false);
    ui->lineEditX->setValidator(valid);
    ui->lineEditY->setValidator(valid);
    connect(ui->lineEditX, SIGNAL(textChanged(QString)), this, SLOT(addPointEnabled()));
    connect(ui->lineEditY, SIGNAL(textChanged(QString)), this, SLOT(addPointEnabled()));
    connect(paint_widget, SIGNAL(pointsChanged(const int&, const int&)),
            this, SLOT(finishFigureEnabled(const int&, const int&)));
    connect(paint_widget, SIGNAL(seedChanged(const QPoint &)), this, SLOT(changeSeedLabels(const QPoint &)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addPointEnabled()
{
    enable_add = ui->lineEditX->hasAcceptableInput() &&
                  ui->lineEditY->hasAcceptableInput();
    ui->addPointButton->setEnabled(enable_add);
}

void MainWindow::finishFigureEnabled(const int &cur_index, const int &start_index)
{
    enable_finish = cur_index > start_index + 2;
    ui->finishFigureButton->setEnabled(enable_finish);
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
    QColor color = QColorDialog::getColor(Qt::white, this,"Выберите цвет");
    if (color.isValid())
    {
        QPalette palette;
        palette.setColor(QPalette::Background, color);
        ui->fillFrame->setPalette(palette);
        paint_widget->setFillColor(color);
    }
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
        paint_widget->fillFigure(0);
    }
    else if (ui->withTimeRadioButton->isChecked())
    {
         int time = ui->timerSpinBox->value();
        paint_widget->fillFigure(time);
    }
}

void MainWindow::on_clearFillButton_clicked()
{
    paint_widget->clearFill();
}

void MainWindow::changeSeedLabels(const QPoint &seed_pos)
{
    ui->XLabel->setText("X = " + QString::number(seed_pos.x()));
    ui->YLabel->setText("Y = " + QString::number(seed_pos.y()));
}

void MainWindow::on_seedRadioButton_clicked()
{
    ui->finishFigureButton->setEnabled(false);
    ui->addPointButton->setEnabled(enable_add);
    paint_widget->setSeedMode();
}

void MainWindow::on_figureRadioButton_clicked()
{
    ui->finishFigureButton->setEnabled(enable_finish);
    ui->addPointButton->setEnabled(enable_add);
    paint_widget->setFigureMode();
}

void MainWindow::on_arbitraryRadioButton_clicked()
{
    ui->finishFigureButton->setEnabled(false);
    ui->addPointButton->setEnabled(false);
    paint_widget->setArbitraryMode();
}
