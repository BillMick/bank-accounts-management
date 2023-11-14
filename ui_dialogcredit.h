/********************************************************************************
** Form generated from reading UI file 'dialogcredit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREDIT_H
#define UI_DIALOGCREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogCredit
{
public:
    QGroupBox *myAccount;
    QLabel *accountNumber;
    QPushButton *ok;
    QLabel *name;
    QPushButton *pushButton;
    QLineEdit *credit;
    QLineEdit *accountNumberT;

    void setupUi(QDialog *DialogCredit)
    {
        if (DialogCredit->objectName().isEmpty())
            DialogCredit->setObjectName(QString::fromUtf8("DialogCredit"));
        DialogCredit->resize(354, 159);
        myAccount = new QGroupBox(DialogCredit);
        myAccount->setObjectName(QString::fromUtf8("myAccount"));
        myAccount->setGeometry(QRect(10, 10, 331, 141));
        myAccount->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        accountNumber = new QLabel(myAccount);
        accountNumber->setObjectName(QString::fromUtf8("accountNumber"));
        accountNumber->setGeometry(QRect(10, 70, 101, 31));
        accountNumber->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255);"));
        ok = new QPushButton(myAccount);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(270, 110, 51, 23));
        ok->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        name = new QLabel(myAccount);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(10, 30, 91, 31));
        name->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        pushButton = new QPushButton(myAccount);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 110, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Dutch801 Rm BT\";"));
        credit = new QLineEdit(myAccount);
        credit->setObjectName(QString::fromUtf8("credit"));
        credit->setGeometry(QRect(120, 30, 201, 31));
        credit->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));
        accountNumberT = new QLineEdit(myAccount);
        accountNumberT->setObjectName(QString::fromUtf8("accountNumberT"));
        accountNumberT->setGeometry(QRect(120, 70, 201, 31));
        accountNumberT->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));

        retranslateUi(DialogCredit);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogCredit, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogCredit);
    } // setupUi

    void retranslateUi(QDialog *DialogCredit)
    {
        DialogCredit->setWindowTitle(QApplication::translate("DialogCredit", "Credit interface", nullptr));
        myAccount->setTitle(QApplication::translate("DialogCredit", "TRANSACTION", nullptr));
        accountNumber->setText(QApplication::translate("DialogCredit", "Account Number:", nullptr));
        ok->setText(QApplication::translate("DialogCredit", "OK", nullptr));
        name->setText(QApplication::translate("DialogCredit", "Credit Balance:", nullptr));
        pushButton->setText(QApplication::translate("DialogCredit", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCredit: public Ui_DialogCredit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREDIT_H
