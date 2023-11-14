/********************************************************************************
** Form generated from reading UI file 'dialogtransfer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTRANSFER_H
#define UI_DIALOGTRANSFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogTransfer
{
public:
    QGroupBox *myAccount;
    QLabel *accountNumber;
    QPushButton *ok;
    QLabel *name;
    QPushButton *pushButton;
    QLineEdit *transfer;
    QLineEdit *accountNumberT;

    void setupUi(QDialog *DialogTransfer)
    {
        if (DialogTransfer->objectName().isEmpty())
            DialogTransfer->setObjectName(QString::fromUtf8("DialogTransfer"));
        DialogTransfer->resize(351, 151);
        myAccount = new QGroupBox(DialogTransfer);
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
        name->setGeometry(QRect(10, 20, 101, 31));
        name->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        pushButton = new QPushButton(myAccount);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 100, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Dutch801 Rm BT\";"));
        transfer = new QLineEdit(myAccount);
        transfer->setObjectName(QString::fromUtf8("transfer"));
        transfer->setGeometry(QRect(120, 20, 201, 31));
        transfer->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));
        accountNumberT = new QLineEdit(myAccount);
        accountNumberT->setObjectName(QString::fromUtf8("accountNumberT"));
        accountNumberT->setGeometry(QRect(120, 60, 201, 31));
        accountNumberT->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));

        retranslateUi(DialogTransfer);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogTransfer, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogTransfer);
    } // setupUi

    void retranslateUi(QDialog *DialogTransfer)
    {
        DialogTransfer->setWindowTitle(QApplication::translate("DialogTransfer", "Transfer interface", nullptr));
        myAccount->setTitle(QApplication::translate("DialogTransfer", "TRANSACTION", nullptr));
        accountNumber->setText(QApplication::translate("DialogTransfer", "Account Number:", nullptr));
        ok->setText(QApplication::translate("DialogTransfer", "OK", nullptr));
        name->setText(QApplication::translate("DialogTransfer", "Transfer Balance:", nullptr));
        pushButton->setText(QApplication::translate("DialogTransfer", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTransfer: public Ui_DialogTransfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTRANSFER_H
