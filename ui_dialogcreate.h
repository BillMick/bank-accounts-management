/********************************************************************************
** Form generated from reading UI file 'dialogcreate.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATE_H
#define UI_DIALOGCREATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogCreate
{
public:
    QFrame *line;
    QGroupBox *groupBox;
    QLineEdit *password1;
    QLineEdit *mail;
    QLineEdit *surname;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *countType;
    QLabel *label_2;
    QLabel *label_10;
    QDateEdit *dateB;
    QComboBox *gender;
    QLabel *label_8;
    QLabel *label_7;
    QCommandLinkButton *saveData;
    QLabel *label_3;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_9;
    QComboBox *country;
    QLabel *label_6;
    QLineEdit *firstname;
    QLineEdit *tel;
    QPushButton *cancel;
    QGraphicsView *graphicsView;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QDialog *DialogCreate)
    {
        if (DialogCreate->objectName().isEmpty())
            DialogCreate->setObjectName(QString::fromUtf8("DialogCreate"));
        DialogCreate->resize(510, 720);
        DialogCreate->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210211-080304.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogCreate->setWindowIcon(icon);
        DialogCreate->setStyleSheet(QString::fromUtf8("#DialogCreate\n"
"{\n"
"\n"
"}"));
        line = new QFrame(DialogCreate);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 110, 491, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(DialogCreate);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 130, 491, 581));
        groupBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";"));
        password1 = new QLineEdit(groupBox);
        password1->setObjectName(QString::fromUtf8("password1"));
        password1->setGeometry(QRect(220, 490, 261, 31));
        password1->setStyleSheet(QString::fromUtf8("#password1\n"
"{\n"
"	font: 12pt \"Andalus\";\n"
"}"));
        password1->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        mail = new QLineEdit(groupBox);
        mail->setObjectName(QString::fromUtf8("mail"));
        mail->setGeometry(QRect(220, 180, 261, 31));
        mail->setStyleSheet(QString::fromUtf8("font: 12pt \"Andalus\";"));
        surname = new QLineEdit(groupBox);
        surname->setObjectName(QString::fromUtf8("surname"));
        surname->setGeometry(QRect(220, 130, 261, 31));
        surname->setStyleSheet(QString::fromUtf8("font: 12pt \"Andalus\";"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 330, 141, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 180, 51, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        countType = new QComboBox(groupBox);
        countType->addItem(QString());
        countType->addItem(QString());
        countType->setObjectName(QString::fromUtf8("countType"));
        countType->setGeometry(QRect(220, 30, 261, 31));
        countType->setStyleSheet(QString::fromUtf8("#countType\n"
"{\n"
"font: 12pt \"Andalus\";\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 101, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 490, 161, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        dateB = new QDateEdit(groupBox);
        dateB->setObjectName(QString::fromUtf8("dateB"));
        dateB->setGeometry(QRect(220, 380, 261, 31));
        dateB->setStyleSheet(QString::fromUtf8("#date\n"
"{\n"
"font: 12pt \"Andalus\";\n"
"}"));
        gender = new QComboBox(groupBox);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName(QString::fromUtf8("gender"));
        gender->setGeometry(QRect(220, 330, 261, 31));
        gender->setStyleSheet(QString::fromUtf8("#gender\n"
"{\n"
"font: 12pt \"Andalus\";\n"
"}"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 230, 171, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 280, 171, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        saveData = new QCommandLinkButton(groupBox);
        saveData->setObjectName(QString::fromUtf8("saveData"));
        saveData->setGeometry(QRect(190, 540, 291, 41));
        saveData->setStyleSheet(QString::fromUtf8("#commandLinkButton\n"
"{\n"
"	background-color: rgb(211, 255, 212);\n"
"	font: 12pt \"Jokerman\";\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 101, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        password = new QLineEdit(groupBox);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(222, 430, 261, 31));
        password->setStyleSheet(QString::fromUtf8("#password\n"
"{\n"
"	font: 12pt \"Andalus\";\n"
"}"));
        password->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 131, 31));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 430, 101, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        country = new QComboBox(groupBox);
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->addItem(QString());
        country->setObjectName(QString::fromUtf8("country"));
        country->setGeometry(QRect(220, 230, 261, 31));
        country->setStyleSheet(QString::fromUtf8("#country\n"
"{\n"
"	font: 12pt \"Andalus\";\n"
"}"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 380, 141, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"Dutch801 Rm BT\";\n"
"color: rgb(0, 0, 255)"));
        firstname = new QLineEdit(groupBox);
        firstname->setObjectName(QString::fromUtf8("firstname"));
        firstname->setGeometry(QRect(220, 80, 261, 31));
        firstname->setStyleSheet(QString::fromUtf8("font: 12pt \"Andalus\";"));
        tel = new QLineEdit(groupBox);
        tel->setObjectName(QString::fromUtf8("tel"));
        tel->setGeometry(QRect(220, 280, 261, 31));
        tel->setStyleSheet(QString::fromUtf8("font: 12pt \"Andalus\";"));
        cancel = new QPushButton(groupBox);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(10, 550, 75, 23));
        cancel->setStyleSheet(QString::fromUtf8("#cancel\n"
"{	\n"
"	font: 8.5pt \"Batang\";\n"
"}"));
        graphicsView = new QGraphicsView(DialogCreate);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 111, 101));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/MesImages/MesImages/Screenshot_20210211-234707.png);"));
        label_11 = new QLabel(DialogCreate);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(150, 60, 161, 16));
        label_11->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 127);\n"
"font: 75 11pt \"Times New Roman\";"));
        label_12 = new QLabel(DialogCreate);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(150, 10, 351, 51));
        label_12->setStyleSheet(QString::fromUtf8("font: 25pt \"CityBlueprint\";\n"
"color: rgb(0, 0, 255);"));

        retranslateUi(DialogCreate);
        QObject::connect(cancel, SIGNAL(clicked()), DialogCreate, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogCreate);
    } // setupUi

    void retranslateUi(QDialog *DialogCreate)
    {
        DialogCreate->setWindowTitle(QApplication::translate("DialogCreate", "New Account Creation", nullptr));
#ifndef QT_NO_TOOLTIP
        DialogCreate->setToolTip(QApplication::translate("DialogCreate", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("DialogCreate", "NEW ACCOUNT CREATION", nullptr));
        label_5->setText(QApplication::translate("DialogCreate", "GENDER :", nullptr));
        label_4->setText(QApplication::translate("DialogCreate", "EMAIL :", nullptr));
        countType->setItemText(0, QApplication::translate("DialogCreate", "Current account", nullptr));
        countType->setItemText(1, QApplication::translate("DialogCreate", "Savings account", nullptr));

#ifndef QT_NO_TOOLTIP
        countType->setToolTip(QApplication::translate("DialogCreate", "<html><head/><body><p>Choisir le type de compte \303\240 cr\303\251er</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("DialogCreate", "FIRSTNAME :", nullptr));
        label_10->setText(QApplication::translate("DialogCreate", "CONFIRM PASSWORD :", nullptr));
        gender->setItemText(0, QApplication::translate("DialogCreate", "Woman", nullptr));
        gender->setItemText(1, QApplication::translate("DialogCreate", "Man", nullptr));
        gender->setItemText(2, QApplication::translate("DialogCreate", "Child", nullptr));
        gender->setItemText(3, QApplication::translate("DialogCreate", "No binary", nullptr));

        label_8->setText(QApplication::translate("DialogCreate", "COUNTRY :", nullptr));
        label_7->setText(QApplication::translate("DialogCreate", "PHONE NUMBER :", nullptr));
#ifndef QT_NO_TOOLTIP
        saveData->setToolTip(QApplication::translate("DialogCreate", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Copperplate Gothic Bold'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Validate this compte creation</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        saveData->setText(QApplication::translate("DialogCreate", "Create New Account (^_^)", nullptr));
        label_3->setText(QApplication::translate("DialogCreate", "SURNAME :", nullptr));
        label->setText(QApplication::translate("DialogCreate", "ACCOUNT TYPE :", nullptr));
        label_9->setText(QApplication::translate("DialogCreate", "PASSWORD :", nullptr));
        country->setItemText(0, QApplication::translate("DialogCreate", "Austria", nullptr));
        country->setItemText(1, QApplication::translate("DialogCreate", "Belgium", nullptr));
        country->setItemText(2, QApplication::translate("DialogCreate", "Benin", nullptr));
        country->setItemText(3, QApplication::translate("DialogCreate", "Burkina-Faso", nullptr));
        country->setItemText(4, QApplication::translate("DialogCreate", "Canada", nullptr));
        country->setItemText(5, QApplication::translate("DialogCreate", "Chine", nullptr));
        country->setItemText(6, QApplication::translate("DialogCreate", "France", nullptr));
        country->setItemText(7, QApplication::translate("DialogCreate", "Egypt", nullptr));
        country->setItemText(8, QApplication::translate("DialogCreate", "Germany", nullptr));
        country->setItemText(9, QApplication::translate("DialogCreate", "Ghana", nullptr));
        country->setItemText(10, QApplication::translate("DialogCreate", "Japon", nullptr));
        country->setItemText(11, QApplication::translate("DialogCreate", "Lybie", nullptr));
        country->setItemText(12, QApplication::translate("DialogCreate", "Niger", nullptr));
        country->setItemText(13, QApplication::translate("DialogCreate", "Nigeria", nullptr));
        country->setItemText(14, QApplication::translate("DialogCreate", "Senegal", nullptr));
        country->setItemText(15, QApplication::translate("DialogCreate", "South Africa", nullptr));
        country->setItemText(16, QApplication::translate("DialogCreate", "Togo", nullptr));

#ifndef QT_NO_TOOLTIP
        country->setToolTip(QApplication::translate("DialogCreate", "<html><head/><body><p>Pays d'origine</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("DialogCreate", "BIRTH DATE :", nullptr));
        cancel->setText(QApplication::translate("DialogCreate", "Cancel", nullptr));
        label_11->setText(QApplication::translate("DialogCreate", "No more worry for Funds", nullptr));
        label_12->setText(QApplication::translate("DialogCreate", "BLUE LIGHTED BANK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCreate: public Ui_DialogCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATE_H
