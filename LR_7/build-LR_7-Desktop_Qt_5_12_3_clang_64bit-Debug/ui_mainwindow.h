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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
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
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QRadioButton *clipRadioButton;
    QSpacerItem *verticalSpacer;
    QRadioButton *lineRadioButton;
    QSpacerItem *horizontalSpacer_13;
    QStackedWidget *drawingStackedWidget;
    QWidget *clipPage;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_32;
    QSpacerItem *horizontalSpacer_42;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_19;
    QLineEdit *lineEditXl;
    QSpacerItem *horizontalSpacer_66;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_23;
    QLineEdit *lineEditXr;
    QSpacerItem *horizontalSpacer_67;
    QHBoxLayout *horizontalLayout_34;
    QSpacerItem *horizontalSpacer_68;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_21;
    QLineEdit *lineEditYl;
    QSpacerItem *horizontalSpacer_69;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_20;
    QLineEdit *lineEditYh;
    QSpacerItem *horizontalSpacer_70;
    QWidget *linePage;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_35;
    QSpacerItem *horizontalSpacer_71;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_24;
    QLineEdit *lineEditX1;
    QSpacerItem *horizontalSpacer_72;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_25;
    QLineEdit *lineEditY1;
    QSpacerItem *horizontalSpacer_73;
    QHBoxLayout *horizontalLayout_38;
    QSpacerItem *horizontalSpacer_74;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_26;
    QLineEdit *lineEditX2;
    QSpacerItem *horizontalSpacer_75;
    QHBoxLayout *horizontalLayout_57;
    QLabel *label_40;
    QLineEdit *lineEditY2;
    QSpacerItem *horizontalSpacer_76;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_27;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_7;
    QFrame *lineFrame;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *chooseLineColorButton;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_11;
    QFrame *clipFrame;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *chooseClipColorButton;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_15;
    QFrame *clippedPartFrame;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *chooseClippedPartButton;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *clipButton;
    QSpacerItem *horizontalSpacer_77;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *clearAllButton;
    QSpacerItem *horizontalSpacer_28;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *clearLinesButton;
    QSpacerItem *horizontalSpacer_29;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(780, 10, 300, 550));
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
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(14);
        label_6->setFont(font1);

        horizontalLayout_8->addWidget(label_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        clipRadioButton = new QRadioButton(groupBox);
        clipRadioButton->setObjectName(QString::fromUtf8("clipRadioButton"));
        clipRadioButton->setFont(font1);
        clipRadioButton->setChecked(true);

        verticalLayout->addWidget(clipRadioButton);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        lineRadioButton = new QRadioButton(groupBox);
        lineRadioButton->setObjectName(QString::fromUtf8("lineRadioButton"));
        lineRadioButton->setFont(font1);

        verticalLayout->addWidget(lineRadioButton);


        horizontalLayout_8->addLayout(verticalLayout);

        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_8);

        drawingStackedWidget = new QStackedWidget(groupBox);
        drawingStackedWidget->setObjectName(QString::fromUtf8("drawingStackedWidget"));
        clipPage = new QWidget();
        clipPage->setObjectName(QString::fromUtf8("clipPage"));
        verticalLayout_4 = new QVBoxLayout(clipPage);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalSpacer_42 = new QSpacerItem(14, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_42);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        label_19 = new QLabel(clipPage);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setFont(font1);

        horizontalLayout_28->addWidget(label_19);

        lineEditXl = new QLineEdit(clipPage);
        lineEditXl->setObjectName(QString::fromUtf8("lineEditXl"));
        QFont font2;
        font2.setPointSize(16);
        lineEditXl->setFont(font2);

        horizontalLayout_28->addWidget(lineEditXl);


        horizontalLayout_32->addLayout(horizontalLayout_28);

        horizontalSpacer_66 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_66);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        label_23 = new QLabel(clipPage);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy);
        label_23->setFont(font1);

        horizontalLayout_31->addWidget(label_23);

        lineEditXr = new QLineEdit(clipPage);
        lineEditXr->setObjectName(QString::fromUtf8("lineEditXr"));
        lineEditXr->setFont(font2);

        horizontalLayout_31->addWidget(lineEditXr);


        horizontalLayout_32->addLayout(horizontalLayout_31);

        horizontalSpacer_67 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_67);


        verticalLayout_4->addLayout(horizontalLayout_32);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalSpacer_68 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_68);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        label_21 = new QLabel(clipPage);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setFont(font1);

        horizontalLayout_30->addWidget(label_21);

        lineEditYl = new QLineEdit(clipPage);
        lineEditYl->setObjectName(QString::fromUtf8("lineEditYl"));
        lineEditYl->setFont(font2);

        horizontalLayout_30->addWidget(lineEditYl);


        horizontalLayout_34->addLayout(horizontalLayout_30);

        horizontalSpacer_69 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_69);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        label_20 = new QLabel(clipPage);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setFont(font1);

        horizontalLayout_29->addWidget(label_20);

        lineEditYh = new QLineEdit(clipPage);
        lineEditYh->setObjectName(QString::fromUtf8("lineEditYh"));
        lineEditYh->setFont(font2);

        horizontalLayout_29->addWidget(lineEditYh);


        horizontalLayout_34->addLayout(horizontalLayout_29);

        horizontalSpacer_70 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_70);


        verticalLayout_4->addLayout(horizontalLayout_34);

        drawingStackedWidget->addWidget(clipPage);
        linePage = new QWidget();
        linePage->setObjectName(QString::fromUtf8("linePage"));
        verticalLayout_5 = new QVBoxLayout(linePage);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalSpacer_71 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_71);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        label_24 = new QLabel(linePage);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font1);

        horizontalLayout_36->addWidget(label_24);

        lineEditX1 = new QLineEdit(linePage);
        lineEditX1->setObjectName(QString::fromUtf8("lineEditX1"));
        lineEditX1->setFont(font2);

        horizontalLayout_36->addWidget(lineEditX1);


        horizontalLayout_35->addLayout(horizontalLayout_36);

        horizontalSpacer_72 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_72);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        label_25 = new QLabel(linePage);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font1);

        horizontalLayout_37->addWidget(label_25);

        lineEditY1 = new QLineEdit(linePage);
        lineEditY1->setObjectName(QString::fromUtf8("lineEditY1"));
        lineEditY1->setFont(font2);

        horizontalLayout_37->addWidget(lineEditY1);


        horizontalLayout_35->addLayout(horizontalLayout_37);

        horizontalSpacer_73 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_73);


        verticalLayout_5->addLayout(horizontalLayout_35);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        horizontalSpacer_74 = new QSpacerItem(14, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_74);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        label_26 = new QLabel(linePage);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font1);

        horizontalLayout_39->addWidget(label_26);

        lineEditX2 = new QLineEdit(linePage);
        lineEditX2->setObjectName(QString::fromUtf8("lineEditX2"));
        lineEditX2->setFont(font2);

        horizontalLayout_39->addWidget(lineEditX2);


        horizontalLayout_38->addLayout(horizontalLayout_39);

        horizontalSpacer_75 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_75);

        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setSpacing(6);
        horizontalLayout_57->setObjectName(QString::fromUtf8("horizontalLayout_57"));
        label_40 = new QLabel(linePage);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setFont(font1);

        horizontalLayout_57->addWidget(label_40);

        lineEditY2 = new QLineEdit(linePage);
        lineEditY2->setObjectName(QString::fromUtf8("lineEditY2"));
        lineEditY2->setFont(font2);

        horizontalLayout_57->addWidget(lineEditY2);


        horizontalLayout_38->addLayout(horizontalLayout_57);

        horizontalSpacer_76 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_76);


        verticalLayout_5->addLayout(horizontalLayout_38);

        drawingStackedWidget->addWidget(linePage);

        verticalLayout_3->addWidget(drawingStackedWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setFont(font1);

        horizontalLayout_3->addWidget(addButton);

        horizontalSpacer_27 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

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
        horizontalSpacer_6 = new QSpacerItem(38, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        lineFrame = new QFrame(groupBox_2);
        lineFrame->setObjectName(QString::fromUtf8("lineFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(25);
        sizePolicy1.setVerticalStretch(25);
        sizePolicy1.setHeightForWidth(lineFrame->sizePolicy().hasHeightForWidth());
        lineFrame->setSizePolicy(sizePolicy1);
        lineFrame->setMinimumSize(QSize(25, 25));
        lineFrame->setMaximumSize(QSize(25, 25));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lineFrame->setPalette(palette);
        lineFrame->setAutoFillBackground(true);
        lineFrame->setFrameShape(QFrame::Box);
        lineFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_5->addWidget(lineFrame);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        chooseLineColorButton = new QPushButton(groupBox_2);
        chooseLineColorButton->setObjectName(QString::fromUtf8("chooseLineColorButton"));
        chooseLineColorButton->setFont(font1);

        horizontalLayout_5->addWidget(chooseLineColorButton);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_10 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_11 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        clipFrame = new QFrame(groupBox_2);
        clipFrame->setObjectName(QString::fromUtf8("clipFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clipFrame->sizePolicy().hasHeightForWidth());
        clipFrame->setSizePolicy(sizePolicy2);
        clipFrame->setMinimumSize(QSize(25, 25));
        clipFrame->setMaximumSize(QSize(25, 25));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush4(QColor(0, 0, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush4);
        QBrush brush5(QColor(127, 127, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush5);
        QBrush brush6(QColor(63, 63, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush7(QColor(0, 0, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(0, 0, 170, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        clipFrame->setPalette(palette1);
        clipFrame->setAutoFillBackground(true);
        clipFrame->setFrameShape(QFrame::Box);
        clipFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_6->addWidget(clipFrame);

        horizontalSpacer_12 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        chooseClipColorButton = new QPushButton(groupBox_2);
        chooseClipColorButton->setObjectName(QString::fromUtf8("chooseClipColorButton"));
        chooseClipColorButton->setFont(font1);

        horizontalLayout_6->addWidget(chooseClipColorButton);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_14 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);

        horizontalLayout_7->addWidget(label_5);

        horizontalSpacer_15 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_15);

        clippedPartFrame = new QFrame(groupBox_2);
        clippedPartFrame->setObjectName(QString::fromUtf8("clippedPartFrame"));
        sizePolicy2.setHeightForWidth(clippedPartFrame->sizePolicy().hasHeightForWidth());
        clippedPartFrame->setSizePolicy(sizePolicy2);
        clippedPartFrame->setMinimumSize(QSize(25, 25));
        clippedPartFrame->setMaximumSize(QSize(25, 25));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(252, 1, 7, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(255, 124, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(253, 62, 67, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(126, 0, 3, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(168, 1, 4, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush15(QColor(253, 128, 131, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        clippedPartFrame->setPalette(palette2);
        clippedPartFrame->setAutoFillBackground(true);
        clippedPartFrame->setFrameShape(QFrame::Box);
        clippedPartFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_7->addWidget(clippedPartFrame);

        horizontalSpacer_16 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_16);

        chooseClippedPartButton = new QPushButton(groupBox_2);
        chooseClippedPartButton->setObjectName(QString::fromUtf8("chooseClippedPartButton"));
        chooseClippedPartButton->setFont(font1);

        horizontalLayout_7->addWidget(chooseClippedPartButton);


        verticalLayout_2->addLayout(horizontalLayout_7);

        splitter->addWidget(groupBox_2);
        groupBox_4 = new QGroupBox(splitter);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFlat(true);
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_23 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_23);

        clipButton = new QPushButton(groupBox_4);
        clipButton->setObjectName(QString::fromUtf8("clipButton"));
        clipButton->setFont(font1);

        horizontalLayout_10->addWidget(clipButton);

        horizontalSpacer_77 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_77);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_22 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_22);

        clearAllButton = new QPushButton(groupBox_4);
        clearAllButton->setObjectName(QString::fromUtf8("clearAllButton"));
        clearAllButton->setFont(font1);

        horizontalLayout_9->addWidget(clearAllButton);

        horizontalSpacer_28 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_28);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_24 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_24);

        clearLinesButton = new QPushButton(groupBox_4);
        clearLinesButton->setObjectName(QString::fromUtf8("clearLinesButton"));
        clearLinesButton->setFont(font1);

        horizontalLayout_11->addWidget(clearLinesButton);

        horizontalSpacer_29 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_29);


        verticalLayout_6->addLayout(horizontalLayout_11);

        splitter->addWidget(groupBox_4);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        drawingStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260 7", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \321\204\320\270\320\263\321\203\321\200\321\213", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \320\262\320\262\320\276\320\264\320\260:", nullptr));
        clipRadioButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\201\320\265\320\272\320\260\321\202\320\265\320\273\321\214", nullptr));
        lineRadioButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\200\320\265\320\267\320\276\320\272", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "X\320\273:", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "X\320\277\321\200:", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Y\320\275:", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "Y\320\262:", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "X1:", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Y1:", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "X2:", nullptr));
        label_40->setText(QApplication::translate("MainWindow", "Y2:", nullptr));
        addButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\206\320\262\320\265\321\202\320\260", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\273\320\270\320\275\320\270\320\270", nullptr));
        chooseLineColorButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\276\321\202\321\201\320\265\320\272\320\260\321\202\320\265\320\273\321\217", nullptr));
        chooseClipColorButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\276\321\202\321\201\320\265\321\207\320\265\320\275\320\270\321\217", nullptr));
        chooseClippedPartButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        groupBox_4->setTitle(QString());
        clipButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\201\320\265\321\207\321\214", nullptr));
        clearAllButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
        clearLinesButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\276\321\202\321\200\320\265\320\267\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
