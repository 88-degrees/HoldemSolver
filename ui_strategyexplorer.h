/********************************************************************************
** Form generated from reading UI file 'strategyexplorer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRATEGYEXPLORER_H
#define UI_STRATEGYEXPLORER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "htmltableview.h"
#include "qstreeview.h"

QT_BEGIN_NAMESPACE

class Ui_StrategyExplorer
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QSTreeView *gameTreeView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *turnCardBox;
    QLabel *label_2;
    QComboBox *riverCardBox;
    HtmlTableView *strategyTableView;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    HtmlTableView *roughStrategyView;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *boardLabel;
    QVBoxLayout *verticalLayout_8;
    QLabel *nodeDisplayLabel;
    QHBoxLayout *modeChoseLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QPushButton *ipRangeButtom;
    QPushButton *oopRangeButtom;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QPushButton *strategyModeButtom;
    QPushButton *evModeButtom;
    QPushButton *evOnlyModeButtom;
    QHBoxLayout *detailInformationLayout;
    HtmlTableView *detailView;

    void setupUi(QDialog *StrategyExplorer)
    {
        if (StrategyExplorer->objectName().isEmpty())
            StrategyExplorer->setObjectName(QString::fromUtf8("StrategyExplorer"));
        StrategyExplorer->resize(1037, 721);
        horizontalLayout = new QHBoxLayout(StrategyExplorer);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(StrategyExplorer);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gameTreeView = new QSTreeView(groupBox);
        gameTreeView->setObjectName(QString::fromUtf8("gameTreeView"));
        gameTreeView->header()->setVisible(false);

        verticalLayout_3->addWidget(gameTreeView);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(StrategyExplorer);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label);

        turnCardBox = new QComboBox(StrategyExplorer);
        turnCardBox->setObjectName(QString::fromUtf8("turnCardBox"));

        horizontalLayout_3->addWidget(turnCardBox);

        label_2 = new QLabel(StrategyExplorer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        riverCardBox = new QComboBox(StrategyExplorer);
        riverCardBox->setObjectName(QString::fromUtf8("riverCardBox"));

        horizontalLayout_3->addWidget(riverCardBox);


        verticalLayout->addLayout(horizontalLayout_3);

        strategyTableView = new HtmlTableView(StrategyExplorer);
        strategyTableView->setObjectName(QString::fromUtf8("strategyTableView"));
        strategyTableView->setStyleSheet(QString::fromUtf8(""));
        strategyTableView->horizontalHeader()->setVisible(false);
        strategyTableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(strategyTableView);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(2, 8);

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(StrategyExplorer);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFlat(true);
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        roughStrategyView = new HtmlTableView(groupBox_2);
        roughStrategyView->setObjectName(QString::fromUtf8("roughStrategyView"));
        roughStrategyView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        roughStrategyView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        roughStrategyView->horizontalHeader()->setVisible(false);
        roughStrategyView->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(roughStrategyView);


        verticalLayout_2->addWidget(groupBox_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        boardLabel = new QLabel(StrategyExplorer);
        boardLabel->setObjectName(QString::fromUtf8("boardLabel"));

        horizontalLayout_6->addWidget(boardLabel);


        verticalLayout_7->addLayout(horizontalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        nodeDisplayLabel = new QLabel(StrategyExplorer);
        nodeDisplayLabel->setObjectName(QString::fromUtf8("nodeDisplayLabel"));

        verticalLayout_8->addWidget(nodeDisplayLabel);


        verticalLayout_7->addLayout(verticalLayout_8);


        verticalLayout_2->addLayout(verticalLayout_7);

        modeChoseLayout = new QHBoxLayout();
        modeChoseLayout->setObjectName(QString::fromUtf8("modeChoseLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(StrategyExplorer);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        ipRangeButtom = new QPushButton(StrategyExplorer);
        ipRangeButtom->setObjectName(QString::fromUtf8("ipRangeButtom"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ipRangeButtom->sizePolicy().hasHeightForWidth());
        ipRangeButtom->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(ipRangeButtom);

        oopRangeButtom = new QPushButton(StrategyExplorer);
        oopRangeButtom->setObjectName(QString::fromUtf8("oopRangeButtom"));
        sizePolicy1.setHeightForWidth(oopRangeButtom->sizePolicy().hasHeightForWidth());
        oopRangeButtom->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(oopRangeButtom);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 1);

        modeChoseLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(StrategyExplorer);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);

        strategyModeButtom = new QPushButton(StrategyExplorer);
        strategyModeButtom->setObjectName(QString::fromUtf8("strategyModeButtom"));
        sizePolicy1.setHeightForWidth(strategyModeButtom->sizePolicy().hasHeightForWidth());
        strategyModeButtom->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(strategyModeButtom);

        evModeButtom = new QPushButton(StrategyExplorer);
        evModeButtom->setObjectName(QString::fromUtf8("evModeButtom"));
        sizePolicy1.setHeightForWidth(evModeButtom->sizePolicy().hasHeightForWidth());
        evModeButtom->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(evModeButtom);

        evOnlyModeButtom = new QPushButton(StrategyExplorer);
        evOnlyModeButtom->setObjectName(QString::fromUtf8("evOnlyModeButtom"));
        sizePolicy1.setHeightForWidth(evOnlyModeButtom->sizePolicy().hasHeightForWidth());
        evOnlyModeButtom->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(evOnlyModeButtom);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(2, 1);

        modeChoseLayout->addLayout(verticalLayout_6);

        modeChoseLayout->setStretch(0, 1);
        modeChoseLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(modeChoseLayout);

        detailInformationLayout = new QHBoxLayout();
        detailInformationLayout->setObjectName(QString::fromUtf8("detailInformationLayout"));
        detailView = new HtmlTableView(StrategyExplorer);
        detailView->setObjectName(QString::fromUtf8("detailView"));
        detailView->horizontalHeader()->setVisible(false);
        detailView->verticalHeader()->setVisible(false);

        detailInformationLayout->addWidget(detailView);


        verticalLayout_2->addLayout(detailInformationLayout);

        verticalLayout_2->setStretch(0, 10);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 10);
        verticalLayout_2->setStretch(3, 40);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 3);

        retranslateUi(StrategyExplorer);

        QMetaObject::connectSlotsByName(StrategyExplorer);
    } // setupUi

    void retranslateUi(QDialog *StrategyExplorer)
    {
        StrategyExplorer->setWindowTitle(QCoreApplication::translate("StrategyExplorer", "StrategyExplorer", nullptr));
        groupBox->setTitle(QCoreApplication::translate("StrategyExplorer", "Game Tree", nullptr));
        label->setText(QCoreApplication::translate("StrategyExplorer", "  Turn card:", nullptr));
        label_2->setText(QCoreApplication::translate("StrategyExplorer", "River card:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("StrategyExplorer", "Rough Strategy", nullptr));
        boardLabel->setText(QCoreApplication::translate("StrategyExplorer", "board:", nullptr));
        nodeDisplayLabel->setText(QCoreApplication::translate("StrategyExplorer", "NoNodeChosen", nullptr));
        label_4->setText(QCoreApplication::translate("StrategyExplorer", "Range:", nullptr));
        ipRangeButtom->setText(QCoreApplication::translate("StrategyExplorer", "IP", nullptr));
        oopRangeButtom->setText(QCoreApplication::translate("StrategyExplorer", "OOP", nullptr));
        label_5->setText(QCoreApplication::translate("StrategyExplorer", "Strategy & EVs:", nullptr));
        strategyModeButtom->setText(QCoreApplication::translate("StrategyExplorer", "strategy", nullptr));
        evModeButtom->setText(QCoreApplication::translate("StrategyExplorer", "Ev + strategy", nullptr));
        evOnlyModeButtom->setText(QCoreApplication::translate("StrategyExplorer", "Ev", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StrategyExplorer: public Ui_StrategyExplorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRATEGYEXPLORER_H
