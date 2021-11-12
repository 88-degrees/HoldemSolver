/********************************************************************************
** Form generated from reading UI file 'rangeselector.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANGESELECTOR_H
#define UI_RANGESELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "include/ui/droptextedit.h"
#include "include/ui/htmltablerangeview.h"

QT_BEGIN_NAMESPACE

class Ui_RangeSelector
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    DropTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *confirmButtom;
    QPushButton *cancelButton;
    QPushButton *clearRangeButtom;
    QPushButton *exportRangeButton;
    QPushButton *importRangeButton;
    QPushButton *openRangeFolderButton;
    QSpacerItem *horizontalSpacer;
    HtmlTableRangeView *rangeTableView;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *rangeNumberBox;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *rangeNumberEdit;
    QSlider *rangeNumberSlider;
    QTreeView *rangeFilesTreeView;

    void setupUi(QDialog *RangeSelector)
    {
        if (RangeSelector->objectName().isEmpty())
            RangeSelector->setObjectName(QString::fromUtf8("RangeSelector"));
        RangeSelector->resize(909, 687);
        horizontalLayout = new QHBoxLayout(RangeSelector);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(RangeSelector);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textEdit = new DropTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_3->addWidget(textEdit);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        confirmButtom = new QPushButton(RangeSelector);
        confirmButtom->setObjectName(QString::fromUtf8("confirmButtom"));

        horizontalLayout_2->addWidget(confirmButtom);

        cancelButton = new QPushButton(RangeSelector);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        clearRangeButtom = new QPushButton(RangeSelector);
        clearRangeButtom->setObjectName(QString::fromUtf8("clearRangeButtom"));

        horizontalLayout_2->addWidget(clearRangeButtom);

        exportRangeButton = new QPushButton(RangeSelector);
        exportRangeButton->setObjectName(QString::fromUtf8("exportRangeButton"));

        horizontalLayout_2->addWidget(exportRangeButton);

        importRangeButton = new QPushButton(RangeSelector);
        importRangeButton->setObjectName(QString::fromUtf8("importRangeButton"));

        horizontalLayout_2->addWidget(importRangeButton);

        openRangeFolderButton = new QPushButton(RangeSelector);
        openRangeFolderButton->setObjectName(QString::fromUtf8("openRangeFolderButton"));

        horizontalLayout_2->addWidget(openRangeFolderButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        rangeTableView = new HtmlTableRangeView(RangeSelector);
        rangeTableView->setObjectName(QString::fromUtf8("rangeTableView"));
        rangeTableView->horizontalHeader()->setVisible(false);
        rangeTableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(rangeTableView);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(2, 10);

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rangeNumberBox = new QGroupBox(RangeSelector);
        rangeNumberBox->setObjectName(QString::fromUtf8("rangeNumberBox"));
        horizontalLayout_3 = new QHBoxLayout(rangeNumberBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rangeNumberEdit = new QLineEdit(rangeNumberBox);
        rangeNumberEdit->setObjectName(QString::fromUtf8("rangeNumberEdit"));

        horizontalLayout_3->addWidget(rangeNumberEdit);

        rangeNumberSlider = new QSlider(rangeNumberBox);
        rangeNumberSlider->setObjectName(QString::fromUtf8("rangeNumberSlider"));
        rangeNumberSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(rangeNumberSlider);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 3);

        verticalLayout_2->addWidget(rangeNumberBox);

        rangeFilesTreeView = new QTreeView(RangeSelector);
        rangeFilesTreeView->setObjectName(QString::fromUtf8("rangeFilesTreeView"));
        rangeFilesTreeView->header()->setVisible(false);

        verticalLayout_2->addWidget(rangeFilesTreeView);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(RangeSelector);

        QMetaObject::connectSlotsByName(RangeSelector);
    } // setupUi

    void retranslateUi(QDialog *RangeSelector)
    {
        RangeSelector->setWindowTitle(QCoreApplication::translate("RangeSelector", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RangeSelector", "Range Text", nullptr));
        confirmButtom->setText(QCoreApplication::translate("RangeSelector", "Confirm", nullptr));
        cancelButton->setText(QCoreApplication::translate("RangeSelector", "Cancel", nullptr));
        clearRangeButtom->setText(QCoreApplication::translate("RangeSelector", "Clear range", nullptr));
        exportRangeButton->setText(QCoreApplication::translate("RangeSelector", "Export Range", nullptr));
        importRangeButton->setText(QCoreApplication::translate("RangeSelector", "Import Range", nullptr));
        openRangeFolderButton->setText(QCoreApplication::translate("RangeSelector", "Open Range Folder", nullptr));
        rangeNumberBox->setTitle(QCoreApplication::translate("RangeSelector", "Range Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RangeSelector: public Ui_RangeSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANGESELECTOR_H
