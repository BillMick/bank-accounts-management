/********************************************************************************
** Form generated from reading UI file 'dialogconnexion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNEXION_H
#define UI_DIALOGCONNEXION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogConnexion
{
public:
    QRadioButton *worker;
    QRadioButton *customer;
    QTextBrowser *connectAs;
    QFrame *line;
    QPushButton *connect;
    QPushButton *cancel;

    void setupUi(QDialog *DialogConnexion)
    {
        if (DialogConnexion->objectName().isEmpty())
            DialogConnexion->setObjectName(QString::fromUtf8("DialogConnexion"));
        DialogConnexion->resize(299, 171);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210214-130238.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogConnexion->setWindowIcon(icon);
        DialogConnexion->setStyleSheet(QString::fromUtf8("#DialogConnexion\n"
"{\n"
"background: qlineargradient(spread:reflect, x1:0.0452261, y1:0, x2:0.517588, y2:0.517, stop:0.0502513 rgba(0, 76, 155, 255), stop:0.839196 rgba(0, 139, 99, 255));\n"
"}"));
        worker = new QRadioButton(DialogConnexion);
        worker->setObjectName(QString::fromUtf8("worker"));
        worker->setGeometry(QRect(80, 100, 151, 21));
        worker->setStyleSheet(QString::fromUtf8("#worker\n"
"{\n"
"	font: 8pt \"Copperplate Gothic Bold\";\n"
"}"));
        customer = new QRadioButton(DialogConnexion);
        customer->setObjectName(QString::fromUtf8("customer"));
        customer->setGeometry(QRect(80, 70, 151, 21));
        customer->setStyleSheet(QString::fromUtf8("#customer\n"
"{\n"
"font: 8pt \"Copperplate Gothic Bold\";\n"
"}"));
        connectAs = new QTextBrowser(DialogConnexion);
        connectAs->setObjectName(QString::fromUtf8("connectAs"));
        connectAs->setGeometry(QRect(20, 20, 256, 31));
        connectAs->setStyleSheet(QString::fromUtf8("#connectAs\n"
"{\n"
"	\n"
"}"));
        line = new QFrame(DialogConnexion);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 50, 281, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        connect = new QPushButton(DialogConnexion);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(210, 140, 75, 23));
        connect->setStyleSheet(QString::fromUtf8("#connect\n"
"{\n"
"	\n"
"	font: 8.5pt \"Batang\";\n"
"}"));
        cancel = new QPushButton(DialogConnexion);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(10, 140, 75, 23));
        cancel->setStyleSheet(QString::fromUtf8("#cancel\n"
"{\n"
"	font: 8.5pt \"Batang\";\n"
"}"));

        retranslateUi(DialogConnexion);
        QObject::connect(cancel, SIGNAL(clicked()), DialogConnexion, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogConnexion);
    } // setupUi

    void retranslateUi(QDialog *DialogConnexion)
    {
        DialogConnexion->setWindowTitle(QApplication::translate("DialogConnexion", "Welcome to BL-Bank", nullptr));
        worker->setText(QApplication::translate("DialogConnexion", "BLBank Worker", nullptr));
        customer->setText(QApplication::translate("DialogConnexion", "Customer", nullptr));
        connectAs->setHtml(QApplication::translate("DialogConnexion", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Broadway'; font-size:10pt; font-weight:600;\">CONNECT AS</span></p></body></html>", nullptr));
        connect->setText(QApplication::translate("DialogConnexion", "Connect", nullptr));
        cancel->setText(QApplication::translate("DialogConnexion", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogConnexion: public Ui_DialogConnexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNEXION_H
