/********************************************************************************
** Form generated from reading UI file 'dialogtransaction.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTRANSACTION_H
#define UI_DIALOGTRANSACTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogTransaction
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *ok;

    void setupUi(QDialog *DialogTransaction)
    {
        if (DialogTransaction->objectName().isEmpty())
            DialogTransaction->setObjectName(QString::fromUtf8("DialogTransaction"));
        DialogTransaction->resize(1055, 450);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210211-080818.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogTransaction->setWindowIcon(icon);
        groupBox = new QGroupBox(DialogTransaction);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 1031, 421));
        groupBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";\n"
"color:rgb(0, 0, 127)"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 1001, 351));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 9pt \"Georgia\";"));
        ok = new QPushButton(groupBox);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(940, 390, 75, 23));

        retranslateUi(DialogTransaction);
        QObject::connect(ok, SIGNAL(clicked()), DialogTransaction, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogTransaction);
    } // setupUi

    void retranslateUi(QDialog *DialogTransaction)
    {
        DialogTransaction->setWindowTitle(QApplication::translate("DialogTransaction", "Statement interface", nullptr));
        groupBox->setTitle(QApplication::translate("DialogTransaction", "YOUR STATEMENT", nullptr));
        label->setText(QString());
        ok->setText(QApplication::translate("DialogTransaction", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTransaction: public Ui_DialogTransaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTRANSACTION_H
