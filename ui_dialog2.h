/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QLabel *labelIdentifiant;
    QLabel *labelMotdepasse;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancel;
    QPushButton *quit;
    QPushButton *login;
    QLineEdit *workerId;
    QLineEdit *password;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QString::fromUtf8("Dialog2"));
        Dialog2->resize(282, 259);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210215-172857.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog2->setWindowIcon(icon);
        Dialog2->setStyleSheet(QString::fromUtf8("#Dialog2\n"
"{\n"
"\n"
"}"));
        labelIdentifiant = new QLabel(Dialog2);
        labelIdentifiant->setObjectName(QString::fromUtf8("labelIdentifiant"));
        labelIdentifiant->setGeometry(QRect(10, 80, 181, 31));
        labelIdentifiant->setStyleSheet(QString::fromUtf8("#labelIdentifiant\n"
"{\n"
"	font: 11pt \"BankGothic Md BT\";\n"
"}"));
        labelMotdepasse = new QLabel(Dialog2);
        labelMotdepasse->setObjectName(QString::fromUtf8("labelMotdepasse"));
        labelMotdepasse->setGeometry(QRect(10, 150, 141, 31));
        labelMotdepasse->setStyleSheet(QString::fromUtf8("#labelMotdepasse\n"
"{\n"
"	font: 11pt \"BankGothic Md BT\";\n"
"}"));
        line = new QFrame(Dialog2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 70, 261, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(Dialog2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 220, 261, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cancel = new QPushButton(horizontalLayoutWidget);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setStyleSheet(QString::fromUtf8("#cancel\n"
"{\n"
"font: 8.5pt \"Batang\";\n"
"}"));

        horizontalLayout->addWidget(cancel);

        quit = new QPushButton(horizontalLayoutWidget);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setStyleSheet(QString::fromUtf8("#quit\n"
"{\n"
"font: 8.5pt \"Batang\";\n"
"}"));

        horizontalLayout->addWidget(quit);

        login = new QPushButton(horizontalLayoutWidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
"font: 8.5pt \"Batang\";\n"
"}"));

        horizontalLayout->addWidget(login);

        workerId = new QLineEdit(Dialog2);
        workerId->setObjectName(QString::fromUtf8("workerId"));
        workerId->setGeometry(QRect(10, 110, 261, 31));
        workerId->setStyleSheet(QString::fromUtf8("font: 11pt \"Copperplate Gothic Bold\";"));
        password = new QLineEdit(Dialog2);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(10, 180, 261, 31));
        password->setStyleSheet(QString::fromUtf8("font: 11pt \"Copperplate Gothic Bold\";"));
        password->setEchoMode(QLineEdit::Password);
        graphicsView = new QGraphicsView(Dialog2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 61, 61));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/MesImages/MesImages/Screenshot_20210215-172857.png);"));
        label_2 = new QLabel(Dialog2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 40, 151, 16));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 127);\n"
"font: 75 8pt \"Times New Roman\";"));
        label = new QLabel(Dialog2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 191, 21));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"CityBlueprint\";\n"
"color: rgb(0, 0, 255);"));

        retranslateUi(Dialog2);
        QObject::connect(cancel, SIGNAL(clicked()), Dialog2, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Worker's connexion interface", nullptr));
        labelIdentifiant->setText(QApplication::translate("Dialog2", "WORKER'S ID :", nullptr));
        labelMotdepasse->setText(QApplication::translate("Dialog2", "PASSWORD :", nullptr));
        cancel->setText(QApplication::translate("Dialog2", "Cancel", nullptr));
        quit->setText(QApplication::translate("Dialog2", "Quit App", nullptr));
        login->setText(QApplication::translate("Dialog2", "Login", nullptr));
        label_2->setText(QApplication::translate("Dialog2", "Don't forget why you sign up", nullptr));
        label->setText(QApplication::translate("Dialog2", "BLUE LIGHTED BANK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
