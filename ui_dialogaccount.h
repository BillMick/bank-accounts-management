/********************************************************************************
** Form generated from reading UI file 'dialogaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGACCOUNT_H
#define UI_DIALOGACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAccount
{
public:
    QGroupBox *myAccount;
    QLCDNumber *balance;
    QLabel *label;
    QLabel *accountType;
    QLabel *accountNumber;
    QPushButton *refresh;
    QTextBrowser *accounttype;
    QTextBrowser *accountnumber;
    QTextBrowser *nameT;
    QLabel *name;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *credit;
    QPushButton *debit;
    QPushButton *transfer;
    QPushButton *cancel;
    QPushButton *quit;
    QFrame *line;
    QGraphicsView *coins;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *statement;
    QPushButton *loan;
    QPushButton *mailMod;

    void setupUi(QDialog *DialogAccount)
    {
        if (DialogAccount->objectName().isEmpty())
            DialogAccount->setObjectName(QString::fromUtf8("DialogAccount"));
        DialogAccount->resize(340, 518);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210211-233739.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogAccount->setWindowIcon(icon);
        myAccount = new QGroupBox(DialogAccount);
        myAccount->setObjectName(QString::fromUtf8("myAccount"));
        myAccount->setGeometry(QRect(0, 120, 331, 221));
        myAccount->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        balance = new QLCDNumber(myAccount);
        balance->setObjectName(QString::fromUtf8("balance"));
        balance->setGeometry(QRect(40, 40, 231, 41));
        balance->setFrameShadow(QFrame::Sunken);
        balance->setLineWidth(0);
        balance->setMidLineWidth(0);
        balance->setSmallDecimalPoint(true);
        balance->setDigitCount(12);
        label = new QLabel(myAccount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 151, 16));
        accountType = new QLabel(myAccount);
        accountType->setObjectName(QString::fromUtf8("accountType"));
        accountType->setGeometry(QRect(10, 140, 91, 16));
        accountType->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        accountNumber = new QLabel(myAccount);
        accountNumber->setObjectName(QString::fromUtf8("accountNumber"));
        accountNumber->setGeometry(QRect(10, 180, 101, 16));
        accountNumber->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255);"));
        refresh = new QPushButton(myAccount);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(270, 50, 51, 23));
        refresh->setStyleSheet(QString::fromUtf8("font: 9pt \"Dutch801 Rm BT\";"));
        accounttype = new QTextBrowser(myAccount);
        accounttype->setObjectName(QString::fromUtf8("accounttype"));
        accounttype->setGeometry(QRect(120, 130, 201, 31));
        accountnumber = new QTextBrowser(myAccount);
        accountnumber->setObjectName(QString::fromUtf8("accountnumber"));
        accountnumber->setGeometry(QRect(120, 170, 201, 31));
        nameT = new QTextBrowser(myAccount);
        nameT->setObjectName(QString::fromUtf8("nameT"));
        nameT->setGeometry(QRect(120, 90, 201, 31));
        nameT->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));
        name = new QLabel(myAccount);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(10, 100, 91, 16));
        name->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        label_4 = new QLabel(myAccount);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 40, 31, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 27pt \"Copperplate Gothic Bold\";"));
        groupBox_2 = new QGroupBox(DialogAccount);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 350, 141, 111));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 123, 83));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        credit = new QPushButton(verticalLayoutWidget);
        credit->setObjectName(QString::fromUtf8("credit"));

        verticalLayout->addWidget(credit);

        debit = new QPushButton(verticalLayoutWidget);
        debit->setObjectName(QString::fromUtf8("debit"));

        verticalLayout->addWidget(debit);

        transfer = new QPushButton(verticalLayoutWidget);
        transfer->setObjectName(QString::fromUtf8("transfer"));

        verticalLayout->addWidget(transfer);

        cancel = new QPushButton(DialogAccount);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(10, 480, 75, 23));
        cancel->setStyleSheet(QString::fromUtf8("font: 9pt \"Cambria\";"));
        quit = new QPushButton(DialogAccount);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(240, 480, 75, 23));
        quit->setStyleSheet(QString::fromUtf8("font: 9pt \"Cambria\";"));
        line = new QFrame(DialogAccount);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 100, 311, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        coins = new QGraphicsView(DialogAccount);
        coins->setObjectName(QString::fromUtf8("coins"));
        coins->setGeometry(QRect(0, 10, 121, 91));
        coins->setStyleSheet(QString::fromUtf8("border-image: url(:/MesImages/MesImages/58a1e975c8dd3432c6fa81c7.png);"));
        label_2 = new QLabel(DialogAccount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 10, 191, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"CityBlueprint\";\n"
"color: rgb(0, 0, 255);"));
        label_3 = new QLabel(DialogAccount);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 50, 101, 16));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 127);\n"
"font: 75 8pt \"Times New Roman\";"));
        groupBox = new QGroupBox(DialogAccount);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 350, 171, 111));
        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(9, 19, 151, 83));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        statement = new QPushButton(verticalLayoutWidget_2);
        statement->setObjectName(QString::fromUtf8("statement"));

        verticalLayout_2->addWidget(statement);

        loan = new QPushButton(verticalLayoutWidget_2);
        loan->setObjectName(QString::fromUtf8("loan"));

        verticalLayout_2->addWidget(loan);

        mailMod = new QPushButton(verticalLayoutWidget_2);
        mailMod->setObjectName(QString::fromUtf8("mailMod"));

        verticalLayout_2->addWidget(mailMod);


        retranslateUi(DialogAccount);
        QObject::connect(cancel, SIGNAL(clicked()), DialogAccount, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogAccount);
    } // setupUi

    void retranslateUi(QDialog *DialogAccount)
    {
        DialogAccount->setWindowTitle(QApplication::translate("DialogAccount", "My Account", nullptr));
        myAccount->setTitle(QApplication::translate("DialogAccount", "My Account", nullptr));
        label->setText(QApplication::translate("DialogAccount", "Actual balance :", nullptr));
        accountType->setText(QApplication::translate("DialogAccount", "Account Type: ", nullptr));
        accountNumber->setText(QApplication::translate("DialogAccount", "Account Number:", nullptr));
        refresh->setText(QApplication::translate("DialogAccount", "Refresh", nullptr));
        name->setText(QApplication::translate("DialogAccount", "Name:", nullptr));
        label_4->setText(QApplication::translate("DialogAccount", "$", nullptr));
        groupBox_2->setTitle(QApplication::translate("DialogAccount", "Transactions", nullptr));
#ifndef QT_NO_TOOLTIP
        credit->setToolTip(QApplication::translate("DialogAccount", "<html><head/><body><p>Credit my account</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        credit->setText(QApplication::translate("DialogAccount", "Credit My Account", nullptr));
#ifndef QT_NO_TOOLTIP
        debit->setToolTip(QApplication::translate("DialogAccount", "<html><head/><body><p>check out from my account</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        debit->setText(QApplication::translate("DialogAccount", "Debit from My Account", nullptr));
#ifndef QT_NO_TOOLTIP
        transfer->setToolTip(QApplication::translate("DialogAccount", "<html><head/><body><p>Send from my account into another</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        transfer->setText(QApplication::translate("DialogAccount", "Bank Transfer", nullptr));
        cancel->setText(QApplication::translate("DialogAccount", "Cancel", nullptr));
        quit->setText(QApplication::translate("DialogAccount", "Quit App", nullptr));
        label_2->setText(QApplication::translate("DialogAccount", "BLUE LIGHTED BANK", nullptr));
        label_3->setText(QApplication::translate("DialogAccount", "The Bank you need", nullptr));
        groupBox->setTitle(QApplication::translate("DialogAccount", "Other Operations", nullptr));
        statement->setText(QApplication::translate("DialogAccount", "Bank Account Statement", nullptr));
        loan->setText(QApplication::translate("DialogAccount", "Make a loan", nullptr));
        mailMod->setText(QApplication::translate("DialogAccount", "Data Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAccount: public Ui_DialogAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGACCOUNT_H
