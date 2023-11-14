#include "dialognewcount.h"
#include "ui_dialognewcount.h"
#include "dialoglogin.h"
#include <QMessageBox>

extern mediator newAccount;

DialogNewCount::DialogNewCount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNewCount)
{
    ui->setupUi(this);
    ui->name->setText(newAccount.getname());
    ui->type->setText(newAccount.gettype());
    ui->aNum->setText(newAccount.getnum());
    ui->dBal->setText("$7");
}

DialogNewCount::~DialogNewCount()
{
    delete ui;
}

void DialogNewCount::on_login_clicked()
{
    hide();
    DialogLogin fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}

void DialogNewCount::on_quit_clicked()
{
    int reponse = QMessageBox::question(this, "Exit Confirmation",
    "Do you really want to quit App?", QMessageBox ::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        exit(0);
    }
}

void DialogNewCount::on_advantageButton_clicked()
{
    if (newAccount.gettype() == "Savings account")
    {
        ui->advantages->setText("# A default balance of $7.\n"
                                "## A rate saving of 0.3% per year.\n"
                                "### Your are granted to make loans.\n\n"
                                "#### Don't worry, your password is encrypted.\n"
                                "So nobody can be able to hack or rob you.");
    }
    else if (newAccount.gettype() == "Current account")
    {
        ui->advantages->setText("# A default balance of $7.\n\n"
                                "## By suscribing you can benefit 70% of your monthly credit\n"
                                "   as current account overdraft.\n\n"
                                "### Your are granted to make loans.\n\n"
                                "#### Don't worry, your password is encrypted.\n"
                                "     So nobody can be able to hack or rob you.");
    }
}
