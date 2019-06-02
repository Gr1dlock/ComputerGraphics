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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
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
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *funcComboBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *spinBoxXBeg;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *spinBoxXEnd;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QDoubleSpinBox *spinBoxXStep;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QDoubleSpinBox *spinBoxZBeg;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QDoubleSpinBox *spinBoxZEnd;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QDoubleSpinBox *spinBoxZStep;
    QSpacerItem *horizontalSpacer_14;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_16;
    QFrame *BGFrame;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *chooseBGColorButton;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_21;
    QFrame *lineFrame;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *chooseLineColorButton;
    QSpacerItem *horizontalSpacer_19;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_23;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_24;
    QSlider *sliderX;
    QSpacerItem *horizontalSpacer_25;
    QLabel *tetaXLabel;
    QSpacerItem *horizontalSpacer_34;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_30;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_29;
    QSlider *sliderY;
    QSpacerItem *horizontalSpacer_35;
    QLabel *tetaYLabel;
    QSpacerItem *horizontalSpacer_26;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_31;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_28;
    QSlider *sliderZ;
    QSpacerItem *horizontalSpacer_36;
    QLabel *tetaZLabel;
    QSpacerItem *horizontalSpacer_27;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_32;
    QPushButton *buildButton;
    QSpacerItem *horizontalSpacer_33;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 650);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(780, 10, 400, 600));
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(18);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(90, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        funcComboBox = new QComboBox(groupBox);
        funcComboBox->addItem(QString());
        funcComboBox->addItem(QString());
        funcComboBox->addItem(QString());
        funcComboBox->addItem(QString());
        funcComboBox->addItem(QString());
        funcComboBox->setObjectName(QString::fromUtf8("funcComboBox"));
        funcComboBox->setFont(font1);

        horizontalLayout_2->addWidget(funcComboBox);

        horizontalSpacer_4 = new QSpacerItem(90, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_10 = new QSpacerItem(10, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        spinBoxXBeg = new QDoubleSpinBox(groupBox);
        spinBoxXBeg->setObjectName(QString::fromUtf8("spinBoxXBeg"));
        spinBoxXBeg->setFont(font1);
        spinBoxXBeg->setDecimals(1);
        spinBoxXBeg->setMinimum(-5.000000000000000);
        spinBoxXBeg->setMaximum(5.000000000000000);

        horizontalLayout_4->addWidget(spinBoxXBeg);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        horizontalSpacer_9 = new QSpacerItem(10, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);

        horizontalLayout_5->addWidget(label_4);

        spinBoxXEnd = new QDoubleSpinBox(groupBox);
        spinBoxXEnd->setObjectName(QString::fromUtf8("spinBoxXEnd"));
        spinBoxXEnd->setFont(font1);
        spinBoxXEnd->setDecimals(1);
        spinBoxXEnd->setMinimum(-5.000000000000000);
        spinBoxXEnd->setMaximum(5.000000000000000);
        spinBoxXEnd->setValue(5.000000000000000);

        horizontalLayout_5->addWidget(spinBoxXEnd);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(10, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);

        horizontalLayout_6->addWidget(label_5);

        spinBoxXStep = new QDoubleSpinBox(groupBox);
        spinBoxXStep->setObjectName(QString::fromUtf8("spinBoxXStep"));
        spinBoxXStep->setFont(font1);
        spinBoxXStep->setMaximum(1.000000000000000);
        spinBoxXStep->setSingleStep(0.050000000000000);
        spinBoxXStep->setValue(0.050000000000000);

        horizontalLayout_6->addWidget(spinBoxXStep);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalSpacer_8 = new QSpacerItem(10, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_11 = new QSpacerItem(10, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font1);

        horizontalLayout_9->addWidget(label_6);

        spinBoxZBeg = new QDoubleSpinBox(groupBox);
        spinBoxZBeg->setObjectName(QString::fromUtf8("spinBoxZBeg"));
        spinBoxZBeg->setFont(font1);
        spinBoxZBeg->setDecimals(1);
        spinBoxZBeg->setMinimum(-5.000000000000000);
        spinBoxZBeg->setMaximum(5.000000000000000);

        horizontalLayout_9->addWidget(spinBoxZBeg);


        horizontalLayout_8->addLayout(horizontalLayout_9);

        horizontalSpacer_12 = new QSpacerItem(10, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font1);

        horizontalLayout_10->addWidget(label_7);

        spinBoxZEnd = new QDoubleSpinBox(groupBox);
        spinBoxZEnd->setObjectName(QString::fromUtf8("spinBoxZEnd"));
        spinBoxZEnd->setFont(font1);
        spinBoxZEnd->setDecimals(1);
        spinBoxZEnd->setMinimum(-5.000000000000000);
        spinBoxZEnd->setMaximum(5.000000000000000);
        spinBoxZEnd->setSingleStep(1.000000000000000);
        spinBoxZEnd->setValue(5.000000000000000);

        horizontalLayout_10->addWidget(spinBoxZEnd);


        horizontalLayout_8->addLayout(horizontalLayout_10);

        horizontalSpacer_13 = new QSpacerItem(10, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font1);

        horizontalLayout_11->addWidget(label_8);

        spinBoxZStep = new QDoubleSpinBox(groupBox);
        spinBoxZStep->setObjectName(QString::fromUtf8("spinBoxZStep"));
        spinBoxZStep->setFont(font1);
        spinBoxZStep->setMaximum(5.000000000000000);
        spinBoxZStep->setSingleStep(0.050000000000000);
        spinBoxZStep->setValue(0.100000000000000);

        horizontalLayout_11->addWidget(spinBoxZStep);


        horizontalLayout_8->addLayout(horizontalLayout_11);

        horizontalSpacer_14 = new QSpacerItem(10, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_8);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_15 = new QSpacerItem(35, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font1);

        horizontalLayout_13->addWidget(label_9);

        horizontalSpacer_16 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_16);

        BGFrame = new QFrame(groupBox_2);
        BGFrame->setObjectName(QString::fromUtf8("BGFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BGFrame->sizePolicy().hasHeightForWidth());
        BGFrame->setSizePolicy(sizePolicy1);
        BGFrame->setMinimumSize(QSize(25, 25));
        BGFrame->setMaximumSize(QSize(25, 25));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(50, 50, 50, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(75, 75, 75, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(62, 62, 62, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(25, 25, 25, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(33, 33, 33, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        BGFrame->setPalette(palette);
        BGFrame->setAutoFillBackground(true);
        BGFrame->setFrameShape(QFrame::Box);
        BGFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_13->addWidget(BGFrame);

        horizontalSpacer_17 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_17);

        chooseBGColorButton = new QPushButton(groupBox_2);
        chooseBGColorButton->setObjectName(QString::fromUtf8("chooseBGColorButton"));
        QFont font2;
        font2.setPointSize(14);
        chooseBGColorButton->setFont(font2);

        horizontalLayout_13->addWidget(chooseBGColorButton);

        horizontalSpacer_18 = new QSpacerItem(32, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_18);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_22 = new QSpacerItem(32, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_22);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setFont(font1);

        horizontalLayout_12->addWidget(label_10);

        horizontalSpacer_21 = new QSpacerItem(22, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_21);

        lineFrame = new QFrame(groupBox_2);
        lineFrame->setObjectName(QString::fromUtf8("lineFrame"));
        sizePolicy1.setHeightForWidth(lineFrame->sizePolicy().hasHeightForWidth());
        lineFrame->setSizePolicy(sizePolicy1);
        lineFrame->setMinimumSize(QSize(25, 25));
        lineFrame->setMaximumSize(QSize(25, 25));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush9(QColor(127, 127, 127, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(170, 170, 170, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        lineFrame->setPalette(palette1);
        lineFrame->setAutoFillBackground(true);
        lineFrame->setFrameShape(QFrame::Box);
        lineFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_12->addWidget(lineFrame);

        horizontalSpacer_20 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_20);

        chooseLineColorButton = new QPushButton(groupBox_2);
        chooseLineColorButton->setObjectName(QString::fromUtf8("chooseLineColorButton"));
        chooseLineColorButton->setFont(font2);

        horizontalLayout_12->addWidget(chooseLineColorButton);

        horizontalSpacer_19 = new QSpacerItem(32, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_19);


        verticalLayout_2->addLayout(horizontalLayout_12);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_23 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_23);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font1);

        horizontalLayout_16->addWidget(label_11);

        horizontalSpacer_24 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_24);

        sliderX = new QSlider(groupBox_3);
        sliderX->setObjectName(QString::fromUtf8("sliderX"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sliderX->sizePolicy().hasHeightForWidth());
        sliderX->setSizePolicy(sizePolicy2);
        sliderX->setMinimumSize(QSize(155, 0));
        sliderX->setFont(font1);
        sliderX->setMinimum(-180);
        sliderX->setMaximum(180);
        sliderX->setOrientation(Qt::Horizontal);
        sliderX->setTickPosition(QSlider::NoTicks);
        sliderX->setTickInterval(10);

        horizontalLayout_16->addWidget(sliderX);

        horizontalSpacer_25 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_25);

        tetaXLabel = new QLabel(groupBox_3);
        tetaXLabel->setObjectName(QString::fromUtf8("tetaXLabel"));
        sizePolicy.setHeightForWidth(tetaXLabel->sizePolicy().hasHeightForWidth());
        tetaXLabel->setSizePolicy(sizePolicy);
        tetaXLabel->setMinimumSize(QSize(35, 0));
        tetaXLabel->setFont(font1);

        horizontalLayout_16->addWidget(tetaXLabel);

        horizontalSpacer_34 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_34);


        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_30 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_30);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font1);

        horizontalLayout_15->addWidget(label_12);

        horizontalSpacer_29 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_29);

        sliderY = new QSlider(groupBox_3);
        sliderY->setObjectName(QString::fromUtf8("sliderY"));
        sizePolicy2.setHeightForWidth(sliderY->sizePolicy().hasHeightForWidth());
        sliderY->setSizePolicy(sizePolicy2);
        sliderY->setMinimumSize(QSize(155, 0));
        sliderY->setFont(font1);
        sliderY->setMinimum(-180);
        sliderY->setMaximum(180);
        sliderY->setOrientation(Qt::Horizontal);
        sliderY->setTickPosition(QSlider::NoTicks);
        sliderY->setTickInterval(10);

        horizontalLayout_15->addWidget(sliderY);

        horizontalSpacer_35 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_35);

        tetaYLabel = new QLabel(groupBox_3);
        tetaYLabel->setObjectName(QString::fromUtf8("tetaYLabel"));
        sizePolicy.setHeightForWidth(tetaYLabel->sizePolicy().hasHeightForWidth());
        tetaYLabel->setSizePolicy(sizePolicy);
        tetaYLabel->setMinimumSize(QSize(35, 0));
        tetaYLabel->setFont(font1);

        horizontalLayout_15->addWidget(tetaYLabel);

        horizontalSpacer_26 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_26);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_31 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_31);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font1);

        horizontalLayout_14->addWidget(label_13);

        horizontalSpacer_28 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_28);

        sliderZ = new QSlider(groupBox_3);
        sliderZ->setObjectName(QString::fromUtf8("sliderZ"));
        sizePolicy2.setHeightForWidth(sliderZ->sizePolicy().hasHeightForWidth());
        sliderZ->setSizePolicy(sizePolicy2);
        sliderZ->setMinimumSize(QSize(155, 0));
        sliderZ->setFont(font1);
        sliderZ->setMinimum(-180);
        sliderZ->setMaximum(180);
        sliderZ->setOrientation(Qt::Horizontal);
        sliderZ->setInvertedAppearance(false);
        sliderZ->setInvertedControls(false);
        sliderZ->setTickPosition(QSlider::NoTicks);
        sliderZ->setTickInterval(10);

        horizontalLayout_14->addWidget(sliderZ);

        horizontalSpacer_36 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_36);

        tetaZLabel = new QLabel(groupBox_3);
        tetaZLabel->setObjectName(QString::fromUtf8("tetaZLabel"));
        sizePolicy.setHeightForWidth(tetaZLabel->sizePolicy().hasHeightForWidth());
        tetaZLabel->setSizePolicy(sizePolicy);
        tetaZLabel->setMinimumSize(QSize(35, 0));
        tetaZLabel->setFont(font1);

        horizontalLayout_14->addWidget(tetaZLabel);

        horizontalSpacer_27 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_27);


        verticalLayout_3->addLayout(horizontalLayout_14);

        splitter->addWidget(groupBox_3);
        groupBox_4 = new QGroupBox(splitter);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFlat(true);
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalSpacer_32 = new QSpacerItem(115, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_32);

        buildButton = new QPushButton(groupBox_4);
        buildButton->setObjectName(QString::fromUtf8("buildButton"));
        buildButton->setFont(font1);

        horizontalLayout_17->addWidget(buildButton);

        horizontalSpacer_33 = new QSpacerItem(115, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_33);


        verticalLayout_4->addLayout(horizontalLayout_17);

        splitter->addWidget(groupBox_4);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(sliderX, SIGNAL(valueChanged(int)), tetaXLabel, SLOT(setNum(int)));
        QObject::connect(sliderY, SIGNAL(valueChanged(int)), tetaYLabel, SLOT(setNum(int)));
        QObject::connect(sliderZ, SIGNAL(valueChanged(int)), tetaZLabel, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260 10", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\260\321\217 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214:", nullptr));
        funcComboBox->setItemText(0, QApplication::translate("MainWindow", "placeholder 1", nullptr));
        funcComboBox->setItemText(1, QApplication::translate("MainWindow", "placeholder 2", nullptr));
        funcComboBox->setItemText(2, QApplication::translate("MainWindow", "placeholder 3", nullptr));
        funcComboBox->setItemText(3, QApplication::translate("MainWindow", "placeholder 4", nullptr));
        funcComboBox->setItemText(4, QApplication::translate("MainWindow", "placeholder 5", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "X\320\275:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "X\320\272:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\316\224X:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Z\320\275:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Z\320\272:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\316\224Z:", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260:", nullptr));
        chooseBGColorButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\273\320\270\320\275\320\270\320\271:", nullptr));
        chooseLineColorButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\272\321\200\321\203\320\263 \320\276\321\201\320\270 OX:", nullptr));
        tetaXLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\272\321\200\321\203\320\263 \320\276\321\201\320\270 OY:", nullptr));
        tetaYLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\272\321\200\321\203\320\263 \320\276\321\201\320\270 OZ:", nullptr));
        tetaZLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        groupBox_4->setTitle(QString());
        buildButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
