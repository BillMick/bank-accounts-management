/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *seConnecterB;
    QPushButton *nouveauCompteB;
    QTextBrowser *textBrowser_3;
    QPushButton *quit;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(444, 430);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        seConnecterB = new QPushButton(centralwidget);
        seConnecterB->setObjectName(QString::fromUtf8("seConnecterB"));
        seConnecterB->setGeometry(QRect(10, 80, 211, 271));
        seConnecterB->setStyleSheet(QString::fromUtf8("color: rgb(255, 149, 19);\n"
"font: 15pt \"Andalus\";\n"
"gradient: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));
        nouveauCompteB = new QPushButton(centralwidget);
        nouveauCompteB->setObjectName(QString::fromUtf8("nouveauCompteB"));
        nouveauCompteB->setGeometry(QRect(230, 80, 201, 271));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(50, 20, 351, 41));
        quit = new QPushButton(centralwidget);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(360, 360, 75, 23));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(10, 360, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 444, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
#ifndef QT_NO_TOOLTIP
        seConnecterB->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Se connecter \303\240 mon compte</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        seConnecterB->setText(QApplication::translate("MainWindow", "Se connecter", nullptr));
#ifndef QT_NO_TOOLTIP
        nouveauCompteB->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Cr\303\251er un nouveau compte</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        nouveauCompteB->setText(QApplication::translate("MainWindow", "Nouveau compte", nullptr));
        textBrowser_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">BIENVENU DANS VOTRE BANQUE</span></p></body></html>", nullptr));
        quit->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        back->setText(QApplication::translate("MainWindow", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
