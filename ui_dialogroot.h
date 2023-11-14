/********************************************************************************
** Form generated from reading UI file 'dialogroot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGROOT_H
#define UI_DIALOGROOT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogRoot
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *search;
    QPushButton *research;
    QLabel *label;
    QComboBox *by;
    QFrame *line;
    QGraphicsView *img;
    QGraphicsView *graphicsView_2;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *listAll;
    QPushButton *addNew;
    QPushButton *statement;
    QVBoxLayout *verticalLayout_3;
    QPushButton *credit;
    QPushButton *debit;
    QPushButton *transfer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QLabel *outcome;
    QGroupBox *groupBox_2;
    QTableView *display;
    QPushButton *cancel;
    QPushButton *quit;

    void setupUi(QDialog *DialogRoot)
    {
        if (DialogRoot->objectName().isEmpty())
            DialogRoot->setObjectName(QString::fromUtf8("DialogRoot"));
        DialogRoot->resize(743, 636);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MesImages/MesImages/Screenshot_20210211-233620.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogRoot->setWindowIcon(icon);
        horizontalLayoutWidget = new QWidget(DialogRoot);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 120, 721, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        search = new QLineEdit(horizontalLayoutWidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        horizontalLayout->addWidget(search);

        research = new QPushButton(horizontalLayoutWidget);
        research->setObjectName(QString::fromUtf8("research"));
        research->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        horizontalLayout->addWidget(research);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 75 12pt \"Bell MT\";"));

        horizontalLayout->addWidget(label);

        by = new QComboBox(horizontalLayoutWidget);
        by->addItem(QString());
        by->addItem(QString());
        by->addItem(QString());
        by->addItem(QString());
        by->setObjectName(QString::fromUtf8("by"));
        by->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        horizontalLayout->addWidget(by);

        line = new QFrame(DialogRoot);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 100, 721, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        img = new QGraphicsView(DialogRoot);
        img->setObjectName(QString::fromUtf8("img"));
        img->setGeometry(QRect(630, 10, 91, 91));
        img->setStyleSheet(QString::fromUtf8("#img\n"
"{\n"
"	border-image: url(:/MesImages/MesImages/Screenshot_20210211-233739.png);\n"
"border-radius : 45px\n"
"}"));
        graphicsView_2 = new QGraphicsView(DialogRoot);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(10, 10, 91, 91));
        graphicsView_2->setStyleSheet(QString::fromUtf8("border-image: url(:/MesImages/MesImages/Screenshot_20210211-233649.png);\n"
"border-radius: 45px"));
        label_2 = new QLabel(DialogRoot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 10, 311, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 30pt \"CityBlueprint\";\n"
"color: rgb(0, 0, 255);"));
        label_3 = new QLabel(DialogRoot);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 60, 111, 21));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 127);\n"
"font: 75 10pt \"Times New Roman\";"));
        horizontalLayoutWidget_2 = new QWidget(DialogRoot);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 160, 721, 111));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listAll = new QPushButton(horizontalLayoutWidget_2);
        listAll->setObjectName(QString::fromUtf8("listAll"));
        listAll->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout->addWidget(listAll);

        addNew = new QPushButton(horizontalLayoutWidget_2);
        addNew->setObjectName(QString::fromUtf8("addNew"));
        addNew->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout->addWidget(addNew);

        statement = new QPushButton(horizontalLayoutWidget_2);
        statement->setObjectName(QString::fromUtf8("statement"));
        statement->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout->addWidget(statement);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        credit = new QPushButton(horizontalLayoutWidget_2);
        credit->setObjectName(QString::fromUtf8("credit"));
        credit->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout_3->addWidget(credit);

        debit = new QPushButton(horizontalLayoutWidget_2);
        debit->setObjectName(QString::fromUtf8("debit"));
        debit->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout_3->addWidget(debit);

        transfer = new QPushButton(horizontalLayoutWidget_2);
        transfer->setObjectName(QString::fromUtf8("transfer"));
        transfer->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout_3->addWidget(transfer);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        groupBox = new QGroupBox(DialogRoot);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 280, 721, 91));
        groupBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";\n"
"color: rgb(0, 0, 127);"));
        outcome = new QLabel(groupBox);
        outcome->setObjectName(QString::fromUtf8("outcome"));
        outcome->setGeometry(QRect(10, 20, 701, 61));
        outcome->setStyleSheet(QString::fromUtf8("font: 8pt \"Calibri\";\n"
"color: rgb(0, 0, 0);"));
        groupBox_2 = new QGroupBox(DialogRoot);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 380, 721, 221));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Copperplate Gothic Bold\";\n"
"color: rgb(0, 0, 127);"));
        display = new QTableView(groupBox_2);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(10, 20, 701, 192));
        cancel = new QPushButton(DialogRoot);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(10, 600, 234, 26));
        cancel->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));
        quit = new QPushButton(DialogRoot);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(500, 600, 234, 26));
        quit->setStyleSheet(QString::fromUtf8("font: 12pt \"Bell MT\";"));

        retranslateUi(DialogRoot);
        QObject::connect(cancel, SIGNAL(clicked()), DialogRoot, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogRoot);
    } // setupUi

    void retranslateUi(QDialog *DialogRoot)
    {
        DialogRoot->setWindowTitle(QApplication::translate("DialogRoot", "Worker Interface", nullptr));
        research->setText(QApplication::translate("DialogRoot", "Resarch Customers", nullptr));
        label->setText(QApplication::translate("DialogRoot", "By", nullptr));
        by->setItemText(0, QApplication::translate("DialogRoot", "Account Number", nullptr));
        by->setItemText(1, QApplication::translate("DialogRoot", "Firstname", nullptr));
        by->setItemText(2, QApplication::translate("DialogRoot", "Surname", nullptr));
        by->setItemText(3, QApplication::translate("DialogRoot", "Email", nullptr));

        label_2->setText(QApplication::translate("DialogRoot", "BLUE LIGHTED BANK", nullptr));
        label_3->setText(QApplication::translate("DialogRoot", "The delighted Bank", nullptr));
        listAll->setText(QApplication::translate("DialogRoot", "List All Customers", nullptr));
        addNew->setText(QApplication::translate("DialogRoot", "Add New Customer", nullptr));
        statement->setText(QApplication::translate("DialogRoot", "List All Statements", nullptr));
        credit->setText(QApplication::translate("DialogRoot", "Credit Account", nullptr));
        debit->setText(QApplication::translate("DialogRoot", "Debit Account", nullptr));
        transfer->setText(QApplication::translate("DialogRoot", "Bank Transfer", nullptr));
        pushButton->setText(QApplication::translate("DialogRoot", "Grant a loan", nullptr));
        pushButton_2->setText(QApplication::translate("DialogRoot", "Grant an overdraft", nullptr));
        pushButton_3->setText(QApplication::translate("DialogRoot", "Freeze an account", nullptr));
        groupBox->setTitle(QApplication::translate("DialogRoot", "Research Outcome", nullptr));
        outcome->setText(QString());
        groupBox_2->setTitle(QApplication::translate("DialogRoot", "Customers Data", nullptr));
        cancel->setText(QApplication::translate("DialogRoot", "Cancel", nullptr));
        quit->setText(QApplication::translate("DialogRoot", "Quit App", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRoot: public Ui_DialogRoot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGROOT_H
