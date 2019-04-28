#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    paint_widget = new PaintWidget(this);

    enable_add_clip = false;
    enable_add_line = false;

    QRegExp check("[-+]?\\d+$");
    QRegExpValidator *valid = new QRegExpValidator(check, this);

    ui->addButton->setEnabled(false);

    ui->lineEditXl->setValidator(valid);
    ui->lineEditXr->setValidator(valid);
    ui->lineEditYl->setValidator(valid);
    ui->lineEditYh->setValidator(valid);
    ui->lineEditX1->setValidator(valid);
    ui->lineEditX2->setValidator(valid);
    ui->lineEditY1->setValidator(valid);
    ui->lineEditY2->setValidator(valid);

    connect(ui->lineEditX1, SIGNAL(textChanged(QString)), this, SLOT(addEnabled()));
    connect(ui->lineEditX2, SIGNAL(textChanged(QString)), this, SLOT(addEnabled()));
    connect(ui->lineEditY1, SIGNAL(textChanged(QString)), this, SLOT(addEnabled()));
    connect(ui->lineEditY2, SIGNAL(textChanged(QString)), this, SLOT(addEnabled()));
    connect(ui->lineEditXl, SIGNAL(textChanged(QString)), this, SLOT(addEnabled()));
    connect(ui->lineEditXr, SIGNAL(textChanged(QString)), this, SLOT(addEnabled()));
    connect(ui->lineEditYh, SIGNAL(textChanged(QString)), this, SLOT(addEnabled()));
    connect(ui->lineEditYl, SIGNAL(textChanged(QString)), this, SLOT(addEnabled()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addEnabled()
{
    if (ui->clipRadioButton->isChecked())
    {
        enable_add_clip = ui->lineEditXl->hasAcceptableInput() &&
                ui->lineEditXr->hasAcceptableInput() &&
                ui->lineEditYl->hasAcceptableInput() &&
                ui->lineEditYh->hasAcceptableInput();
        ui->addButton->setEnabled(enable_add_clip);
    }
    else if (ui->lineRadioButton->isChecked())
    {
        enable_add_line = ui->lineEditX1->hasAcceptableInput() &&
                ui->lineEditX2->hasAcceptableInput() &&
                ui->lineEditY1->hasAcceptableInput() &&
                ui->lineEditY2->hasAcceptableInput();
        ui->addButton->setEnabled(enable_add_line);

    }
}

void MainWindow::on_clipRadioButton_clicked()
{
    ui->drawingStackedWidget->setCurrentWidget(ui->clipPage);
    ui->addButton->setEnabled(enable_add_clip);
    paint_widget->setClipMode();
}

void MainWindow::on_lineRadioButton_clicked()
{
    ui->drawingStackedWidget->setCurrentWidget(ui->linePage);
    ui->addButton->setEnabled(enable_add_line);
    paint_widget->setLineMode();
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

void MainWindow::on_chooseClipColorButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this,"Выберите цвет");
    if (color.isValid())
    {
        QPalette palette;
        palette.setColor(QPalette::Background, color);
        ui->clipFrame->setPalette(palette);
        paint_widget->setClipColor(color);
    }
}

void MainWindow::on_chooseClippedPartButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this,"Выберите цвет");
    if (color.isValid())
    {
        QPalette palette;
        palette.setColor(QPalette::Background, color);
        ui->clippedPartFrame->setPalette(palette);
        paint_widget->setClippedPartColor(color);
    }
}

void MainWindow::on_clearAllButton_clicked()
{
    paint_widget->clearAll();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return)
    {
//        paint_widget->finishByButton();
    }
}

void MainWindow::on_addButton_clicked()
{

    QString tmp;
    int x1, x2, y1, y2;
    if (ui->lineRadioButton->isChecked())
    {
        tmp = ui->lineEditX1->text();
        x1 = tmp.toInt();
        tmp = ui->lineEditX2->text();
        x2 = tmp.toInt();
        tmp = ui->lineEditY1->text();
        y1 = tmp.toInt();
        tmp = ui->lineEditY2->text();
        y2 = tmp.toInt();
        paint_widget->addByButton(QPoint(x1, y1), QPoint(x2, y2));
    }
    else
    {
        tmp = ui->lineEditXl->text();
        x1 = tmp.toInt();
        tmp = ui->lineEditXr->text();
        x2 = tmp.toInt();
        tmp = ui->lineEditYh->text();
        y1 = tmp.toInt();
        tmp = ui->lineEditYl->text();
        y2 = tmp.toInt();
        if (x1 > x2)
        {
            qSwap(x1, x2);
        }
        if (y1 < y2)
        {
            qSwap(y1, y2);
        }
        paint_widget->addByButton(QPoint(x1, y1), QPoint(x2, y2));
    }
}

void MainWindow::on_clipButton_clicked()
{
    paint_widget->clipAllLines();
}

void MainWindow::on_clearLinesButton_clicked()
{
    paint_widget->clearLines();
}
