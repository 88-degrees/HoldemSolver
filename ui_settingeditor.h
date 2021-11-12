/********************************************************************************
** Form generated from reading UI file 'settingeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGEDITOR_H
#define UI_SETTINGEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *languageBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *roundBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *confirmBox;

    void setupUi(QDialog *SettingEditor)
    {
        if (SettingEditor->objectName().isEmpty())
            SettingEditor->setObjectName(QString::fromUtf8("SettingEditor"));
        SettingEditor->resize(385, 262);
        verticalLayout_2 = new QVBoxLayout(SettingEditor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SettingEditor);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        languageBox = new QComboBox(SettingEditor);
        languageBox->addItem(QString());
        languageBox->addItem(QString());
        languageBox->setObjectName(QString::fromUtf8("languageBox"));

        horizontalLayout->addWidget(languageBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(SettingEditor);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        roundBox = new QComboBox(SettingEditor);
        roundBox->addItem(QString());
        roundBox->addItem(QString());
        roundBox->addItem(QString());
        roundBox->setObjectName(QString::fromUtf8("roundBox"));

        horizontalLayout_2->addWidget(roundBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        confirmBox = new QDialogButtonBox(SettingEditor);
        confirmBox->setObjectName(QString::fromUtf8("confirmBox"));
        confirmBox->setOrientation(Qt::Horizontal);
        confirmBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(confirmBox);


        retranslateUi(SettingEditor);
        QObject::connect(confirmBox, &QDialogButtonBox::accepted, SettingEditor, qOverload<>(&QDialog::accept));
        QObject::connect(confirmBox, &QDialogButtonBox::rejected, SettingEditor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SettingEditor);
    } // setupUi

    void retranslateUi(QDialog *SettingEditor)
    {
        SettingEditor->setWindowTitle(QCoreApplication::translate("SettingEditor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SettingEditor", "Language", nullptr));
        languageBox->setItemText(0, QCoreApplication::translate("SettingEditor", "English", nullptr));
        languageBox->setItemText(1, QCoreApplication::translate("SettingEditor", "Chinese", nullptr));

        label_2->setText(QCoreApplication::translate("SettingEditor", "Dump round when saving strategy", nullptr));
        roundBox->setItemText(0, QCoreApplication::translate("SettingEditor", "1", nullptr));
        roundBox->setItemText(1, QCoreApplication::translate("SettingEditor", "2", nullptr));
        roundBox->setItemText(2, QCoreApplication::translate("SettingEditor", "3", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SettingEditor: public Ui_SettingEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGEDITOR_H
