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
    ui->buildVisualButton->setEnabled(false);
    ui->stepButton->setEnabled(false);
    ui->timeButton->setEnabled(false);
    QRegExp check("[-+]?\\d+$");
    QRegExpValidator *valid_int = new QRegExpValidator(check, this);
    ui->lineEdit_Xk->setValidator(valid_int);
    ui->lineEdit_Yk->setValidator(valid_int);
    ui->lineEdit_Xn->setValidator(valid_int);
    ui->lineEdit_Yn->setValidator(valid_int);
    ui->lineEdit_Xc->setValidator(valid_int);
    ui->lineEdit_Yc->setValidator(valid_int);
    check = QRegExp("[-+]?(\\d+(\\.\\d*)?|\\.\\d+)$");
    QRegExpValidator *valid_double = new QRegExpValidator(check, this);
    ui->lineEdit_Length->setValidator(valid_double);
    ui->lineEdit_Angle->setValidator(valid_double);
    cur_color = Qt::black;
    chosen_color = Qt::black;
    pal = palette();
    pal.setColor(QPalette::Background, chosen_color);
    ui->frame->setPalette(pal);

    connect(ui->lineEdit_Xk, SIGNAL(textChanged(QString)), this,SLOT(buildEnabled()));
    connect(ui->lineEdit_Xn, SIGNAL(textChanged(QString)), this,SLOT(buildEnabled()));
    connect(ui->lineEdit_Yk, SIGNAL(textChanged(QString)), this,SLOT(buildEnabled()));
    connect(ui->lineEdit_Yn, SIGNAL(textChanged(QString)), this,SLOT(buildEnabled()));
    connect(ui->lineEdit_Xc, SIGNAL(textChanged(QString)), this,SLOT(buildVisualEnabled()));
    connect(ui->lineEdit_Yc, SIGNAL(textChanged(QString)), this,SLOT(buildVisualEnabled()));
    connect(ui->lineEdit_Angle, SIGNAL(textChanged(QString)), this,SLOT(buildVisualEnabled()));
    connect(ui->lineEdit_Length, SIGNAL(textChanged(QString)), this,SLOT(buildVisualEnabled()));

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

void MainWindow::buildVisualEnabled()
{
    bool enabled = (ui->lineEdit_Xc->hasAcceptableInput() &&
                   ui->lineEdit_Xc->hasAcceptableInput() &&
                   ui->lineEdit_Length->hasAcceptableInput() &&
                   ui->lineEdit_Angle->hasAcceptableInput());
     ui->buildVisualButton->setEnabled(enabled);
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
    int xn, yn;
    int xk, yk;
    QString tmp;
    tmp = ui->lineEdit_Xn->text();
    xn = tmp.toInt();
    tmp = ui->lineEdit_Yn->text();
    yn = tmp.toInt();
    tmp = ui->lineEdit_Xk->text();
    xk = tmp.toInt();
    tmp = ui->lineEdit_Yk->text();
    yk = tmp.toInt();
    if (ui->radioButton->isChecked())
        drawDDA(xn, yn, xk, yk);
    else if (ui->radioButton_2->isChecked())
        drawBresenham(xn, yn, xk, yk);
    else if (ui->radioButton_3->isChecked())
        drawBresenhamInt(xn, yn, xk, yk);
    else if (ui->radioButton_4->isChecked())
        drawBresenhamStepless(xn, yn, xk, yk);
    else if (ui->radioButton_5->isChecked())
        scene->addLine(QLine(QPoint(xn, yn), QPoint(xk, yk)), cur_color);
    else if (ui->radioButton_8->isChecked())
        drawWu(xn, yn, xk, yk);
}

void MainWindow::on_radioButton_6_clicked()
{
    cur_color = Qt::white;
}

void MainWindow::on_radioButton_7_clicked()
{
    cur_color = chosen_color;
}


void MainWindow::drawDDA(int xn, int yn, int xk, int yk)
{
    Point *point;
    if (xn == xk && yn == yk)
    {
        point = new Point(xk, yk, cur_color);
        scene->addItem(point);
    }
    else
    {
        double l = abs(xk - xn) > abs(yk - yn) ? abs(xk - xn) : abs(yk - yn);
        double dx = (xk - xn) / l;
        double dy = (yk - yn) / l;
        double x = xn, y = yn;
        for (int i = 0; i < l + 1; i++)
        {
            point = new Point(static_cast<int>(round(x)), static_cast<int>(round(y)), cur_color);
            scene->addItem(point);
            x += dx;
            y += dy;
        }
    }
    scene->update();
}

