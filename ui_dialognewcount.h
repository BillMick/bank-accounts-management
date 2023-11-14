/********************************************************************************
** Form generated from reading UI file 'dialognewcount.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNEWCOUNT_H
#define UI_DIALOGNEWCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogNewCount
{
public:
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *name;
    QTextBrowser *aNum;
    QTextBrowser *type;
    QTextBrowser *dBal;
    QFrame *line;
    QLabel *label_12;
    QLabel *label_9;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QTextBrowser *textBrowser;
    QPushButton *advantageButton;
    QLabel *advantages;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *login;
    QPushButton *quit;

    void setupUi(QDialog *DialogNewCount)
    {
        if (DialogNewCount->objectName().isEmpty())
            DialogNewCount->setObjectName(QString::fromUtf8("DialogNewCount"));
        DialogNewCount->resize(611, 610);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210211-074639.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogNewCount->setWindowIcon(icon);
        DialogNewCount->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(DialogNewCount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 120, 391, 21));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Andalus\";"));
        label_2 = new QLabel(DialogNewCount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 150, 441, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Andalus\";"));
        groupBox = new QGroupBox(DialogNewCount);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 180, 381, 191));
        groupBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 111, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));

        verticalLayout->addWidget(label_6);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));

        verticalLayout->addWidget(label_4);

        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(120, 30, 251, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        name = new QTextBrowser(verticalLayoutWidget_2);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_2->addWidget(name);

        aNum = new QTextBrowser(verticalLayoutWidget_2);
        aNum->setObjectName(QString::fromUtf8("aNum"));

        verticalLayout_2->addWidget(aNum);

        type = new QTextBrowser(verticalLayoutWidget_2);
        type->setObjectName(QString::fromUtf8("type"));

        verticalLayout_2->addWidget(type);

        dBal = new QTextBrowser(verticalLayoutWidget_2);
        dBal->setObjectName(QString::fromUtf8("dBal"));

        verticalLayout_2->addWidget(dBal);

        line = new QFrame(DialogNewCount);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(7, 100, 591, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_12 = new QLabel(DialogNewCount);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(170, 10, 261, 51));
        label_12->setStyleSheet(QString::fromUtf8("font: 25pt \"CityBlueprint\";\n"
"color: rgb(0, 0, 255);"));
        label_9 = new QLabel(DialogNewCount);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 70, 81, 16));
        label_9->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 127);\n"
"font: 75 8pt \"Times New Roman\";"));
        graphicsView = new QGraphicsView(DialogNewCount);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 101, 91));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/MesImages/MesImages/Screenshot_20210211-074639.png);"));
        graphicsView_2 = new QGraphicsView(DialogNewCount);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(500, 10, 101, 91));
        graphicsView_2->setStyleSheet(QString::fromUtf8("border-image: url(:/MesImages/MesImages/Screenshot_20210211-233649.png);"));
        groupBox_2 = new QGroupBox(DialogNewCount);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(400, 180, 201, 241));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";\n"
"color: rgb(255, 0, 0);"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 50, 231, 21));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 87 9pt \"Arial Black\";"));
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 181, 211));
        textBrowser->setStyleSheet(QString::fromUtf8("#textBrowser\n"
"{\n"
"color: rgb(0, 0, 0);\n"
"font: 87 10pt \"Arial Black\";\n"
"}"));
        advantageButton = new QPushButton(DialogNewCount);
        advantageButton->setObjectName(QString::fromUtf8("advantageButton"));
        advantageButton->setGeometry(QRect(20, 380, 361, 31));
        advantageButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Eras Bold ITC\";"));
        advantages = new QLabel(DialogNewCount);
        advantages->setObjectName(QString::fromUtf8("advantages"));
        advantages->setGeometry(QRect(20, 420, 481, 181));
        advantages->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Bell MT\";"));
        verticalLayoutWidget_3 = new QWidget(DialogNewCount);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(509, 460, 91, 131));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        login = new QPushButton(verticalLayoutWidget_3);
        login->setObjectName(QString::fromUtf8("login"));
        login->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout_3->addWidget(login);

        quit = new QPushButton(verticalLayoutWidget_3);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout_3->addWidget(quit);


        retranslateUi(DialogNewCount);

        QMetaObject::connectSlotsByName(DialogNewCount);
    } // setupUi

    void retranslateUi(QDialog *DialogNewCount)
    {
        DialogNewCount->setWindowTitle(QApplication::translate("DialogNewCount", "Welcome to BL-Bank", nullptr));
        label->setText(QApplication::translate("DialogNewCount", "Welcome to Blue Lighted Bank. And thanks for registred !", nullptr));
        label_2->setText(QApplication::translate("DialogNewCount", "Your account is successfully created. Then, informations about it :", nullptr));
        groupBox->setTitle(QApplication::translate("DialogNewCount", "To be saved", nullptr));
        label_6->setText(QApplication::translate("DialogNewCount", "Name:", nullptr));
        label_3->setText(QApplication::translate("DialogNewCount", "Account Number:", nullptr));
        label_5->setText(QApplication::translate("DialogNewCount", "Account Type:", nullptr));
        label_4->setText(QApplication::translate("DialogNewCount", "Default Balance:", nullptr));
        label_12->setText(QApplication::translate("DialogNewCount", "BLUE LIGHTED BANK", nullptr));
        label_9->setText(QApplication::translate("DialogNewCount", "The Safety Bank", nullptr));
        groupBox_2->setTitle(QApplication::translate("DialogNewCount", "DON'T FORGET !!!", nullptr));
        label_8->setText(QString());
        textBrowser->setHtml(QApplication::translate("DialogNewCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial Black'; font-size:10pt; font-weight:80; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Copperplate Gothic Bold'; font-size:12pt; font-weight:400;\">For any login, you'll use your account number and your password. So you should'nt lose or forget them.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Copperplate Gothic Bold'; font-size:12pt; font-weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span"
                        " style=\" font-family:'Copperplate Gothic Bold'; font-size:12pt; font-weight:400;\">Thanks for understanding !</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        advantageButton->setToolTip(QApplication::translate("DialogNewCount", "<html><head/><body><p>List different advantages your have when create that account type</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        advantageButton->setText(QApplication::translate("DialogNewCount", "See your account type advantages", nullptr));
        advantages->setText(QString());
        login->setText(QApplication::translate("DialogNewCount", "Login now", nullptr));
        quit->setText(QApplication::translate("DialogNewCount", "Quit App", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogNewCount: public Ui_DialogNewCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNEWCOUNT_H
