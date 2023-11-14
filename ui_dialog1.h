/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG1_H
#define UI_DIALOG1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog1
{
public:
    QPushButton *quit;
    QPushButton *cancel;
    QFrame *line;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *login;
    QPushButton *newCount;
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName(QString::fromUtf8("Dialog1"));
        Dialog1->resize(369, 239);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210211-233649.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog1->setWindowIcon(icon);
        Dialog1->setStyleSheet(QString::fromUtf8("#Dialog1\n"
"{\n"
"color:rgb(0, 0, 72);\n"
"}"));
        quit = new QPushButton(Dialog1);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(290, 210, 71, 21));
        quit->setStyleSheet(QString::fromUtf8("#quit\n"
"{	\n"
"font: 8.5pt \"Batang\";\n"
"}"));
        cancel = new QPushButton(Dialog1);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(10, 210, 71, 21));
        cancel->setStyleSheet(QString::fromUtf8("#cancel\n"
"{	\n"
"font: 8.5pt \"Batang\";\n"
"}"));
        line = new QFrame(Dialog1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 100, 351, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(Dialog1);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(7, 120, 351, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        login = new QPushButton(verticalLayoutWidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
"	font: 15pt \"Copperplate Gothic Bold\";\n"
"	border-width: 7;\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 5;\n"
"}"));

        verticalLayout->addWidget(login);

        newCount = new QPushButton(verticalLayoutWidget);
        newCount->setObjectName(QString::fromUtf8("newCount"));
        newCount->setStyleSheet(QString::fromUtf8("#newCount\n"
"{\n"
"	font: 15pt \"Copperplate Gothic Bold\";\n"
"	border-width: 7;\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 5;\n"
"}"));

        verticalLayout->addWidget(newCount);

        graphicsView = new QGraphicsView(Dialog1);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 151, 91));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/MesImages/MesImages/Screenshot_20210211-075800.png);"));
        label = new QLabel(Dialog1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 20, 191, 21));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"CityBlueprint\";\n"
"color: rgb(0, 0, 255);"));
        label_2 = new QLabel(Dialog1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 50, 151, 16));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 127);\n"
"font: 75 8pt \"Times New Roman\";"));
        label_3 = new QLabel(Dialog1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 70, 61, 16));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 127);\n"
"font: 75 8pt \"Times New Roman\";"));

        retranslateUi(Dialog1);
        QObject::connect(cancel, SIGNAL(clicked()), Dialog1, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QApplication::translate("Dialog1", "Login Or Create a new account", nullptr));
        quit->setText(QApplication::translate("Dialog1", "Quit App", nullptr));
        cancel->setText(QApplication::translate("Dialog1", "Cancel", nullptr));
#ifndef QT_NO_TOOLTIP
        login->setToolTip(QApplication::translate("Dialog1", "<html><head/><body><p>Connect to your account</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        login->setText(QApplication::translate("Dialog1", "LOGIN", nullptr));
#ifndef QT_NO_TOOLTIP
        newCount->setToolTip(QApplication::translate("Dialog1", "<html><head/><body><p>Create a new BLB account</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        newCount->setText(QApplication::translate("Dialog1", "CREATE NEW ACCOUNT", nullptr));
        label->setText(QApplication::translate("Dialog1", "BLUE LIGHTED BANK", nullptr));
        label_2->setText(QApplication::translate("Dialog1", "Daily with You for any Money ", nullptr));
        label_3->setText(QApplication::translate("Dialog1", "Transaction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H
