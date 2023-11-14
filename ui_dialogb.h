/********************************************************************************
** Form generated from reading UI file 'dialogb.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGB_H
#define UI_DIALOGB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>

QT_BEGIN_NAMESPACE

class Ui_DialogB
{
public:
    QFrame *frame;

    void setupUi(QDialog *DialogB)
    {
        if (DialogB->objectName().isEmpty())
            DialogB->setObjectName(QString::fromUtf8("DialogB"));
        DialogB->resize(400, 300);
        frame = new QFrame(DialogB);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(110, 50, 120, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(DialogB);

        QMetaObject::connectSlotsByName(DialogB);
    } // setupUi

    void retranslateUi(QDialog *DialogB)
    {
        DialogB->setWindowTitle(QApplication::translate("DialogB", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogB: public Ui_DialogB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGB_H
