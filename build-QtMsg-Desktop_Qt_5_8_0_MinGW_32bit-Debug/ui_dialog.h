/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btnInfo;
    QPushButton *btnQuestion;
    QPushButton *btnWarning;
    QPushButton *btnCustom;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(237, 188);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnInfo = new QPushButton(Dialog);
        btnInfo->setObjectName(QStringLiteral("btnInfo"));

        verticalLayout->addWidget(btnInfo);

        btnQuestion = new QPushButton(Dialog);
        btnQuestion->setObjectName(QStringLiteral("btnQuestion"));

        verticalLayout->addWidget(btnQuestion);

        btnWarning = new QPushButton(Dialog);
        btnWarning->setObjectName(QStringLiteral("btnWarning"));

        verticalLayout->addWidget(btnWarning);

        btnCustom = new QPushButton(Dialog);
        btnCustom->setObjectName(QStringLiteral("btnCustom"));

        verticalLayout->addWidget(btnCustom);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        btnInfo->setText(QApplication::translate("Dialog", "Info", Q_NULLPTR));
        btnQuestion->setText(QApplication::translate("Dialog", "Question", Q_NULLPTR));
        btnWarning->setText(QApplication::translate("Dialog", "Warning", Q_NULLPTR));
        btnCustom->setText(QApplication::translate("Dialog", "Custom", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
