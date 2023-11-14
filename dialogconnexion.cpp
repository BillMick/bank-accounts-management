#include "dialogconnexion.h"
#include "dialog1.h"
#include "dialog2.h"
#include "dialogdial.h"
#include "ui_dialogconnexion.h"
#include <QMessageBox>

DialogConnexion::DialogConnexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConnexion)
{
    ui->setupUi(this);
}

DialogConnexion::~DialogConnexion()
{
    delete ui;
}

void DialogConnexion::on_connect_clicked()
{

    if (ui->worker->isChecked())
    {
        hide();
        DialogDial fenetre;
        fenetre.setModal(true);
        fenetre.exec();
    }
    else if (ui->customer->isChecked())
    {
        hide();
        Dialog1 fenetre;
        fenetre.setModal(true);
        fenetre.exec();
    }
    else
    {
        QMessageBox::information(this, "About B-Bank", "Make a choice before connected.");
    }
}
