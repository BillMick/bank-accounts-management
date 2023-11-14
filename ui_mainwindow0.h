/********************************************************************************
** Form generated from reading UI file 'mainwindow0.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW0_H
#define UI_MAINWINDOW0_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow0
{
public:
    QWidget *centralwidget;
    QPushButton *logon0;
    QPushButton *quit0;
    QPushButton *aboutB;
    QLabel *label;
    QLabel *about;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow0)
    {
        if (MainWindow0->objectName().isEmpty())
            MainWindow0->setObjectName(QString::fromUtf8("MainWindow0"));
        MainWindow0->setEnabled(true);
        MainWindow0->resize(550, 345);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210211-233649.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow0->setWindowIcon(icon);
        MainWindow0->setAutoFillBackground(false);
        MainWindow0->setStyleSheet(QString::fromUtf8("border-image: url(:/MesImages/MesImages/Screenshot_20210214-130238.png)"));
        centralwidget = new QWidget(MainWindow0);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logon0 = new QPushButton(centralwidget);
        logon0->setObjectName(QString::fromUtf8("logon0"));
        logon0->setGeometry(QRect(450, 280, 75, 23));
        logon0->setStyleSheet(QString::fromUtf8("#logon0\n"
"{	\n"
"	border-width: 7;\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 5;\n"
"	border-image: none;\n"
"	font: 9pt \"Batang\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        quit0 = new QPushButton(centralwidget);
        quit0->setObjectName(QString::fromUtf8("quit0"));
        quit0->setGeometry(QRect(20, 280, 75, 23));
        quit0->setStyleSheet(QString::fromUtf8("#quit0\n"
"{\n"
"	border-width: 7;\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 5;\n"
"	border-image: none;\n"
"	font: 9pt \"Batang\";\n"
"color: rgb(255, 255, 255);\n"
"}"));
        aboutB = new QPushButton(centralwidget);
        aboutB->setObjectName(QString::fromUtf8("aboutB"));
        aboutB->setGeometry(QRect(230, 280, 91, 23));
        aboutB->setStyleSheet(QString::fromUtf8("#aboutB\n"
"{	\n"
"	border-width: 7;\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 5;\n"
"	border-image: none;\n"
"	font: 9pt \"Batang\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 271, 51));
        label->setStyleSheet(QString::fromUtf8("border-width: 7;\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 5;\n"
"	border-image: none;\n"
"font: 18pt \"CountryBlueprint\";\n"
"color: rgb(255, 255, 255);"));
        about = new QLabel(centralwidget);
        about->setObjectName(QString::fromUtf8("about"));
        about->setGeometry(QRect(36, 82, 251, 191));
        about->setStyleSheet(QString::fromUtf8("border-width: 7;\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 5;\n"
"	border-image: none;\n"
"font: 10pt \"Batang\";\n"
"color: rgb(255, 255, 255);"));
        MainWindow0->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow0);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 550, 21));
        MainWindow0->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow0);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow0->setStatusBar(statusbar);

        retranslateUi(MainWindow0);

        QMetaObject::connectSlotsByName(MainWindow0);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow0)
    {
        MainWindow0->setWindowTitle(QApplication::translate("MainWindow0", "Blue Lighted Bank", nullptr));
        logon0->setText(QApplication::translate("MainWindow0", "Log On", nullptr));
        quit0->setText(QApplication::translate("MainWindow0", "Quit App", nullptr));
#ifndef QT_NO_TOOLTIP
        aboutB->setToolTip(QApplication::translate("MainWindow0", "<html><head/><body><p>More informations about B-BANK</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        aboutB->setText(QApplication::translate("MainWindow0", "About BL-Bank", nullptr));
        label->setText(QApplication::translate("MainWindow0", "BLUE LIGHTED BANK", nullptr));
        about->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow0: public Ui_MainWindow0 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW0_H
