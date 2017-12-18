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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMkdir;
    QPushButton *btnRmdir;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->setWindowModality(Qt::WindowModal);
        Dialog->resize(574, 233);
        Dialog->setSizeGripEnabled(true);
        Dialog->setModal(true);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeView = new QTreeView(Dialog);
        treeView->setObjectName(QStringLiteral("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnMkdir = new QPushButton(Dialog);
        btnMkdir->setObjectName(QStringLiteral("btnMkdir"));
        btnMkdir->setSizeIncrement(QSize(0, 0));
        btnMkdir->setCheckable(false);

        horizontalLayout->addWidget(btnMkdir);

        btnRmdir = new QPushButton(Dialog);
        btnRmdir->setObjectName(QStringLiteral("btnRmdir"));

        horizontalLayout->addWidget(btnRmdir);

        btnCancel = new QPushButton(Dialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(375, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        btnMkdir->setText(QApplication::translate("Dialog", "New Folder", 0));
        btnRmdir->setText(QApplication::translate("Dialog", "Delete", 0));
        btnCancel->setText(QApplication::translate("Dialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
