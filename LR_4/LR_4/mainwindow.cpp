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
//    ui->buildCircleButton->setEnabled(false);
//    ui->buildVisualCircleButton->setEnabled(false);
//    ui->buildEllipseButton->setEnabled(false);
//    ui->buildVisualEllipseButton->setEnabled(false);
//    QRegExp check("[-+]?\\d+$");
//    QRegExpValidator *valid_int = new QRegExpValidator(check, this);
//    ui->lineEditXcCircle->setValidator(valid_int);
//    ui->lineEditYcCircle->setValidator(valid_int);
//    ui->lineEditXcVisualCircle->setValidator(valid_int);
//    ui->lineEditYcVisualCircle->setValidator(valid_int);
//    ui->lineEditXcEllipse->setValidator(valid_int);
//    ui->lineEditYcEllipse->setValidator(valid_int);
//    ui->lineEditXcVisualEllipse->setValidator(valid_int);
//    ui->lineEditYcVisualEllipse->setValidator(valid_int);

//    connect(ui->lineEditXcCircle, SIGNAL(textChanged(QString)), this,SLOT(buildCircleEnabled()));
//    connect(ui->lineEditYcCircle, SIGNAL(textChanged(QString)), this,SLOT(buildCircleEnabled()));
//    connect(ui->lineEditXcVisualCircle, SIGNAL(textChanged(QString)), this,SLOT(buildVisualCircleEnabled()));
//    connect(ui->lineEditYcVisualCircle, SIGNAL(textChanged(QString)), this,SLOT(buildVisualCircleEnabled()));
//    connect(ui->lineEditXcEllipse, SIGNAL(textChanged(QString)), this,SLOT(buildEllipseEnabled()));
//    connect(ui->lineEditYcEllipse, SIGNAL(textChanged(QString)), this,SLOT(buildEllipseEnabled()));
//    connect(ui->lineEditXcVisualEllipse, SIGNAL(textChanged(QString)), this,SLOT(buildVisualEllipseEnabled()));
//    connect(ui->lineEditYcVisualEllipse, SIGNAL(textChanged(QString)), this,SLOT(buildVisualEllipseEnabled()));

//    cur_color = Qt::black;
//    chosen_color = Qt::black;
//    pal = palette();
//    pal.setColor(QPalette::Background, chosen_color);
//    ui->frame->setPalette(pal);
//}
}

//void MainWindow::drawVisualCircle(Circle &circle, const int &n, const int &step)
//{
//    if (ui->radioButton->isChecked())
//    {
//        for (int i = 0; i < n; i++)
//        {
//            circle.drawCanon(scene, cur_color, true);
//            circle.increaseSize(step);
//        }
//    }
//    else if (ui->radioButton_2->isChecked())
//    {
//        for (int i = 0; i < n; i++)
//        {
//            circle.drawParam(scene, cur_color, true);
//            circle.increaseSize(step);
//        }
//    }
//    else if (ui->radioButton_3->isChecked())
//    {
//        for (int i = 0; i < n; i++)
//        {
//            circle.drawBresenham(scene, cur_color, true);
//            circle.increaseSize(step);
//        }
//    }
//    else if (ui->radioButton_4->isChecked())
//    {
//        for (int i = 0; i < n; i++)
//        {
//            circle.drawMiddlePoint(scene, cur_color, true);
//            circle.increaseSize(step);
//        }
//    }
//    else if (ui->radioButton_5->isChecked())
//    {
//        for (int i = 0; i < n; i++)
//        {
//            circle.drawLibrary(scene, cur_color);
//            circle.increaseSize(step);
//        }
//    }
//}

//void MainWindow::drawVisualEllipse(Ellipse &ellipse, const int &n, const int &step, const double &size)
//{
//    if (ui->radioButton->isChecked())
//    {
//        for (int i = 0; i < n; i++)
//        {
//            ellipse.drawCanon(scene, cur_color);
//            ellipse.increaseSize(step, size);
//        }
//    }
//    else if (ui->radioButton_2->isChecked())
//    {
//        for (int i = 0; i < n; i++)
//        {
//            ellipse.drawParam(scene, cur_color);
//            ellipse.increaseSize(step, size);
//        }
//    }
//    else if (ui->radioButton_3->isChecked())
//    {
//        for (int i = 0; i < n; i++)
//        {
//            ellipse.drawBresenham(scene, cur_color);
//            ellipse.increaseSize(step, size);
//        }
//    }
//    else if (ui->radioButton_4->isChecked())
//    {
//        for (int i = 0; i < n; i++)
//        {
//            ellipse.drawMiddlePoint(scene, cur_color);
//            ellipse.increaseSize(step, size);
//        }
//    }
//    else if (ui->radioButton_5->isChecked())
//    {
//        for (int i = 0; i < n; i++)
//        {
//            ellipse.drawLibrary(scene, cur_color);
//            ellipse.increaseSize(step, size);
//        }
//    }
//}