void MainWindow::drawBresenham(int xn, int yn, int xk, int yk)
{
    Point *point;
    if (xn == xk && yn == yk)
    {
        point = new Point(xk, yk, cur_color);
        scene->addItem(point);
    }
    else
    {
        int dx = xk - xn;
        int dy = yk - yn;
        int sx = sign(dx);
        int sy = sign(dy);
        dx = abs(dx);
        dy = abs(dy);
        double m = static_cast<double>(dy) / dx;
        bool exchange;
        if (m > 1)
        {
            qSwap(dx, dy);
            m = 1 / m;
            exchange = true;
        }
        else
            exchange = false;
        double e = m - 0.5;
        int x = xn, y = yn;
        for (int i = 0; i < dx + 1; i++)
        {
            point = new Point(x, y, cur_color);
            scene->addItem(point);
            if (e >= 0)
            {
                if (exchange)
                    x += sx;
                else
                    y += sy;
                e -= 1;
            }
            if (exchange)
                y += sy;
            else
                x += sx;
            e += m;
        }
    }
}

void MainWindow::drawBresenhamInt(int xn, int yn, int xk, int yk)
{
    Point *point;
    if (xn == xk && yn == yk)
    {
        point = new Point(xk, yk, cur_color);
        scene->addItem(point);
    }
    else
    {
        int dx = xk - xn;
        int dy = yk - yn;
        int sx = sign(dx);
        int sy = sign(dy);
        dx = abs(dx);
        dy = abs(dy);
        bool exchange;
        if (dy > dx)
        {
            qSwap(dx, dy);
            exchange = true;
        }
        else
            exchange = false;
        int e = 2 * dy - dx;
        int x = xn, y = yn;
        for (int i = 0; i < dx + 1; i++)
        {
            point = new Point(x, y, cur_color);
            scene->addItem(point);
            if (e >= 0)
            {
                if (exchange)
                    x += sx;
                else
                    y += sy;
                e -= 2 * dx;
            }
            if (exchange)
                y += sy;
            else
                x += sx;
            e += 2 * dy;
        }
    }
}

void MainWindow::drawBresenhamStepless(int xn, int yn, int xk, int yk)
{
    Point *point;
    if (xn == xk && yn == yk)
    {
        point = new Point(xk, yk, cur_color);
        scene->addItem(point);
    }
    else
    {
        int dx = xk - xn;
        int dy = yk - yn;
        int sx = sign(dx);
        int sy = sign(dy);
        int I = 255;
        dx = abs(dx);
        dy = abs(dy);
        bool exchange;
        double m = static_cast<double>(dy) / dx;
        if (m > 1)
        {
            qSwap(dx, dy);
            m = 1 / m;
            exchange = true;
        }
        else
            exchange = false;
        double e = I / 2.0;
        int x = xn, y = yn;
        m *= I;
        double W = I - m;
        point = new Point(x, y, QColor(cur_color.red(),
                                        cur_color.green(),
                                        cur_color.blue(),
                                        static_cast<int>(e)));
        scene->addItem(point);
        for (int i = 0; i < dx; i++)
        {
            if (e < W)
            {
                if (exchange)
                    y += sy;
                else
                    x += sx;
                e += m;
            }
            else
            {
                x += sx;
                y += sy;
                e -= W;
            }
            point = new Point(x, y, QColor(cur_color.red(),
                                           cur_color.green(),
                                           cur_color.blue(),
                                           static_cast<int>(I - e)));
            scene->addItem(point);
        }
    }
}

int MainWindow::sign(int x)
{
    if (x > 0)
        return 1;
    else if (x == 0)
        return 0;
    return -1;
}

