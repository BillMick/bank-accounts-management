/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QFrame *line;
    QGroupBox *loginInterface;
    QLabel *labelIdentifiant;
    QLabel *labelMotdepasse;
    QLineEdit *accountNumber;
    QLineEdit *password;
    QLabel *label_3;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancel;
    QPushButton *quit;
    QPushButton *login;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QString::fromUtf8("DialogLogin"));
        DialogLogin->resize(329, 308);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210215-172805.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogLogin->setWindowIcon(icon);
        DialogLogin->setStyleSheet(QString::fromUtf8("#DialogLogin\n"
"{\n"
"	\n"
"}"));
        line = new QFrame(DialogLogin);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 80, 311, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        loginInterface = new QGroupBox(DialogLogin);
        loginInterface->setObjectName(QString::fromUtf8("loginInterface"));
        loginInterface->setGeometry(QRect(10, 100, 311, 161));
        loginInterface->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        labelIdentifiant = new QLabel(loginInterface);
        labelIdentifiant->setObjectName(QString::fromUtf8("labelIdentifiant"));
        labelIdentifiant->setGeometry(QRect(10, 20, 161, 31));
        labelIdentifiant->setStyleSheet(QString::fromUtf8("#labelIdentifiant\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"	\n"
"	font: 10pt \"Copperplate Gothic Bold\";\n"
"}"));
        labelMotdepasse = new QLabel(loginInterface);
        labelMotdepasse->setObjectName(QString::fromUtf8("labelMotdepasse"));
        labelMotdepasse->setGeometry(QRect(10, 90, 101, 31));
        labelMotdepasse->setStyleSheet(QString::fromUtf8("#labelMotdepasse\n"
"{\n"
"	color: rgb(0, 0, 127);\n"
"	font: 10pt \"Copperplate Gothic Bold\";\n"
"}"));
        accountNumber = new QLineEdit(loginInterface);
        accountNumber->setObjectName(QString::fromUtf8("accountNumber"));
        accountNumber->setGeometry(QRect(10, 49, 291, 31));
        accountNumber->setStyleSheet(QString::fromUtf8("font: 11pt \"Copperplate Gothic Bold\";"));
        password = new QLineEdit(loginInterface);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(10, 120, 291, 31));
        password->setStyleSheet(QString::fromUtf8("font: 11pt \"Copperplate Gothic Bold\";"));
        password->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(DialogLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 40, 81, 16));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 127);\n"
"font: 75 8pt \"Times New Roman\";"));
        label_2 = new QLabel(DialogLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 0, 191, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"CityBlueprint\";\n"
"color: rgb(0, 0, 255);"));
        graphicsView = new QGraphicsView(DialogLogin);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 61, 71));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/MesImages/MesImages/Screenshot_20210215-172511.png);"));
        horizontalLayoutWidget = new QWidget(DialogLogin);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 270, 311, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cancel = new QPushButton(horizontalLayoutWidget);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setStyleSheet(QString::fromUtf8("#cancel\n"
"{\n"
"	font: 8.5pt \"Batang\";\n"
"}"));

        horizontalLayout->addWidget(cancel);

        quit = new QPushButton(horizontalLayoutWidget);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setStyleSheet(QString::fromUtf8("#quit\n"
"{	\n"
"	font: 8.5pt \"Batang\";\n"
"}"));

        horizontalLayout->addWidget(quit);

        login = new QPushButton(horizontalLayoutWidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{	\n"
"	font: 8.5pt \"Batang\";\n"
"}"));

        horizontalLayout->addWidget(login);


        retranslateUi(DialogLogin);
        QObject::connect(cancel, SIGNAL(clicked()), DialogLogin, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Login Interface", nullptr));
        loginInterface->setTitle(QApplication::translate("DialogLogin", "LOGIN INTERFACE", nullptr));
        labelIdentifiant->setText(QApplication::translate("DialogLogin", "ACCOUNT NUMBER :", nullptr));
        labelMotdepasse->setText(QApplication::translate("DialogLogin", "PASSWORD :", nullptr));
        label_3->setText(QApplication::translate("DialogLogin", "The Safety Bank", nullptr));
        label_2->setText(QApplication::translate("DialogLogin", "BLUE LIGHTED BANK", nullptr));
        cancel->setText(QApplication::translate("DialogLogin", "Cancel", nullptr));
        quit->setText(QApplication::translate("DialogLogin", "Quit App", nullptr));
        login->setText(QApplication::translate("DialogLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
