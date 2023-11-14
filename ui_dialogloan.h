/********************************************************************************
** Form generated from reading UI file 'dialogloan.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOAN_H
#define UI_DIALOGLOAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogLoan
{
public:
    QPushButton *ok;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *bal;
    QLineEdit *loan;
    QCheckBox *per;
    QCheckBox *delay;
    QLabel *label;

    void setupUi(QDialog *DialogLoan)
    {
        if (DialogLoan->objectName().isEmpty())
            DialogLoan->setObjectName(QString::fromUtf8("DialogLoan"));
        DialogLoan->resize(330, 198);
        ok = new QPushButton(DialogLoan);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(270, 160, 51, 23));
        ok->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        pushButton = new QPushButton(DialogLoan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 160, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Dutch801 Rm BT\";"));
        groupBox = new QGroupBox(DialogLoan);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 311, 71));
        groupBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        bal = new QLabel(groupBox);
        bal->setObjectName(QString::fromUtf8("bal"));
        bal->setGeometry(QRect(10, 30, 81, 31));
        bal->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        loan = new QLineEdit(groupBox);
        loan->setObjectName(QString::fromUtf8("loan"));
        loan->setGeometry(QRect(100, 30, 201, 31));
        loan->setStyleSheet(QString::fromUtf8("font: 10pt \"Copperplate Gothic Bold\";"));
        per = new QCheckBox(DialogLoan);
        per->setObjectName(QString::fromUtf8("per"));
        per->setGeometry(QRect(20, 110, 301, 17));
        per->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";"));
        delay = new QCheckBox(DialogLoan);
        delay->setObjectName(QString::fromUtf8("delay"));
        delay->setGeometry(QRect(20, 130, 301, 17));
        delay->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";"));
        label = new QLabel(DialogLoan);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 90, 141, 16));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));

        retranslateUi(DialogLoan);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogLoan, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogLoan);
    } // setupUi

    void retranslateUi(QDialog *DialogLoan)
    {
        DialogLoan->setWindowTitle(QApplication::translate("DialogLoan", "Loan interface", nullptr));
        ok->setText(QApplication::translate("DialogLoan", "OK", nullptr));
        pushButton->setText(QApplication::translate("DialogLoan", "Cancel", nullptr));
        groupBox->setTitle(QApplication::translate("DialogLoan", "LOAN", nullptr));
        bal->setText(QApplication::translate("DialogLoan", "Loan Balance:", nullptr));
        per->setText(QApplication::translate("DialogLoan", "Repayment Percentage: 7%", nullptr));
        delay->setText(QApplication::translate("DialogLoan", "Maimum Repayment delay: 8 months", nullptr));
        label->setText(QApplication::translate("DialogLoan", "Check if you agree with:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLoan: public Ui_DialogLoan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOAN_H
