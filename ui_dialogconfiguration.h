/********************************************************************************
** Form generated from reading UI file 'dialogconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONFIGURATION_H
#define UI_DIALOGCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogConfiguration
{
public:
    QGroupBox *myAccount;
    QLabel *accountNumber;
    QPushButton *ok;
    QLabel *name;
    QPushButton *pushButton;
    QLineEdit *old;
    QLineEdit *newD;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *passW;
    QRadioButton *emaiL;
    QRadioButton *phonenuM;

    void setupUi(QDialog *DialogConfiguration)
    {
        if (DialogConfiguration->objectName().isEmpty())
            DialogConfiguration->setObjectName(QString::fromUtf8("DialogConfiguration"));
        DialogConfiguration->resize(380, 208);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210215-172553.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogConfiguration->setWindowIcon(icon);
        myAccount = new QGroupBox(DialogConfiguration);
        myAccount->setObjectName(QString::fromUtf8("myAccount"));
        myAccount->setGeometry(QRect(10, 10, 361, 191));
        myAccount->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        accountNumber = new QLabel(myAccount);
        accountNumber->setObjectName(QString::fromUtf8("accountNumber"));
        accountNumber->setGeometry(QRect(10, 120, 101, 31));
        accountNumber->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255);"));
        ok = new QPushButton(myAccount);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(300, 160, 51, 23));
        ok->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        name = new QLabel(myAccount);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(10, 80, 91, 31));
        name->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        pushButton = new QPushButton(myAccount);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 160, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Dutch801 Rm BT\";"));
        old = new QLineEdit(myAccount);
        old->setObjectName(QString::fromUtf8("old"));
        old->setGeometry(QRect(120, 80, 231, 31));
        old->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));
        newD = new QLineEdit(myAccount);
        newD->setObjectName(QString::fromUtf8("newD"));
        newD->setGeometry(QRect(120, 120, 231, 31));
        newD->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));
        horizontalLayoutWidget = new QWidget(myAccount);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 30, 355, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        passW = new QRadioButton(horizontalLayoutWidget);
        passW->setObjectName(QString::fromUtf8("passW"));
        passW->setStyleSheet(QString::fromUtf8("font: 9pt \"Copperplate Gothic Bold\";"));

        horizontalLayout->addWidget(passW);

        emaiL = new QRadioButton(horizontalLayoutWidget);
        emaiL->setObjectName(QString::fromUtf8("emaiL"));
        emaiL->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));

        horizontalLayout->addWidget(emaiL);

        phonenuM = new QRadioButton(horizontalLayoutWidget);
        phonenuM->setObjectName(QString::fromUtf8("phonenuM"));
        phonenuM->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));

        horizontalLayout->addWidget(phonenuM);


        retranslateUi(DialogConfiguration);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogConfiguration, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogConfiguration);
    } // setupUi

    void retranslateUi(QDialog *DialogConfiguration)
    {
        DialogConfiguration->setWindowTitle(QApplication::translate("DialogConfiguration", "Data configuration", nullptr));
        myAccount->setTitle(QApplication::translate("DialogConfiguration", "Data Configuration", nullptr));
        accountNumber->setText(QApplication::translate("DialogConfiguration", "New data", nullptr));
        ok->setText(QApplication::translate("DialogConfiguration", "OK", nullptr));
        name->setText(QApplication::translate("DialogConfiguration", "Old data", nullptr));
        pushButton->setText(QApplication::translate("DialogConfiguration", "Finish", nullptr));
        passW->setText(QApplication::translate("DialogConfiguration", "Password", nullptr));
        emaiL->setText(QApplication::translate("DialogConfiguration", "Email", nullptr));
        phonenuM->setText(QApplication::translate("DialogConfiguration", "Phone Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogConfiguration: public Ui_DialogConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONFIGURATION_H
