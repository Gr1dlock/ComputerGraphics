/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditX;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditY;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QRadioButton *figureRadioButton;
    QRadioButton *arbitraryRadioButton;
    QRadioButton *seedRadioButton;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_17;
    QLabel *XLabel;
    QLabel *YLabel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *addPointButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *finishFigureButton;
    QSpacerItem *horizontalSpacer_27;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_7;
    QFrame *BGFrame;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *chooseBGColorButton;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_11;
    QFrame *bordersFrame;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *chooseBordersColorButton;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_15;
    QFrame *fillFrame;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *chooseFillColorButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_23;
    QLabel *label_8;
    QSpinBox *timerSpinBox;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *fillButton;
    QSpacerItem *horizontalSpacer_25;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *withTimeRadioButton;
    QSpacerItem *verticalSpacer;
    QRadioButton *withoutTimeRadioButton;
    QSpacerItem *horizontalSpacer_26;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *clearAllButton;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *clearFillButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 700);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(780, 10, 300, 650));
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(18);
        groupBox->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        lineEditX = new QLineEdit(groupBox);
        lineEditX->setObjectName(QString::fromUtf8("lineEditX"));
        QFont font2;
        font2.setPointSize(16);
        lineEditX->setFont(font2);

        horizontalLayout_2->addWidget(lineEditX);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        lineEditY = new QLineEdit(groupBox);
        lineEditY->setObjectName(QString::fromUtf8("lineEditY"));
        lineEditY->setFont(font2);

        horizontalLayout->addWidget(lineEditY);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_8->addWidget(label_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        figureRadioButton = new QRadioButton(groupBox);
        figureRadioButton->setObjectName(QString::fromUtf8("figureRadioButton"));
        figureRadioButton->setFont(font1);
        figureRadioButton->setChecked(true);

        verticalLayout->addWidget(figureRadioButton);

        arbitraryRadioButton = new QRadioButton(groupBox);
        arbitraryRadioButton->setObjectName(QString::fromUtf8("arbitraryRadioButton"));
        QFont font3;
        font3.setPointSize(13);
        arbitraryRadioButton->setFont(font3);

        verticalLayout->addWidget(arbitraryRadioButton);

        seedRadioButton = new QRadioButton(groupBox);
        seedRadioButton->setObjectName(QString::fromUtf8("seedRadioButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(seedRadioButton->sizePolicy().hasHeightForWidth());
        seedRadioButton->setSizePolicy(sizePolicy1);
        seedRadioButton->setFont(font1);

        verticalLayout->addWidget(seedRadioButton);


        horizontalLayout_8->addLayout(verticalLayout);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setFont(font1);

        horizontalLayout_12->addWidget(label_9);

        horizontalSpacer_17 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_17);

        XLabel = new QLabel(groupBox);
        XLabel->setObjectName(QString::fromUtf8("XLabel"));
        sizePolicy2.setHeightForWidth(XLabel->sizePolicy().hasHeightForWidth());
        XLabel->setSizePolicy(sizePolicy2);
        XLabel->setFont(font1);

        horizontalLayout_12->addWidget(XLabel);

        YLabel = new QLabel(groupBox);
        YLabel->setObjectName(QString::fromUtf8("YLabel"));
        sizePolicy2.setHeightForWidth(YLabel->sizePolicy().hasHeightForWidth());
        YLabel->setSizePolicy(sizePolicy2);
        YLabel->setFont(font1);

        horizontalLayout_12->addWidget(YLabel);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        addPointButton = new QPushButton(groupBox);
        addPointButton->setObjectName(QString::fromUtf8("addPointButton"));
        addPointButton->setFont(font1);

        horizontalLayout_3->addWidget(addPointButton);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        finishFigureButton = new QPushButton(groupBox);
        finishFigureButton->setObjectName(QString::fromUtf8("finishFigureButton"));
        finishFigureButton->setFont(font1);

        horizontalLayout_3->addWidget(finishFigureButton);

        horizontalSpacer_27 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_27);


        verticalLayout_3->addLayout(horizontalLayout_3);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(46, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        BGFrame = new QFrame(groupBox_2);
        BGFrame->setObjectName(QString::fromUtf8("BGFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(25);
        sizePolicy3.setVerticalStretch(25);
        sizePolicy3.setHeightForWidth(BGFrame->sizePolicy().hasHeightForWidth());
        BGFrame->setSizePolicy(sizePolicy3);
        BGFrame->setMinimumSize(QSize(25, 25));
        BGFrame->setMaximumSize(QSize(25, 25));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush1(QColor(127, 127, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        QBrush brush2(QColor(170, 170, 170, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        BGFrame->setPalette(palette);
        BGFrame->setAutoFillBackground(true);
        BGFrame->setFrameShape(QFrame::Box);
        BGFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_5->addWidget(BGFrame);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        chooseBGColorButton = new QPushButton(groupBox_2);
        chooseBGColorButton->setObjectName(QString::fromUtf8("chooseBGColorButton"));
        chooseBGColorButton->setFont(font1);

        horizontalLayout_5->addWidget(chooseBGColorButton);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_10 = new QSpacerItem(33, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_11 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        bordersFrame = new QFrame(groupBox_2);
        bordersFrame->setObjectName(QString::fromUtf8("bordersFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bordersFrame->sizePolicy().hasHeightForWidth());
        bordersFrame->setSizePolicy(sizePolicy4);
        bordersFrame->setMinimumSize(QSize(25, 25));
        bordersFrame->setMaximumSize(QSize(25, 25));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        QBrush brush6(QColor(255, 255, 255, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        bordersFrame->setPalette(palette1);
        bordersFrame->setAutoFillBackground(true);
        bordersFrame->setFrameShape(QFrame::Box);
        bordersFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_6->addWidget(bordersFrame);

        horizontalSpacer_12 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        chooseBordersColorButton = new QPushButton(groupBox_2);
        chooseBordersColorButton->setObjectName(QString::fromUtf8("chooseBordersColorButton"));
        chooseBordersColorButton->setFont(font1);

        horizontalLayout_6->addWidget(chooseBordersColorButton);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_14 = new QSpacerItem(26, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);

        horizontalLayout_7->addWidget(label_5);

        horizontalSpacer_15 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_15);

        fillFrame = new QFrame(groupBox_2);
        fillFrame->setObjectName(QString::fromUtf8("fillFrame"));
        sizePolicy4.setHeightForWidth(fillFrame->sizePolicy().hasHeightForWidth());
        fillFrame->setSizePolicy(sizePolicy4);
        fillFrame->setMinimumSize(QSize(25, 25));
        fillFrame->setMaximumSize(QSize(25, 25));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(0, 0, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush8(QColor(127, 127, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(63, 63, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(0, 0, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(0, 0, 170, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        fillFrame->setPalette(palette2);
        fillFrame->setAutoFillBackground(true);
        fillFrame->setFrameShape(QFrame::Box);
        fillFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_7->addWidget(fillFrame);

        horizontalSpacer_16 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_16);

        chooseFillColorButton = new QPushButton(groupBox_2);
        chooseFillColorButton->setObjectName(QString::fromUtf8("chooseFillColorButton"));
        chooseFillColorButton->setFont(font1);

        horizontalLayout_7->addWidget(chooseFillColorButton);


        verticalLayout_2->addLayout(horizontalLayout_7);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        groupBox_3->setFlat(false);
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_23 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_23);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font1);

        horizontalLayout_10->addWidget(label_8);

        timerSpinBox = new QSpinBox(groupBox_3);
        timerSpinBox->setObjectName(QString::fromUtf8("timerSpinBox"));
        timerSpinBox->setFont(font2);
        timerSpinBox->setMaximum(5000);

        horizontalLayout_10->addWidget(timerSpinBox);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font1);

        horizontalLayout_10->addWidget(label_7);

        horizontalSpacer_22 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_22);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_24 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_24);

        fillButton = new QPushButton(groupBox_3);
        fillButton->setObjectName(QString::fromUtf8("fillButton"));
        fillButton->setFont(font1);

        horizontalLayout_9->addWidget(fillButton);

        horizontalSpacer_25 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_25);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        withTimeRadioButton = new QRadioButton(groupBox_3);
        withTimeRadioButton->setObjectName(QString::fromUtf8("withTimeRadioButton"));
        withTimeRadioButton->setFont(font1);
        withTimeRadioButton->setChecked(true);

        verticalLayout_6->addWidget(withTimeRadioButton);

        verticalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer);

        withoutTimeRadioButton = new QRadioButton(groupBox_3);
        withoutTimeRadioButton->setObjectName(QString::fromUtf8("withoutTimeRadioButton"));
        withoutTimeRadioButton->setFont(font1);

        verticalLayout_6->addWidget(withoutTimeRadioButton);


        horizontalLayout_9->addLayout(verticalLayout_6);

        horizontalSpacer_26 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_26);


        verticalLayout_7->addLayout(horizontalLayout_9);

        splitter->addWidget(groupBox_3);
        groupBox_4 = new QGroupBox(splitter);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFlat(true);
        horizontalLayout_11 = new QHBoxLayout(groupBox_4);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        clearAllButton = new QPushButton(groupBox_4);
        clearAllButton->setObjectName(QString::fromUtf8("clearAllButton"));
        clearAllButton->setFont(font1);

        horizontalLayout_11->addWidget(clearAllButton);

        horizontalSpacer_28 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_28);

        clearFillButton = new QPushButton(groupBox_4);
        clearFillButton->setObjectName(QString::fromUtf8("clearFillButton"));
        clearFillButton->setMinimumSize(QSize(140, 0));
        clearFillButton->setFont(font1);

        horizontalLayout_11->addWidget(clearFillButton);

        splitter->addWidget(groupBox_4);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260 6", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \321\204\320\270\320\263\321\203\321\200\321\213", nullptr));
        label->setText(QApplication::translate("MainWindow", "X:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \320\262\320\262\320\276\320\264\320\260:", nullptr));
        figureRadioButton->setText(QApplication::translate("MainWindow", "\320\234\320\275\320\276\320\263\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        arbitraryRadioButton->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\273\321\214\320\275\320\260\321\217 \320\276\320\261\320\273\320\260\321\201\321\202\321\214", nullptr));
        seedRadioButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\202\321\200\320\260\320\262\320\276\321\207\320\275\321\213\320\271 \320\277\320\270\320\272\321\201\320\265\320\273\321\214", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\202\321\200\320\260\320\262\320\276\321\207\320\275\321\213\320\271 \320\277\320\270\320\272\321\201\320\265\320\273\321\214:", nullptr));
        XLabel->setText(QApplication::translate("MainWindow", "X = 0", nullptr));
        YLabel->setText(QApplication::translate("MainWindow", "Y = 0", nullptr));
        addPointButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        finishFigureButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\274\320\272\320\275\321\203\321\202\321\214", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\206\320\262\320\265\321\202\320\260", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260", nullptr));
        chooseBGColorButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\263\321\200\320\260\320\275\320\270\321\206", nullptr));
        chooseBordersColorButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\267\320\260\320\273\320\270\320\262\320\272\320\270", nullptr));
        chooseFillColorButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\227\320\260\320\273\320\270\320\262\320\272\320\260", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\265\321\200\320\266\320\272\320\260", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\274\320\270\320\273\320\273\320\270\321\201\320\265\320\272\321\203\320\275\320\264", nullptr));
        fillButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\273\320\270\321\202\321\214", nullptr));
        withTimeRadioButton->setText(QApplication::translate("MainWindow", "\320\241 \320\267\320\260\320\264\320\265\321\200\320\266\320\272\320\276\320\271", nullptr));
        withoutTimeRadioButton->setText(QApplication::translate("MainWindow", "\320\221\320\265\320\267 \320\267\320\260\320\264\320\265\321\200\320\266\320\272\320\270", nullptr));
        groupBox_4->setTitle(QString());
        clearAllButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
        clearFillButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\267\320\260\320\273\320\270\320\262\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
