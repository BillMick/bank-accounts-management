/********************************************************************************
** Form generated from reading UI file 'dialogdial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDIAL_H
#define UI_DIALOGDIAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogDial
{
public:
    QLabel *line;
    QLabel *line2;
    QLabel *line3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QDial *dial;
    QDial *dial2;
    QDial *dial3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber2;
    QLCDNumber *lcdNumber3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *ok;

    void setupUi(QDialog *DialogDial)
    {
        if (DialogDial->objectName().isEmpty())
            DialogDial->setObjectName(QString::fromUtf8("DialogDial"));
        DialogDial->resize(161, 275);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210215-172553.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogDial->setWindowIcon(icon);
        line = new QLabel(DialogDial);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(180, 20, 21, 16));
        line2 = new QLabel(DialogDial);
        line2->setObjectName(QString::fromUtf8("line2"));
        line2->setGeometry(QRect(180, 100, 21, 16));
        line3 = new QLabel(DialogDial);
        line3->setObjectName(QString::fromUtf8("line3"));
        line3->setGeometry(QRect(180, 180, 21, 16));
        verticalLayoutWidget_2 = new QWidget(DialogDial);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 77, 221));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        dial = new QDial(verticalLayoutWidget_2);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setStyleSheet(QString::fromUtf8(""));
        dial->setMaximum(9);

        verticalLayout_2->addWidget(dial);

        dial2 = new QDial(verticalLayoutWidget_2);
        dial2->setObjectName(QString::fromUtf8("dial2"));
        dial2->setStyleSheet(QString::fromUtf8(""));
        dial2->setMaximum(9);

        verticalLayout_2->addWidget(dial2);

        dial3 = new QDial(verticalLayoutWidget_2);
        dial3->setObjectName(QString::fromUtf8("dial3"));
        dial3->setStyleSheet(QString::fromUtf8(""));
        dial3->setMaximum(9);

        verticalLayout_2->addWidget(dial3);

        verticalLayoutWidget_3 = new QWidget(DialogDial);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(90, 10, 61, 221));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(verticalLayoutWidget_3);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setFrameShape(QFrame::StyledPanel);
        lcdNumber->setDigitCount(1);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_3->addWidget(lcdNumber);

        lcdNumber2 = new QLCDNumber(verticalLayoutWidget_3);
        lcdNumber2->setObjectName(QString::fromUtf8("lcdNumber2"));
        lcdNumber2->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));
        lcdNumber2->setFrameShape(QFrame::StyledPanel);
        lcdNumber2->setDigitCount(1);
        lcdNumber2->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_3->addWidget(lcdNumber2);

        lcdNumber3 = new QLCDNumber(verticalLayoutWidget_3);
        lcdNumber3->setObjectName(QString::fromUtf8("lcdNumber3"));
        lcdNumber3->setFrameShape(QFrame::StyledPanel);
        lcdNumber3->setDigitCount(1);
        lcdNumber3->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_3->addWidget(lcdNumber3);

        horizontalLayoutWidget = new QWidget(DialogDial);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 240, 141, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        ok = new QPushButton(horizontalLayoutWidget);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));

        horizontalLayout_2->addWidget(ok);


        retranslateUi(DialogDial);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogDial, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogDial);
    } // setupUi

    void retranslateUi(QDialog *DialogDial)
    {
        DialogDial->setWindowTitle(QApplication::translate("DialogDial", "Authentification Box", nullptr));
        line->setText(QString());
        line2->setText(QString());
        line3->setText(QString());
        pushButton->setText(QApplication::translate("DialogDial", "Cancel", nullptr));
        ok->setText(QApplication::translate("DialogDial", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDial: public Ui_DialogDial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDIAL_H
