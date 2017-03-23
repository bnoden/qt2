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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTreeView *treeView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMkdir;
    QPushButton *btnRmdir;
    QPushButton *btnCancel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->setWindowModality(Qt::WindowModal);
        Dialog->resize(574, 233);
        Dialog->setSizeGripEnabled(true);
        Dialog->setModal(true);
        treeView = new QTreeView(Dialog);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(11, 11, 552, 183));
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 200, 256, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnMkdir = new QPushButton(widget);
        btnMkdir->setObjectName(QStringLiteral("btnMkdir"));
        btnMkdir->setSizeIncrement(QSize(0, 0));
        btnMkdir->setCheckable(false);

        horizontalLayout->addWidget(btnMkdir);

        btnRmdir = new QPushButton(widget);
        btnRmdir->setObjectName(QStringLiteral("btnRmdir"));

        horizontalLayout->addWidget(btnRmdir);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        btnMkdir->setText(QApplication::translate("Dialog", "mkdir", 0));
        btnRmdir->setText(QApplication::translate("Dialog", "rmdir", 0));
        btnCancel->setText(QApplication::translate("Dialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
