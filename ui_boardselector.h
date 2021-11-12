/********************************************************************************
** Form generated from reading UI file 'boardselector.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDSELECTOR_H
#define UI_BOARDSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "htmltableview.h"

QT_BEGIN_NAMESPACE

class Ui_boardselector
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *boardEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QPushButton *clearBoardButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    HtmlTableView *boardSelectorTable;

    void setupUi(QDialog *boardselector)
    {
        if (boardselector->objectName().isEmpty())
            boardselector->setObjectName(QString::fromUtf8("boardselector"));
        boardselector->resize(623, 357);
        verticalLayout = new QVBoxLayout(boardselector);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        boardEdit = new QLineEdit(boardselector);
        boardEdit->setObjectName(QString::fromUtf8("boardEdit"));

        horizontalLayout->addWidget(boardEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        confirmButton = new QPushButton(boardselector);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));

        horizontalLayout_2->addWidget(confirmButton);

        cancelButton = new QPushButton(boardselector);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        clearBoardButton = new QPushButton(boardselector);
        clearBoardButton->setObjectName(QString::fromUtf8("clearBoardButton"));

        horizontalLayout_2->addWidget(clearBoardButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        boardSelectorTable = new HtmlTableView(boardselector);
        boardSelectorTable->setObjectName(QString::fromUtf8("boardSelectorTable"));
        boardSelectorTable->horizontalHeader()->setVisible(false);
        boardSelectorTable->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(boardSelectorTable);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(2, 5);

        retranslateUi(boardselector);

        QMetaObject::connectSlotsByName(boardselector);
    } // setupUi

    void retranslateUi(QDialog *boardselector)
    {
        boardselector->setWindowTitle(QCoreApplication::translate("boardselector", "Dialog", nullptr));
        confirmButton->setText(QCoreApplication::translate("boardselector", "Confirm", nullptr));
        cancelButton->setText(QCoreApplication::translate("boardselector", "Cancel", nullptr));
        clearBoardButton->setText(QCoreApplication::translate("boardselector", "Clear Board", nullptr));
    } // retranslateUi

};

namespace Ui {
    class boardselector: public Ui_boardselector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDSELECTOR_H
