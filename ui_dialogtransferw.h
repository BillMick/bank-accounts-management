/********************************************************************************
** Form generated from reading UI file 'dialogtransferw.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTRANSFERW_H
#define UI_DIALOGTRANSFERW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogTransferW
{
public:
    QGroupBox *myAccount;
    QLabel *accountNumber;
    QPushButton *ok;
    QLabel *name;
    QPushButton *pushButton;
    QLineEdit *transfer;
    QLineEdit *accountNumberC;
    QLineEdit *accountNumberD;
    QLabel *accountNumber_2;

    void setupUi(QDialog *DialogTransferW)
    {
        if (DialogTransferW->objectName().isEmpty())
            DialogTransferW->setObjectName(QString::fromUtf8("DialogTransferW"));
        DialogTransferW->resize(410, 194);
        myAccount = new QGroupBox(DialogTransferW);
        myAccount->setObjectName(QString::fromUtf8("myAccount"));
        myAccount->setGeometry(QRect(10, 10, 391, 171));
        myAccount->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        accountNumber = new QLabel(myAccount);
        accountNumber->setObjectName(QString::fromUtf8("accountNumber"));
        accountNumber->setGeometry(QRect(10, 100, 141, 31));
        accountNumber->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255);"));
        ok = new QPushButton(myAccount);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(330, 140, 51, 23));
        ok->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        name = new QLabel(myAccount);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(10, 20, 101, 31));
        name->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        pushButton = new QPushButton(myAccount);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 140, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Dutch801 Rm BT\";"));
        transfer = new QLineEdit(myAccount);
        transfer->setObjectName(QString::fromUtf8("transfer"));
        transfer->setGeometry(QRect(150, 20, 231, 31));
        transfer->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));
        accountNumberC = new QLineEdit(myAccount);
        accountNumberC->setObjectName(QString::fromUtf8("accountNumberC"));
        accountNumberC->setGeometry(QRect(150, 100, 231, 31));
        accountNumberC->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));
        accountNumberD = new QLineEdit(myAccount);
        accountNumberD->setObjectName(QString::fromUtf8("accountNumberD"));
        accountNumberD->setGeometry(QRect(150, 60, 231, 31));
        accountNumberD->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));
        accountNumber_2 = new QLabel(myAccount);
        accountNumber_2->setObjectName(QString::fromUtf8("accountNumber_2"));
        accountNumber_2->setGeometry(QRect(10, 60, 141, 31));
        accountNumber_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255);"));

        retranslateUi(DialogTransferW);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogTransferW, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogTransferW);
    } // setupUi

    void retranslateUi(QDialog *DialogTransferW)
    {
        DialogTransferW->setWindowTitle(QApplication::translate("DialogTransferW", "Transfer interface", nullptr));
        myAccount->setTitle(QApplication::translate("DialogTransferW", "TRANSACTION", nullptr));
        accountNumber->setText(QApplication::translate("DialogTransferW", "Credit Account Number:", nullptr));
        ok->setText(QApplication::translate("DialogTransferW", "OK", nullptr));
        name->setText(QApplication::translate("DialogTransferW", "Transfer Balance:", nullptr));
        pushButton->setText(QApplication::translate("DialogTransferW", "Close", nullptr));
        accountNumber_2->setText(QApplication::translate("DialogTransferW", "Debit Account Number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTransferW: public Ui_DialogTransferW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTRANSFERW_H