//QVector<QList<QPointF> > MainWindow::countTime(const int &r_start, const int &r_end, const int &step)
//{
//    double time = 0;
//    QVector<QList<QPointF>> time_vector(5);
//    Circle circle(270, 270, r_start);
//    QGraphicsScene *tmp_scene = new QGraphicsScene();
//    for (double i = r_start; i <= r_end; i += step)
//    {
//        time = 0;
//        for (int j = 0; j < 10; j++)
//        {
//            time += circle.drawCanon(tmp_scene, cur_color, false);
//        }
//        time_vector[0].push_back(QPointF(i, time ));
//        time = 0;
//        for (int j = 0; j < 10; j++)
//        {
//            time += circle.drawParam(tmp_scene, cur_color, false);
//        }
//        time_vector[1].push_back(QPointF(i, time));
//        time = 0;
//        for (int j = 0; j < 10; j++)
//        {
//            time += circle.drawBresenham(tmp_scene, cur_color, false);
//        }
//        time_vector[2].push_back(QPointF(i, time));
//        time = 0;
//        for (int j = 0; j < 10; j++)
//        {
//            time += circle.drawMiddlePoint(tmp_scene, cur_color, false);
//        }
//        time_vector[3].push_back(QPointF(i, time));
//        time = 0;
//        for (int j = 0; j < 10; j++)
//        {
//            time += circle.drawLibrary(tmp_scene, cur_color);
//        }
//        time_vector[4].push_back(QPointF(i, time));
//        circle.increaseSize(step);
//        tmp_scene->clear();
//    }
//    delete tmp_scene;
//    return time_vector;
//}

//void MainWindow::drawCircleTimeChart(const QVector<QList<QPointF> > &time_vector)
//{
//    QLineSeries *canon = new QLineSeries();
//    QLineSeries *param = new QLineSeries();
//    QLineSeries *bresenham = new QLineSeries();
//    QLineSeries *middle_point = new QLineSeries();
//    QLineSeries *library = new QLineSeries();

//    canon->append(time_vector[0]);
//    param->append(time_vector[1]);
//    bresenham->append(time_vector[2]);
//    middle_point->append(time_vector[3]);
//    library->append(time_vector[4]);

//    canon->setName("Канонический");
//    param->setName("Параметрический");
//    bresenham->setName("Брезенхэма");
//    middle_point->setName("Средней точки");
//    library->setName("Библиотечный");

//    QValueAxis *axisX = new QValueAxis;
//    axisX->setTitleText("Радиус(пиксели)");
//    axisX->setTickCount(10);
//    axisX->setRange(0, time_vector[0][time_vector[0].size() - 1].x());
//    QValueAxis *axisY = new QValueAxis;
//    axisY->setTitleText("Время(сек)");
//    axisY->setTickCount(10);
//    axisY->setRange(0, time_vector[0][time_vector[0].size() - 1].y());
//    QChart *chart = new QChart();
//    chart->addAxis(axisY, Qt::AlignLeft);
//    chart->addAxis(axisX, Qt::AlignBottom);

//    chart->addSeries(canon);
//    chart->addSeries(param);
//    chart->addSeries(bresenham);
//    chart->addSeries(middle_point);
//    chart->addSeries(library);

//    library->attachAxis(axisX);
//    library->attachAxis(axisY);
//    canon->attachAxis(axisX);
//    canon->attachAxis(axisY);
//    param->attachAxis(axisX);
//    param->attachAxis(axisY);
//    bresenham->attachAxis(axisX);
//    bresenham->attachAxis(axisY);
//    middle_point->attachAxis(axisX);
//    middle_point->attachAxis(axisY);

//    chart->setTitle("График сравнения времени");
//    chart->setAnimationOptions(QChart::AllAnimations);
//    QChartView *chartView = new QChartView(chart);
//    chartView->setRenderHint(QPainter::Antialiasing);
//    chart_window = new ChartWindow();
//    QHBoxLayout *layout = new QHBoxLayout;
//    layout->setMargin(0);
//    layout->setSpacing(0);
//    chart_window->setLayout(layout);
//    layout->addWidget(chartView);
//    chart_window->show();
//}

//MainWindow::~MainWindow()
//{
//    delete ui;
//}

//void MainWindow::buildCircleEnabled()
//{
//    bool enabled = (ui->lineEditXcCircle->hasAcceptableInput() &&
//                   ui->lineEditYcCircle->hasAcceptableInput());
//     ui->buildCircleButton->setEnabled(enabled);
//}

//void MainWindow::buildVisualCircleEnabled()
//{
//    bool enabled = (ui->lineEditXcVisualCircle->hasAcceptableInput() &&
//                   ui->lineEditYcVisualCircle->hasAcceptableInput());
//     ui->buildVisualCircleButton->setEnabled(enabled);
//}

//void MainWindow::buildEllipseEnabled()
//{
//    bool enabled = (ui->lineEditXcEllipse->hasAcceptableInput() &&
//                   ui->lineEditYcEllipse->hasAcceptableInput());
//     ui->buildEllipseButton->setEnabled(enabled);
//}