void MainWindow::drawVisual(int xc, int yc, double length, double angle)
{
    if (ui->radioButton->isChecked())
    {
        for (double i = 0; !qFuzzyCompare(i, 2 * M_PI); i += (angle * M_PI / 180))
        {
            drawDDA(xc, yc, static_cast<int>(round(xc + length * cos(i))),
                    static_cast<int>(round(yc + length * sin(i))));
        }
    }
    else if (ui->radioButton_2->isChecked())
        for (double i = 0; !qFuzzyCompare(i, 2 * M_PI); i += angle * M_PI / 180)
        {
            drawBresenham(xc, yc, static_cast<int>(round(xc + length * cos(i))),
                          static_cast<int>(round(yc + length * sin(i))));
        }
    else if (ui->radioButton_3->isChecked())
        for (double i = 0; !qFuzzyCompare(i, 2 * M_PI); i += angle * M_PI / 180)
        {
            drawBresenhamInt(xc, yc, static_cast<int>(round(xc + length * cos(i))),
                             static_cast<int>(round(yc + length * sin(i))));
        }
    else if (ui->radioButton_4->isChecked())
        for (double i = 0; !qFuzzyCompare(i, 2 * M_PI); i += angle * M_PI / 180)
        {
            drawBresenhamStepless(xc, yc, static_cast<int>(round(xc + length * cos(i))),
                                  static_cast<int>(round(yc + length * sin(i))));
        }
    else if (ui->radioButton_5->isChecked())
        for (double i = 0; !qFuzzyCompare(i, 2 * M_PI); i += angle * M_PI / 180)
        {
            scene->addLine(QLine(QPoint(xc, yc),
                                 QPoint(static_cast<int>(round(xc + length * cos(i))) ,
                                        static_cast<int>(round(yc + length * sin(i))))), cur_color);
        }
    else if (ui->radioButton_8->isChecked())
        for (double i = 0; !qFuzzyCompare(i, 2 * M_PI); i += angle * M_PI / 180)
        {
            drawWu(xc, yc, static_cast<int>(round(xc + length * cos(i))),
                                  static_cast<int>(round(yc + length * sin(i))));
        }
}

void MainWindow::drawWu(int xn, int yn, int xk, int yk)
{
    Point *point;
    if (xn == xk && yn == yk)
    {
        point = new Point(xk, yk, cur_color);
        scene->addItem(point);
    }
    else
    {
        int dx = xk - xn;
        int dy = yk - yn;
        int I = 255;
        double m;
        if (abs(dx) > abs(dy))
        {
            if ((dy <= 0 && dx <= 0) || (dx < 0 && dy > 0))
            {
                qSwap(xn, xk);
                qSwap(yn, yk);
            }
            m = static_cast<double>(dy) / dx;
            double y = yn + m;
            point = new Point(xn, yn, cur_color);
            scene->addItem(point);
            for (int x = xn; x < xk; ++x)
            {
                point = new Point(x, static_cast<int>(y),
                                  QColor(cur_color.red(),
                                         cur_color.green(),
                                         cur_color.blue(),
                                         static_cast<int>(I - fractionalPart(y) * I)));
                scene->addItem(point);

                point = new Point(x, static_cast<int>(y) + 1,
                                  QColor(cur_color.red(),
                                         cur_color.green(),
                                         cur_color.blue(),
                                         static_cast<int>(fractionalPart(y) * I)));
                scene->addItem(point);
                y += m;
            }
            point = new Point(xk, yk, cur_color);
            scene->addItem(point);
        }
        else
        {
            if ((dy <= 0 && dx <= 0) || (dy <= 0 && dx >= 0))
            {
                qSwap(xn, xk);
                qSwap(yn, yk);
            }
            m = static_cast<double>(dx)/ dy;
            double x = xn + m;
            point = new Point(xn, yn, cur_color);
            scene->addItem(point);
            for (int y = yn; y < yk; ++y)
            {
                point = new Point(static_cast<int>(x), y,
                                  QColor(cur_color.red(),
                                         cur_color.green(),
                                         cur_color.blue(),
                                         static_cast<int>(I - fractionalPart(x) * I)));
                scene->addItem(point);

                point = new Point(static_cast<int>(x) + 1, y,
                                  QColor(cur_color.red(),
                                         cur_color.green(),
                                         cur_color.blue(),
                                         static_cast<int>(fractionalPart(x) * I)));
                scene->addItem(point);
                x += m;
            }
            point = new Point(xk, yk, cur_color);
            scene->addItem(point);
        }
    }
}


double MainWindow::fractionalPart(double x)
{
    int tmp =static_cast<int>(x);
    return abs(x - tmp);
}

void MainWindow::on_buildVisualButton_clicked()
{
    int xc, yc;
    double length, angle;
    QString tmp;
    tmp = ui->lineEdit_Xc->text();
    xc = tmp.toInt();
    tmp = ui->lineEdit_Yc->text();
    yc = tmp.toInt();
    tmp = ui->lineEdit_Length->text();
    length = tmp.toDouble();
    tmp = ui->lineEdit_Angle->text();
    angle = tmp.toDouble();
    drawVisual(xc, yc, length, angle);
}
