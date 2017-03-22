/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QListView *listView;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAdd;
    QPushButton *btnInsert;
    QPushButton *btnDelete;
    QPushButton *btnSort;
    QSpacerItem *verticalSpacer;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(282, 225);
        Dialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listView = new QListView(Dialog);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 0, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnAdd = new QPushButton(Dialog);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        verticalLayout->addWidget(btnAdd);

        btnInsert = new QPushButton(Dialog);
        btnInsert->setObjectName(QStringLiteral("btnInsert"));

        verticalLayout->addWidget(btnInsert);

        btnDelete = new QPushButton(Dialog);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        verticalLayout->addWidget(btnDelete);

        btnSort = new QPushButton(Dialog);
        btnSort->setObjectName(QStringLiteral("btnSort"));

        verticalLayout->addWidget(btnSort);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 86, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 2, 2, 1);

        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(49, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        btnAdd->setText(QApplication::translate("Dialog", "Add", 0));
        btnInsert->setText(QApplication::translate("Dialog", "Insert", 0));
        btnDelete->setText(QApplication::translate("Dialog", "Delete", 0));
        btnSort->setText(QApplication::translate("Dialog", "Sort", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