//void MainWindow::buildVisualEllipseEnabled()
//{
//    bool enabled = (ui->lineEditXcVisualEllipse->hasAcceptableInput() &&
//                   ui->lineEditYcVisualEllipse->hasAcceptableInput());
//     ui->buildVisualEllipseButton->setEnabled(enabled);
//}

//void MainWindow::on_chooseButton_clicked()
//{
//    QColor tmp_color = QColorDialog::getColor(Qt::white, this,"Выберите цвет");
//    if (tmp_color.isValid())
//    {
//        chosen_color = tmp_color;
//        pal.setColor(QPalette::Background, chosen_color);
//        ui->frame->setPalette(pal);
//        if (ui->radioButton_7->isChecked())
//            cur_color = chosen_color;

//    }
//}

//void MainWindow::on_clearSceneButton_clicked()
//{
//    scene->clear();
//}

//void MainWindow::on_radioButton_6_clicked()
//{
//    cur_color = Qt::white;
//}

//void MainWindow::on_radioButton_7_clicked()
//{
//    cur_color = chosen_color;
//}

//void MainWindow::on_buildCircleButton_clicked()
//{
//    int xc, yc, r;
//    QString tmp;
//    tmp = ui->lineEditXcCircle->text();
//    xc = tmp.toInt();
//    tmp = ui->lineEditYcCircle->text();
//    yc = tmp.toInt();
//    r = ui->spinBoxRCircle->value();
//    Circle circle(xc, yc, r);
//    if (ui->radioButton->isChecked())
//        circle.drawCanon(scene, cur_color, true);
//    else if (ui->radioButton_2->isChecked())
//        circle.drawParam(scene, cur_color, true);
//    else if (ui->radioButton_3->isChecked())
//        circle.drawBresenham(scene, cur_color, true);
//    else if (ui->radioButton_4->isChecked())
//        circle.drawMiddlePoint(scene, cur_color, true);
//    else if (ui->radioButton_5->isChecked())
//        circle.drawLibrary(scene, cur_color);
//}

//void MainWindow::on_buildEllipseButton_clicked()
//{
//    int xc, yc, a, b;
//    QString tmp;
//    tmp = ui->lineEditXcEllipse->text();
//    xc = tmp.toInt();
//    tmp = ui->lineEditYcEllipse->text();
//    yc = tmp.toInt();
//    a = ui->spinBoxAEllipse->value();
//    b = ui->spinBoxBEllipse->value();
//    Ellipse ellipse(xc, yc, a, b);
//    if (ui->radioButton->isChecked())
//        ellipse.drawCanon(scene, cur_color);
//    else if (ui->radioButton_2->isChecked())
//        ellipse.drawParam(scene, cur_color);
//    else if (ui->radioButton_3->isChecked())
//        ellipse.drawBresenham(scene, cur_color);
//    else if (ui->radioButton_4->isChecked())
//        ellipse.drawMiddlePoint(scene, cur_color);
//    else if (ui->radioButton_5->isChecked())
//        ellipse.drawLibrary(scene, cur_color);
//}

//void MainWindow::on_buildVisualCircleButton_clicked()
//{
//    int xc, yc, r;
//    int n, step;
//    QString tmp;
//    tmp = ui->lineEditXcVisualCircle->text();
//    xc = tmp.toInt();
//    tmp = ui->lineEditYcVisualCircle->text();
//    yc = tmp.toInt();
//    r = ui->spinBoxStartR->value();
//    n = ui->spinBoxCircleN->value();
//    step = ui->spinBoxCircleStep->value();
//    Circle circle(xc, yc, r);
//    drawVisualCircle(circle, n, step);
//}

//void MainWindow::on_buildVisualEllipseButton_clicked()
//{
//    int xc, yc, a, b;
//    int n, step;
//    double size;
//    QString tmp;
//    tmp = ui->lineEditXcVisualEllipse->text();
//    xc = tmp.toInt();
//    tmp = ui->lineEditYcVisualEllipse->text();
//    yc = tmp.toInt();
//    a = ui->spinBoxStartA->value();
//    b = ui->spinBoxStartB->value();
//    n = ui->spinBoxEllipseN->value();
//    step = ui->spinBoxEllipseStep->value();
//    Ellipse ellipse(xc, yc, a, b);
//    size = static_cast<double>(b) / a;
//    drawVisualEllipse(ellipse, n, step, size);
//}


//void MainWindow::on_drawCircleChartButton_clicked()
//{
//    int r_start, r_end, step;
//    QVector<QList<QPointF>> time_vector;
//    r_start = ui->spinBoxTimeStartR->value();
//    r_end = ui->spinBoxTimeEndR->value();
//    step = ui->spinBoxTimeStep->value();
//    time_vector = countTime(r_start, r_end, step);
//    drawCircleTimeChart(time_vector);
//
