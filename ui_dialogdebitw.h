/********************************************************************************
** Form generated from reading UI file 'dialogdebitw.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDEBITW_H
#define UI_DIALOGDEBITW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogDebitW
{
public:
    QGroupBox *myAccount;
    QLabel *accountNumber;
    QPushButton *ok;
    QLabel *name;
    QPushButton *pushButton;
    QLineEdit *debit;
    QLineEdit *accountNumberT;

    void setupUi(QDialog *DialogDebitW)
    {
        if (DialogDebitW->objectName().isEmpty())
            DialogDebitW->setObjectName(QString::fromUtf8("DialogDebitW"));
        DialogDebitW->resize(350, 150);
        myAccount = new QGroupBox(DialogDebitW);
        myAccount->setObjectName(QString::fromUtf8("myAccount"));
        myAccount->setGeometry(QRect(10, 10, 331, 131));
        myAccount->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        accountNumber = new QLabel(myAccount);
        accountNumber->setObjectName(QString::fromUtf8("accountNumber"));
        accountNumber->setGeometry(QRect(10, 60, 101, 31));
        accountNumber->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255);"));
        ok = new QPushButton(myAccount);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(270, 100, 51, 23));
        ok->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        name = new QLabel(myAccount);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(10, 20, 91, 31));
        name->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        pushButton = new QPushButton(myAccount);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 100, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Dutch801 Rm BT\";"));
        debit = new QLineEdit(myAccount);
        debit->setObjectName(QString::fromUtf8("debit"));
        debit->setGeometry(QRect(120, 20, 201, 31));
        debit->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));
        accountNumberT = new QLineEdit(myAccount);
        accountNumberT->setObjectName(QString::fromUtf8("accountNumberT"));
        accountNumberT->setGeometry(QRect(120, 60, 201, 31));
        accountNumberT->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));

        retranslateUi(DialogDebitW);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogDebitW, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogDebitW);
    } // setupUi

    void retranslateUi(QDialog *DialogDebitW)
    {
        DialogDebitW->setWindowTitle(QApplication::translate("DialogDebitW", "Debit interface", nullptr));
        myAccount->setTitle(QApplication::translate("DialogDebitW", "TRANSACTION", nullptr));
        accountNumber->setText(QApplication::translate("DialogDebitW", "Account Number:", nullptr));
        ok->setText(QApplication::translate("DialogDebitW", "OK", nullptr));
        name->setText(QApplication::translate("DialogDebitW", "Debit Balance:", nullptr));
        pushButton->setText(QApplication::translate("DialogDebitW", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDebitW: public Ui_DialogDebitW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDEBITW_H
