/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "include/ui/droptextedit.h"
#include "include/ui/htmltablerangeview.h"
#include "qstextedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionabout;
    QAction *actionversion;
    QAction *actionZN_CH;
    QAction *actionEnghish;
    QAction *actionEng;
    QAction *actionChinese;
    QAction *actionimport_IP_range;
    QAction *actionimport_OOP_range;
    QAction *actionexport_IP_range;
    QAction *actionexport_OOP_range;
    QAction *actionjson;
    QAction *actionSettings;
    QAction *actionimport;
    QAction *actionexport;
    QAction *actionclear_all;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *inputLayout;
    QVBoxLayout *rangeLayout;
    QHBoxLayout *horizontalLayout_25;
    QTabWidget *tabWidget;
    QWidget *IpRange;
    QVBoxLayout *verticalLayout;
    DropTextEdit *ipRangeText;
    QWidget *OopRange;
    QVBoxLayout *verticalLayout_2;
    DropTextEdit *oopRangeText;
    QVBoxLayout *verticalLayout_12;
    HtmlTableRangeView *IpRangeTableView;
    QPushButton *ipRangeSelectButtom;
    QVBoxLayout *verticalLayout_13;
    HtmlTableRangeView *oopRangeTableView;
    QPushButton *oopRangeSelectButtom;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *boardLayout;
    QLabel *label;
    QTextEdit *boardText;
    QPushButton *selectBoardButton;
    QVBoxLayout *inputStaticsLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *flop_ip_bet;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *flop_ip_raise;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *flop_ip_allin;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QLineEdit *turn_ip_bet;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_8;
    QLineEdit *turn_ip_raise;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *turn_ip_allin;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_12;
    QLineEdit *river_ip_bet;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_10;
    QLineEdit *river_ip_raise;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *river_ip_allin;
    QHBoxLayout *horizontalLayout_52;
    QPushButton *copyButtom;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_13;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_16;
    QLineEdit *flop_oop_bet;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_14;
    QLineEdit *flop_oop_raise;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_21;
    QCheckBox *flop_oop_allin;
    QHBoxLayout *horizontalLayout_12;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_58;
    QLineEdit *turn_oop_bet;
    QLabel *label_59;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_56;
    QLineEdit *turn_oop_raise;
    QLabel *label_57;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_60;
    QLineEdit *turn_oop_donk;
    QLabel *label_61;
    QHBoxLayout *horizontalLayout_44;
    QCheckBox *turn_oop_allin;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_64;
    QLineEdit *river_oop_bet;
    QLabel *label_65;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_62;
    QLineEdit *river_oop_raise;
    QLabel *label_63;
    QHBoxLayout *horizontalLayout_47;
    QLabel *label_66;
    QLineEdit *river_oop_donk;
    QLabel *label_67;
    QHBoxLayout *horizontalLayout_48;
    QCheckBox *river_oop_allin;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_49;
    QLabel *label_68;
    QLineEdit *raiseLimitText;
    QLabel *label_69;
    QLineEdit *potText;
    QLabel *label_70;
    QLineEdit *effectiveStackText;
    QLabel *label_71;
    QComboBox *mode_box;
    QHBoxLayout *horizontalLayout_54;
    QLabel *label_75;
    QLineEdit *allinThresholdText;
    QLabel *label_76;
    QCheckBox *useIsoCheck;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_50;
    QPushButton *buildTreeButtom;
    QPushButton *estimateMemoryButtom;
    QVBoxLayout *SolverOptionsLayout;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_18;
    QLineEdit *iterationText;
    QLabel *label_19;
    QLineEdit *exploitabilityText;
    QLabel *label_72;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_73;
    QLineEdit *logIntervalText;
    QLabel *label_74;
    QLineEdit *threadsText;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttomSolve;
    QPushButton *stopSolvingButton;
    QPushButton *showResultButton;
    QVBoxLayout *infoLayout;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *exportCurrentParameterButton;
    QPushButton *openParametersFolderButton;
    QSpacerItem *horizontalSpacer_4;
    QTreeView *parametersTreeView;
    QSTextEdit *logOutput;
    QPushButton *clearLogButtom;
    QMenuBar *menuBar;
    QMenu *menusolver;
    QMenu *menustrategy_2;
    QMenu *menuexport_to_file;
    QMenu *menuparameters;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1046, 935);
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QString::fromUtf8("actionabout"));
        actionversion = new QAction(MainWindow);
        actionversion->setObjectName(QString::fromUtf8("actionversion"));
        actionZN_CH = new QAction(MainWindow);
        actionZN_CH->setObjectName(QString::fromUtf8("actionZN_CH"));
        actionEnghish = new QAction(MainWindow);
        actionEnghish->setObjectName(QString::fromUtf8("actionEnghish"));
        actionEng = new QAction(MainWindow);
        actionEng->setObjectName(QString::fromUtf8("actionEng"));
        actionChinese = new QAction(MainWindow);
        actionChinese->setObjectName(QString::fromUtf8("actionChinese"));
        actionimport_IP_range = new QAction(MainWindow);
        actionimport_IP_range->setObjectName(QString::fromUtf8("actionimport_IP_range"));
        actionimport_OOP_range = new QAction(MainWindow);
        actionimport_OOP_range->setObjectName(QString::fromUtf8("actionimport_OOP_range"));
        actionexport_IP_range = new QAction(MainWindow);
        actionexport_IP_range->setObjectName(QString::fromUtf8("actionexport_IP_range"));
        actionexport_OOP_range = new QAction(MainWindow);
        actionexport_OOP_range->setObjectName(QString::fromUtf8("actionexport_OOP_range"));
        actionjson = new QAction(MainWindow);
        actionjson->setObjectName(QString::fromUtf8("actionjson"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionimport = new QAction(MainWindow);
        actionimport->setObjectName(QString::fromUtf8("actionimport"));
        actionexport = new QAction(MainWindow);
        actionexport->setObjectName(QString::fromUtf8("actionexport"));
        actionclear_all = new QAction(MainWindow);
        actionclear_all->setObjectName(QString::fromUtf8("actionclear_all"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        inputLayout = new QVBoxLayout();
        inputLayout->setSpacing(0);
        inputLayout->setObjectName(QString::fromUtf8("inputLayout"));
        rangeLayout = new QVBoxLayout();
        rangeLayout->setSpacing(6);
        rangeLayout->setObjectName(QString::fromUtf8("rangeLayout"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        IpRange = new QWidget();
        IpRange->setObjectName(QString::fromUtf8("IpRange"));
        verticalLayout = new QVBoxLayout(IpRange);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ipRangeText = new DropTextEdit(IpRange);
        ipRangeText->setObjectName(QString::fromUtf8("ipRangeText"));

        verticalLayout->addWidget(ipRangeText);

        tabWidget->addTab(IpRange, QString());
        OopRange = new QWidget();
        OopRange->setObjectName(QString::fromUtf8("OopRange"));
        verticalLayout_2 = new QVBoxLayout(OopRange);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        oopRangeText = new DropTextEdit(OopRange);
        oopRangeText->setObjectName(QString::fromUtf8("oopRangeText"));

        verticalLayout_2->addWidget(oopRangeText);

        tabWidget->addTab(OopRange, QString());

        horizontalLayout_25->addWidget(tabWidget);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        IpRangeTableView = new HtmlTableRangeView(centralWidget);
        IpRangeTableView->setObjectName(QString::fromUtf8("IpRangeTableView"));
        IpRangeTableView->horizontalHeader()->setVisible(false);
        IpRangeTableView->verticalHeader()->setVisible(false);

        verticalLayout_12->addWidget(IpRangeTableView);

        ipRangeSelectButtom = new QPushButton(centralWidget);
        ipRangeSelectButtom->setObjectName(QString::fromUtf8("ipRangeSelectButtom"));

        verticalLayout_12->addWidget(ipRangeSelectButtom);


        horizontalLayout_25->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        oopRangeTableView = new HtmlTableRangeView(centralWidget);
        oopRangeTableView->setObjectName(QString::fromUtf8("oopRangeTableView"));
        oopRangeTableView->horizontalHeader()->setVisible(false);
        oopRangeTableView->verticalHeader()->setVisible(false);

        verticalLayout_13->addWidget(oopRangeTableView);

        oopRangeSelectButtom = new QPushButton(centralWidget);
        oopRangeSelectButtom->setObjectName(QString::fromUtf8("oopRangeSelectButtom"));

        verticalLayout_13->addWidget(oopRangeSelectButtom);


        horizontalLayout_25->addLayout(verticalLayout_13);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_5);

        horizontalLayout_25->setStretch(0, 2);
        horizontalLayout_25->setStretch(1, 1);
        horizontalLayout_25->setStretch(2, 1);
        horizontalLayout_25->setStretch(3, 3);

        rangeLayout->addLayout(horizontalLayout_25);


        inputLayout->addLayout(rangeLayout);

        boardLayout = new QVBoxLayout();
        boardLayout->setSpacing(6);
        boardLayout->setObjectName(QString::fromUtf8("boardLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        boardLayout->addWidget(label);

        boardText = new QTextEdit(centralWidget);
        boardText->setObjectName(QString::fromUtf8("boardText"));

        boardLayout->addWidget(boardText);

        selectBoardButton = new QPushButton(centralWidget);
        selectBoardButton->setObjectName(QString::fromUtf8("selectBoardButton"));

        boardLayout->addWidget(selectBoardButton);


        inputLayout->addLayout(boardLayout);

        inputStaticsLayout = new QVBoxLayout();
        inputStaticsLayout->setSpacing(6);
        inputStaticsLayout->setObjectName(QString::fromUtf8("inputStaticsLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        flop_ip_bet = new QLineEdit(groupBox);
        flop_ip_bet->setObjectName(QString::fromUtf8("flop_ip_bet"));

        horizontalLayout_4->addWidget(flop_ip_bet);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        flop_ip_raise = new QLineEdit(groupBox);
        flop_ip_raise->setObjectName(QString::fromUtf8("flop_ip_raise"));

        horizontalLayout_7->addWidget(flop_ip_raise);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        flop_ip_allin = new QCheckBox(groupBox);
        flop_ip_allin->setObjectName(QString::fromUtf8("flop_ip_allin"));
        flop_ip_allin->setChecked(true);

        horizontalLayout_5->addWidget(flop_ip_allin);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_10->addWidget(groupBox);


        horizontalLayout_3->addLayout(horizontalLayout_10);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        turn_ip_bet = new QLineEdit(groupBox_2);
        turn_ip_bet->setObjectName(QString::fromUtf8("turn_ip_bet"));

        horizontalLayout_9->addWidget(turn_ip_bet);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_14->addWidget(label_8);

        turn_ip_raise = new QLineEdit(groupBox_2);
        turn_ip_raise->setObjectName(QString::fromUtf8("turn_ip_raise"));

        horizontalLayout_14->addWidget(turn_ip_raise);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_14->addWidget(label_9);


        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        turn_ip_allin = new QCheckBox(groupBox_2);
        turn_ip_allin->setObjectName(QString::fromUtf8("turn_ip_allin"));
        turn_ip_allin->setChecked(true);

        horizontalLayout_15->addWidget(turn_ip_allin);


        verticalLayout_5->addLayout(horizontalLayout_15);


        verticalLayout_4->addWidget(groupBox_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_17->addWidget(label_12);

        river_ip_bet = new QLineEdit(groupBox_3);
        river_ip_bet->setObjectName(QString::fromUtf8("river_ip_bet"));

        horizontalLayout_17->addWidget(river_ip_bet);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_17->addWidget(label_13);


        verticalLayout_6->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_16->addWidget(label_10);

        river_ip_raise = new QLineEdit(groupBox_3);
        river_ip_raise->setObjectName(QString::fromUtf8("river_ip_raise"));

        horizontalLayout_16->addWidget(river_ip_raise);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_16->addWidget(label_11);


        verticalLayout_6->addLayout(horizontalLayout_16);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        river_ip_allin = new QCheckBox(groupBox_3);
        river_ip_allin->setObjectName(QString::fromUtf8("river_ip_allin"));
        river_ip_allin->setChecked(true);

        horizontalLayout_18->addWidget(river_ip_allin);


        verticalLayout_6->addLayout(horizontalLayout_18);


        horizontalLayout_8->addWidget(groupBox_3);


        horizontalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        inputStaticsLayout->addLayout(horizontalLayout_3);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setSpacing(6);
        horizontalLayout_52->setObjectName(QString::fromUtf8("horizontalLayout_52"));
        copyButtom = new QPushButton(centralWidget);
        copyButtom->setObjectName(QString::fromUtf8("copyButtom"));

        horizontalLayout_52->addWidget(copyButtom);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_52->addItem(horizontalSpacer_3);


        inputStaticsLayout->addLayout(horizontalLayout_52);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_7 = new QVBoxLayout(groupBox_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_20->addWidget(label_16);

        flop_oop_bet = new QLineEdit(groupBox_4);
        flop_oop_bet->setObjectName(QString::fromUtf8("flop_oop_bet"));

        horizontalLayout_20->addWidget(flop_oop_bet);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_20->addWidget(label_17);


        verticalLayout_7->addLayout(horizontalLayout_20);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_19->addWidget(label_14);

        flop_oop_raise = new QLineEdit(groupBox_4);
        flop_oop_raise->setObjectName(QString::fromUtf8("flop_oop_raise"));

        horizontalLayout_19->addWidget(flop_oop_raise);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_19->addWidget(label_15);


        verticalLayout_7->addLayout(horizontalLayout_19);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        flop_oop_allin = new QCheckBox(groupBox_4);
        flop_oop_allin->setObjectName(QString::fromUtf8("flop_oop_allin"));
        flop_oop_allin->setChecked(true);

        horizontalLayout_21->addWidget(flop_oop_allin);


        verticalLayout_7->addLayout(horizontalLayout_21);


        horizontalLayout_13->addWidget(groupBox_4);


        horizontalLayout_6->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_8 = new QVBoxLayout(groupBox_5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        label_58 = new QLabel(groupBox_5);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        horizontalLayout_42->addWidget(label_58);

        turn_oop_bet = new QLineEdit(groupBox_5);
        turn_oop_bet->setObjectName(QString::fromUtf8("turn_oop_bet"));

        horizontalLayout_42->addWidget(turn_oop_bet);

        label_59 = new QLabel(groupBox_5);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        horizontalLayout_42->addWidget(label_59);


        verticalLayout_8->addLayout(horizontalLayout_42);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        label_56 = new QLabel(groupBox_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        horizontalLayout_41->addWidget(label_56);

        turn_oop_raise = new QLineEdit(groupBox_5);
        turn_oop_raise->setObjectName(QString::fromUtf8("turn_oop_raise"));

        horizontalLayout_41->addWidget(turn_oop_raise);

        label_57 = new QLabel(groupBox_5);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        horizontalLayout_41->addWidget(label_57);


        verticalLayout_8->addLayout(horizontalLayout_41);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        label_60 = new QLabel(groupBox_5);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        horizontalLayout_43->addWidget(label_60);

        turn_oop_donk = new QLineEdit(groupBox_5);
        turn_oop_donk->setObjectName(QString::fromUtf8("turn_oop_donk"));

        horizontalLayout_43->addWidget(turn_oop_donk);

        label_61 = new QLabel(groupBox_5);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        horizontalLayout_43->addWidget(label_61);


        verticalLayout_8->addLayout(horizontalLayout_43);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        turn_oop_allin = new QCheckBox(groupBox_5);
        turn_oop_allin->setObjectName(QString::fromUtf8("turn_oop_allin"));
        turn_oop_allin->setChecked(true);

        horizontalLayout_44->addWidget(turn_oop_allin);


        verticalLayout_8->addLayout(horizontalLayout_44);


        horizontalLayout_12->addWidget(groupBox_5);


        horizontalLayout_6->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_9 = new QVBoxLayout(groupBox_6);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        label_64 = new QLabel(groupBox_6);
        label_64->setObjectName(QString::fromUtf8("label_64"));

        horizontalLayout_46->addWidget(label_64);

        river_oop_bet = new QLineEdit(groupBox_6);
        river_oop_bet->setObjectName(QString::fromUtf8("river_oop_bet"));

        horizontalLayout_46->addWidget(river_oop_bet);

        label_65 = new QLabel(groupBox_6);
        label_65->setObjectName(QString::fromUtf8("label_65"));

        horizontalLayout_46->addWidget(label_65);


        verticalLayout_9->addLayout(horizontalLayout_46);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setSpacing(6);
        horizontalLayout_45->setObjectName(QString::fromUtf8("horizontalLayout_45"));
        label_62 = new QLabel(groupBox_6);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        horizontalLayout_45->addWidget(label_62);

        river_oop_raise = new QLineEdit(groupBox_6);
        river_oop_raise->setObjectName(QString::fromUtf8("river_oop_raise"));

        horizontalLayout_45->addWidget(river_oop_raise);

        label_63 = new QLabel(groupBox_6);
        label_63->setObjectName(QString::fromUtf8("label_63"));

        horizontalLayout_45->addWidget(label_63);


        verticalLayout_9->addLayout(horizontalLayout_45);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setSpacing(6);
        horizontalLayout_47->setObjectName(QString::fromUtf8("horizontalLayout_47"));
        label_66 = new QLabel(groupBox_6);
        label_66->setObjectName(QString::fromUtf8("label_66"));

        horizontalLayout_47->addWidget(label_66);

        river_oop_donk = new QLineEdit(groupBox_6);
        river_oop_donk->setObjectName(QString::fromUtf8("river_oop_donk"));

        horizontalLayout_47->addWidget(river_oop_donk);

        label_67 = new QLabel(groupBox_6);
        label_67->setObjectName(QString::fromUtf8("label_67"));

        horizontalLayout_47->addWidget(label_67);


        verticalLayout_9->addLayout(horizontalLayout_47);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setSpacing(6);
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        river_oop_allin = new QCheckBox(groupBox_6);
        river_oop_allin->setObjectName(QString::fromUtf8("river_oop_allin"));
        river_oop_allin->setChecked(true);

        horizontalLayout_48->addWidget(river_oop_allin);


        verticalLayout_9->addLayout(horizontalLayout_48);


        horizontalLayout_11->addWidget(groupBox_6);


        horizontalLayout_6->addLayout(horizontalLayout_11);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 1);

        inputStaticsLayout->addLayout(horizontalLayout_6);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setSpacing(6);
        horizontalLayout_49->setObjectName(QString::fromUtf8("horizontalLayout_49"));
        label_68 = new QLabel(centralWidget);
        label_68->setObjectName(QString::fromUtf8("label_68"));

        horizontalLayout_49->addWidget(label_68);

        raiseLimitText = new QLineEdit(centralWidget);
        raiseLimitText->setObjectName(QString::fromUtf8("raiseLimitText"));

        horizontalLayout_49->addWidget(raiseLimitText);

        label_69 = new QLabel(centralWidget);
        label_69->setObjectName(QString::fromUtf8("label_69"));

        horizontalLayout_49->addWidget(label_69);

        potText = new QLineEdit(centralWidget);
        potText->setObjectName(QString::fromUtf8("potText"));

        horizontalLayout_49->addWidget(potText);

        label_70 = new QLabel(centralWidget);
        label_70->setObjectName(QString::fromUtf8("label_70"));

        horizontalLayout_49->addWidget(label_70);

        effectiveStackText = new QLineEdit(centralWidget);
        effectiveStackText->setObjectName(QString::fromUtf8("effectiveStackText"));

        horizontalLayout_49->addWidget(effectiveStackText);

        label_71 = new QLabel(centralWidget);
        label_71->setObjectName(QString::fromUtf8("label_71"));

        horizontalLayout_49->addWidget(label_71);

        mode_box = new QComboBox(centralWidget);
        mode_box->addItem(QString());
        mode_box->addItem(QString());
        mode_box->setObjectName(QString::fromUtf8("mode_box"));

        horizontalLayout_49->addWidget(mode_box);


        verticalLayout_15->addLayout(horizontalLayout_49);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setSpacing(6);
        horizontalLayout_54->setObjectName(QString::fromUtf8("horizontalLayout_54"));
        label_75 = new QLabel(centralWidget);
        label_75->setObjectName(QString::fromUtf8("label_75"));

        horizontalLayout_54->addWidget(label_75);

        allinThresholdText = new QLineEdit(centralWidget);
        allinThresholdText->setObjectName(QString::fromUtf8("allinThresholdText"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(allinThresholdText->sizePolicy().hasHeightForWidth());
        allinThresholdText->setSizePolicy(sizePolicy);

        horizontalLayout_54->addWidget(allinThresholdText);

        label_76 = new QLabel(centralWidget);
        label_76->setObjectName(QString::fromUtf8("label_76"));

        horizontalLayout_54->addWidget(label_76);

        useIsoCheck = new QCheckBox(centralWidget);
        useIsoCheck->setObjectName(QString::fromUtf8("useIsoCheck"));
        useIsoCheck->setChecked(true);

        horizontalLayout_54->addWidget(useIsoCheck);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_54->addItem(horizontalSpacer_6);


        verticalLayout_15->addLayout(horizontalLayout_54);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setSpacing(6);
        horizontalLayout_50->setObjectName(QString::fromUtf8("horizontalLayout_50"));
        buildTreeButtom = new QPushButton(centralWidget);
        buildTreeButtom->setObjectName(QString::fromUtf8("buildTreeButtom"));

        horizontalLayout_50->addWidget(buildTreeButtom);

        estimateMemoryButtom = new QPushButton(centralWidget);
        estimateMemoryButtom->setObjectName(QString::fromUtf8("estimateMemoryButtom"));

        horizontalLayout_50->addWidget(estimateMemoryButtom);

        horizontalLayout_50->setStretch(0, 6);

        verticalLayout_15->addLayout(horizontalLayout_50);


        inputStaticsLayout->addLayout(verticalLayout_15);

        inputStaticsLayout->setStretch(0, 3);
        inputStaticsLayout->setStretch(2, 4);

        inputLayout->addLayout(inputStaticsLayout);

        SolverOptionsLayout = new QVBoxLayout();
        SolverOptionsLayout->setSpacing(6);
        SolverOptionsLayout->setObjectName(QString::fromUtf8("SolverOptionsLayout"));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_16 = new QVBoxLayout(groupBox_7);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_18 = new QLabel(groupBox_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_22->addWidget(label_18);

        iterationText = new QLineEdit(groupBox_7);
        iterationText->setObjectName(QString::fromUtf8("iterationText"));

        horizontalLayout_22->addWidget(iterationText);

        label_19 = new QLabel(groupBox_7);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_22->addWidget(label_19);

        exploitabilityText = new QLineEdit(groupBox_7);
        exploitabilityText->setObjectName(QString::fromUtf8("exploitabilityText"));

        horizontalLayout_22->addWidget(exploitabilityText);

        label_72 = new QLabel(groupBox_7);
        label_72->setObjectName(QString::fromUtf8("label_72"));

        horizontalLayout_22->addWidget(label_72);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_2);


        verticalLayout_16->addLayout(horizontalLayout_22);

        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setSpacing(6);
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        label_73 = new QLabel(groupBox_7);
        label_73->setObjectName(QString::fromUtf8("label_73"));

        horizontalLayout_51->addWidget(label_73);

        logIntervalText = new QLineEdit(groupBox_7);
        logIntervalText->setObjectName(QString::fromUtf8("logIntervalText"));

        horizontalLayout_51->addWidget(logIntervalText);

        label_74 = new QLabel(groupBox_7);
        label_74->setObjectName(QString::fromUtf8("label_74"));

        horizontalLayout_51->addWidget(label_74);

        threadsText = new QLineEdit(groupBox_7);
        threadsText->setObjectName(QString::fromUtf8("threadsText"));

        horizontalLayout_51->addWidget(threadsText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_51->addItem(horizontalSpacer);


        verticalLayout_16->addLayout(horizontalLayout_51);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttomSolve = new QPushButton(groupBox_7);
        buttomSolve->setObjectName(QString::fromUtf8("buttomSolve"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttomSolve->sizePolicy().hasHeightForWidth());
        buttomSolve->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(buttomSolve);

        stopSolvingButton = new QPushButton(groupBox_7);
        stopSolvingButton->setObjectName(QString::fromUtf8("stopSolvingButton"));
        sizePolicy1.setHeightForWidth(stopSolvingButton->sizePolicy().hasHeightForWidth());
        stopSolvingButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(stopSolvingButton);

        showResultButton = new QPushButton(groupBox_7);
        showResultButton->setObjectName(QString::fromUtf8("showResultButton"));
        sizePolicy1.setHeightForWidth(showResultButton->sizePolicy().hasHeightForWidth());
        showResultButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(showResultButton);

        horizontalLayout->setStretch(0, 6);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_16->addLayout(horizontalLayout);


        SolverOptionsLayout->addWidget(groupBox_7);


        inputLayout->addLayout(SolverOptionsLayout);

        inputLayout->setStretch(1, 1);
        inputLayout->setStretch(2, 8);
        inputLayout->setStretch(3, 1);

        horizontalLayout_2->addLayout(inputLayout);

        infoLayout = new QVBoxLayout();
        infoLayout->setSpacing(0);
        infoLayout->setObjectName(QString::fromUtf8("infoLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_11 = new QVBoxLayout(groupBox_8);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        exportCurrentParameterButton = new QPushButton(groupBox_8);
        exportCurrentParameterButton->setObjectName(QString::fromUtf8("exportCurrentParameterButton"));

        horizontalLayout_23->addWidget(exportCurrentParameterButton);

        openParametersFolderButton = new QPushButton(groupBox_8);
        openParametersFolderButton->setObjectName(QString::fromUtf8("openParametersFolderButton"));

        horizontalLayout_23->addWidget(openParametersFolderButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_4);


        verticalLayout_11->addLayout(horizontalLayout_23);

        parametersTreeView = new QTreeView(groupBox_8);
        parametersTreeView->setObjectName(QString::fromUtf8("parametersTreeView"));
        parametersTreeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        parametersTreeView->setHeaderHidden(true);
        parametersTreeView->header()->setVisible(false);

        verticalLayout_11->addWidget(parametersTreeView);

        parametersTreeView->raise();

        verticalLayout_10->addWidget(groupBox_8);

        verticalLayout_10->setStretch(0, 1);

        infoLayout->addLayout(verticalLayout_10);

        logOutput = new QSTextEdit(centralWidget);
        logOutput->setObjectName(QString::fromUtf8("logOutput"));

        infoLayout->addWidget(logOutput);

        clearLogButtom = new QPushButton(centralWidget);
        clearLogButtom->setObjectName(QString::fromUtf8("clearLogButtom"));

        infoLayout->addWidget(clearLogButtom);

        infoLayout->setStretch(0, 1);
        infoLayout->setStretch(1, 2);

        horizontalLayout_2->addLayout(infoLayout);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1046, 23));
        menuBar->setMinimumSize(QSize(0, 20));
        menuBar->setNativeMenuBar(false);
        menusolver = new QMenu(menuBar);
        menusolver->setObjectName(QString::fromUtf8("menusolver"));
        menustrategy_2 = new QMenu(menuBar);
        menustrategy_2->setObjectName(QString::fromUtf8("menustrategy_2"));
        menuexport_to_file = new QMenu(menustrategy_2);
        menuexport_to_file->setObjectName(QString::fromUtf8("menuexport_to_file"));
        menuparameters = new QMenu(menuBar);
        menuparameters->setObjectName(QString::fromUtf8("menuparameters"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menusolver->menuAction());
        menuBar->addAction(menustrategy_2->menuAction());
        menuBar->addAction(menuparameters->menuAction());
        menusolver->addAction(actionSettings);
        menustrategy_2->addAction(menuexport_to_file->menuAction());
        menuexport_to_file->addAction(actionjson);
        menuparameters->addAction(actionimport);
        menuparameters->addAction(actionexport);
        menuparameters->addAction(actionclear_all);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionabout->setText(QCoreApplication::translate("MainWindow", "import setting", nullptr));
        actionversion->setText(QCoreApplication::translate("MainWindow", "export current setting", nullptr));
        actionZN_CH->setText(QCoreApplication::translate("MainWindow", "ZN-CH", nullptr));
        actionEnghish->setText(QCoreApplication::translate("MainWindow", "Enghish", nullptr));
        actionEng->setText(QCoreApplication::translate("MainWindow", "Enghish", nullptr));
        actionChinese->setText(QCoreApplication::translate("MainWindow", "Chinese", nullptr));
        actionimport_IP_range->setText(QCoreApplication::translate("MainWindow", "import IP range", nullptr));
        actionimport_OOP_range->setText(QCoreApplication::translate("MainWindow", "import OOP range", nullptr));
        actionexport_IP_range->setText(QCoreApplication::translate("MainWindow", "export IP range", nullptr));
        actionexport_OOP_range->setText(QCoreApplication::translate("MainWindow", "export OOP range", nullptr));
        actionjson->setText(QCoreApplication::translate("MainWindow", "json", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionimport->setText(QCoreApplication::translate("MainWindow", "import", nullptr));
        actionexport->setText(QCoreApplication::translate("MainWindow", "export", nullptr));
        actionclear_all->setText(QCoreApplication::translate("MainWindow", "clear all", nullptr));
        ipRangeText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">AA,KK,QQ,JJ,TT,99:0.75,88:0.75,77:0.5,66:0.25,55:0.25,AK,AQs,AQo:0.75,AJs,AJo:0.5,ATs:0.75,A6s:0.25,A5s:0.75,A4s:0.75,A3s:0.5,A2s:0.5,KQs,KQo:0.5,KJs,KTs:0.75,K5s:0.25,K4s:0.25,QJs:0.75,QTs:0.75,Q9s:0.5,JTs:0.75,J9s:0.75,J8s:0.75,T9s:0.75,T8s:0.75,T7s:0.75,98s:0.75,97s:0.75,96s:0.5,87s:0.75,86s:0.5,85s:0.5,76s:0.75,75s:0.5,65s:0.75,64s:0.5,54s:0.75,53s:0.5,43s:0.5</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(IpRange), QCoreApplication::translate("MainWindow", "IP Range", nullptr));
        oopRangeText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">QQ:0.5,JJ:0.75,TT,99,88,77,66,55,44,33,22,AKo:0.25,AQs,AQo:0.75,AJs,AJo:0.75,ATs,ATo:0.75,A9s,A8s,A7s,A6s,A5s,A4s,A3s,A2s,KQ,KJ,KTs,KTo:0.5,K9s,K8s,K7s,K6s,K5s,K4s:0.5,K3s:0.5,K2s:0.5,QJ,QTs,Q9s,Q8s,Q7s,JTs,JTo:0.5,J9s,J8s,T9s,T8s,T7s,98s,97s,96s,87s,86s,76s,75s,65s,64s,54s,53s,43s</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(OopRange), QCoreApplication::translate("MainWindow", "OOp range", nullptr));
        ipRangeSelectButtom->setText(QCoreApplication::translate("MainWindow", "Select IP", nullptr));
        oopRangeSelectButtom->setText(QCoreApplication::translate("MainWindow", "Select OOP", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Board", nullptr));
        boardText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">Qs,Jh,2h</span></p></body></html>", nullptr));
        selectBoardButton->setText(QCoreApplication::translate("MainWindow", "Select Board Card", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Flop IP", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Bet Sizes : ", nullptr));
        flop_ip_bet->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Raise Sizes: ", nullptr));
        flop_ip_raise->setText(QCoreApplication::translate("MainWindow", "60", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        flop_ip_allin->setText(QCoreApplication::translate("MainWindow", "Add Allin", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Turn IP", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Bet Sizes : ", nullptr));
        turn_ip_bet->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Raise Sizes: ", nullptr));
        turn_ip_raise->setText(QCoreApplication::translate("MainWindow", "60", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        turn_ip_allin->setText(QCoreApplication::translate("MainWindow", "Add Allin", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "River IP", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Bet Sizes : ", nullptr));
        river_ip_bet->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Raise Sizes: ", nullptr));
        river_ip_raise->setText(QCoreApplication::translate("MainWindow", "60 100", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        river_ip_allin->setText(QCoreApplication::translate("MainWindow", "Add Allin", nullptr));
        copyButtom->setText(QCoreApplication::translate("MainWindow", "Copy from Ip to OOP", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Flop OOP", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Bet Sizes : ", nullptr));
        flop_oop_bet->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Raise Sizes: ", nullptr));
        flop_oop_raise->setText(QCoreApplication::translate("MainWindow", "60", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        flop_oop_allin->setText(QCoreApplication::translate("MainWindow", "Add Allin", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Turn OOP", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", "Bet Sizes : ", nullptr));
        turn_oop_bet->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_59->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "Raise Sizes: ", nullptr));
        turn_oop_raise->setText(QCoreApplication::translate("MainWindow", "60", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_60->setText(QCoreApplication::translate("MainWindow", "Donk Sizes: ", nullptr));
        turn_oop_donk->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_61->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        turn_oop_allin->setText(QCoreApplication::translate("MainWindow", "Add Allin", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "River OOP", nullptr));
        label_64->setText(QCoreApplication::translate("MainWindow", "Bet Sizes : ", nullptr));
        river_oop_bet->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_65->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_62->setText(QCoreApplication::translate("MainWindow", "Raise Sizes: ", nullptr));
        river_oop_raise->setText(QCoreApplication::translate("MainWindow", "60 100", nullptr));
        label_63->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_66->setText(QCoreApplication::translate("MainWindow", "Donk Sizes: ", nullptr));
        river_oop_donk->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_67->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        river_oop_allin->setText(QCoreApplication::translate("MainWindow", "Add Allin", nullptr));
        label_68->setText(QCoreApplication::translate("MainWindow", "raise limit: ", nullptr));
        raiseLimitText->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_69->setText(QCoreApplication::translate("MainWindow", "times.      Pot: ", nullptr));
        potText->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_70->setText(QCoreApplication::translate("MainWindow", "Effective Stack: ", nullptr));
        effectiveStackText->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        label_71->setText(QCoreApplication::translate("MainWindow", "  Mode: ", nullptr));
        mode_box->setItemText(0, QCoreApplication::translate("MainWindow", "texas holdem", nullptr));
        mode_box->setItemText(1, QCoreApplication::translate("MainWindow", "shortdeck", nullptr));

        label_75->setText(QCoreApplication::translate("MainWindow", "allin threshold: ", nullptr));
        allinThresholdText->setText(QCoreApplication::translate("MainWindow", "0.67", nullptr));
        label_76->setText(QCoreApplication::translate("MainWindow", "     use isomorphism", nullptr));
        useIsoCheck->setText(QString());
        buildTreeButtom->setText(QCoreApplication::translate("MainWindow", "Build Tree", nullptr));
        estimateMemoryButtom->setText(QCoreApplication::translate("MainWindow", "Estimate Solving Memory", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Solver Options", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "iterations: ", nullptr));
        iterationText->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "times.    stop solving when reach ", nullptr));
        exploitabilityText->setText(QCoreApplication::translate("MainWindow", "0.5", nullptr));
        label_72->setText(QCoreApplication::translate("MainWindow", "% exploitability", nullptr));
        label_73->setText(QCoreApplication::translate("MainWindow", "log interval:  ", nullptr));
        logIntervalText->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_74->setText(QCoreApplication::translate("MainWindow", "threads: ", nullptr));
        threadsText->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        buttomSolve->setText(QCoreApplication::translate("MainWindow", "Start solving", nullptr));
        stopSolvingButton->setText(QCoreApplication::translate("MainWindow", "Stop solving", nullptr));
        showResultButton->setText(QCoreApplication::translate("MainWindow", "ShowResult", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "Parameters", nullptr));
        exportCurrentParameterButton->setText(QCoreApplication::translate("MainWindow", "Export Current Parameter", nullptr));
        openParametersFolderButton->setText(QCoreApplication::translate("MainWindow", "Open Parameters Folder", nullptr));
        clearLogButtom->setText(QCoreApplication::translate("MainWindow", "Clear Log", nullptr));
        menusolver->setTitle(QCoreApplication::translate("MainWindow", "Solver", nullptr));
        menustrategy_2->setTitle(QCoreApplication::translate("MainWindow", "strategy", nullptr));
        menuexport_to_file->setTitle(QCoreApplication::translate("MainWindow", "export to file", nullptr));
        menuparameters->setTitle(QCoreApplication::translate("MainWindow", "parameters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
