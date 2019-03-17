/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QSplitter *splitter;
    QGroupBox *buildBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Xn;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_Yn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_Xk;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_Yk;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *buildButton;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *algorithmBox;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_17;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QGroupBox *colorBox;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_16;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *chooseButton;
    QSpacerItem *horizontalSpacer_13;
    QGroupBox *compareBox;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *visualButton;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *timeButton;
    QSpacerItem *horizontalSpacer_15;
    QGroupBox *clearBox;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer_19;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 630);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 20, 540, 540));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        graphicsView->setPalette(palette);
        graphicsView->setInteractive(false);
        graphicsView->setOptimizationFlags(QGraphicsView::DontAdjustForAntialiasing);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(580, 10, 400, 580));
        splitter->setOrientation(Qt::Vertical);
        buildBox = new QGroupBox(splitter);
        buildBox->setObjectName(QString::fromUtf8("buildBox"));
        QFont font;
        font.setPointSize(18);
        buildBox->setFont(font);
        buildBox->setAlignment(Qt::AlignCenter);
        verticalLayout = new QVBoxLayout(buildBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(32, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label = new QLabel(buildBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(buildBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_Xn = new QLineEdit(buildBox);
        lineEdit_Xn->setObjectName(QString::fromUtf8("lineEdit_Xn"));
        QFont font1;
        font1.setPointSize(14);
        lineEdit_Xn->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit_Xn);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(buildBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        lineEdit_Yn = new QLineEdit(buildBox);
        lineEdit_Yn->setObjectName(QString::fromUtf8("lineEdit_Yn"));
        lineEdit_Yn->setFont(font1);

        horizontalLayout->addWidget(lineEdit_Yn);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        label_2 = new QLabel(buildBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(buildBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_Xk = new QLineEdit(buildBox);
        lineEdit_Xk->setObjectName(QString::fromUtf8("lineEdit_Xk"));
        lineEdit_Xk->setFont(font1);

        horizontalLayout_5->addWidget(lineEdit_Xk);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(buildBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_Yk = new QLineEdit(buildBox);
        lineEdit_Yk->setObjectName(QString::fromUtf8("lineEdit_Yk"));
        lineEdit_Yk->setFont(font1);

        horizontalLayout_4->addWidget(lineEdit_Yk);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalSpacer_8 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_9 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        buildButton = new QPushButton(buildBox);
        buildButton->setObjectName(QString::fromUtf8("buildButton"));

        horizontalLayout_7->addWidget(buildButton);

        horizontalSpacer_10 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_7);

        splitter->addWidget(buildBox);
        algorithmBox = new QGroupBox(splitter);
        algorithmBox->setObjectName(QString::fromUtf8("algorithmBox"));
        algorithmBox->setFont(font);
        algorithmBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_12 = new QHBoxLayout(algorithmBox);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_17);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton = new QRadioButton(algorithmBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);
        radioButton->setAutoRepeat(false);
        radioButton->setAutoExclusive(true);

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(algorithmBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setCheckable(true);
        radioButton_2->setChecked(false);
        radioButton_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(algorithmBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setChecked(false);
        radioButton_3->setAutoExclusive(true);

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(algorithmBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(algorithmBox);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout_2->addWidget(radioButton_5);


        horizontalLayout_12->addLayout(verticalLayout_2);

        splitter->addWidget(algorithmBox);
        colorBox = new QGroupBox(splitter);
        colorBox->setObjectName(QString::fromUtf8("colorBox"));
        colorBox->setFont(font);
        colorBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_10 = new QHBoxLayout(colorBox);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_16);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButton_6 = new QRadioButton(colorBox);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        verticalLayout_3->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(colorBox);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setCheckable(true);
        radioButton_7->setChecked(true);

        verticalLayout_3->addWidget(radioButton_7);


        horizontalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        frame = new QFrame(colorBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(255, 255, 255, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        frame->setPalette(palette1);
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);

        verticalLayout_4->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_9->addLayout(verticalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        chooseButton = new QPushButton(colorBox);
        chooseButton->setObjectName(QString::fromUtf8("chooseButton"));

        horizontalLayout_8->addWidget(chooseButton);

        horizontalSpacer_13 = new QSpacerItem(80, 30, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_5);

        splitter->addWidget(colorBox);
        compareBox = new QGroupBox(splitter);
        compareBox->setObjectName(QString::fromUtf8("compareBox"));
        compareBox->setFont(font);
        compareBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_11 = new QHBoxLayout(compareBox);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_11 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        visualButton = new QPushButton(compareBox);
        visualButton->setObjectName(QString::fromUtf8("visualButton"));

        horizontalLayout_11->addWidget(visualButton);

        horizontalSpacer_14 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);

        timeButton = new QPushButton(compareBox);
        timeButton->setObjectName(QString::fromUtf8("timeButton"));

        horizontalLayout_11->addWidget(timeButton);

        horizontalSpacer_15 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_15);

        splitter->addWidget(compareBox);
        clearBox = new QGroupBox(centralWidget);
        clearBox->setObjectName(QString::fromUtf8("clearBox"));
        clearBox->setGeometry(QRect(20, 550, 540, 67));
        clearBox->setFlat(true);
        horizontalLayout_13 = new QHBoxLayout(clearBox);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_18 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_18);

        clearButton = new QPushButton(clearBox);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout_13->addWidget(clearButton);

        horizontalSpacer_19 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_19);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260 3", nullptr));
        buildBox->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\276\321\202\321\200\320\265\320\267\320\272\320\260", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\320\276 \320\276\321\202\321\200\320\265\320\267\320\272\320\260:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Xn:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Yn:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\206 \320\276\321\202\321\200\320\265\320\267\320\272\320\260:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Xk:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Yk:", nullptr));
        buildButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214", nullptr));
        algorithmBox->setTitle(QApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\320\246\320\224\320\220", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\221\321\200\320\265\320\267\320\265\320\275\321\205\320\265\320\274\320\260 \321\201 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\274\320\270 \321\207\320\270\321\201\320\273\320\260\320\274\320\270", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "\320\221\321\200\320\265\320\267\320\265\320\275\321\205\320\265\320\274\320\260 \321\201 \321\206\320\265\320\273\321\213\320\274\320\270 \321\207\320\270\321\201\320\273\320\260\320\274\320\270", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "\320\221\321\200\320\265\320\267\320\265\320\275\321\205\320\265\320\274\320\260 \321\201 \321\203\321\201\321\202\321\200\320\260\320\275\320\265\320\275\320\270\320\265\320\274 \321\201\321\202\321\203\320\277\320\265\320\275\321\207\320\260\321\202\320\276\321\201\321\202\320\270", nullptr));
        radioButton_5->setText(QApplication::translate("MainWindow", "\320\221\320\270\320\261\320\273\320\270\320\276\321\202\320\265\321\207\320\275\321\213\320\271 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274", nullptr));
        colorBox->setTitle(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202", nullptr));
        radioButton_6->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260", nullptr));
        radioButton_7->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\275\321\213\320\271 \321\206\320\262\320\265\321\202", nullptr));
        chooseButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        compareBox->setTitle(QApplication::translate("MainWindow", "\320\241\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265", nullptr));
        visualButton->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\267\321\203\320\260\320\273\321\214\320\275\321\213\320\265\n"
"\321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270", nullptr));
        timeButton->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\265\n"
"\321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270", nullptr));
        clearBox->setTitle(QString());
        clearButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
