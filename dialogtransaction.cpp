#include "dialogtransaction.h"
#include "ui_dialogtransaction.h"

extern mediator mediator;
DialogTransaction::DialogTransaction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTransaction)
{
    ui->setupUi(this);
    QSqlQuery request(QSqlDatabase::database("MyConnect"));
    QString result = "DATE\t\tTIME\t\tTRANSACTION TYPE\tTRANSACTION BALANCE\t\tACCOUNTNUMBERD\tACCOUNTNUMBERC\n";
    request.prepare("SELECT * FROM Transactions WHERE AccountNumberP = :accountnumber OR AccountNumberS = :accountnumber");// AND password = :password");
    request.bindValue(":accountnumber",mediator.getnum());
    //request.bindValue(":password",m_pass1);
    if(request.exec())
    {
        while(request.next())
        {
            QString date = request.value(0).toString();
            QString time = request.value(1).toString();
            QString type0 = request.value(3).toString();
            QString balance = request.value(2).toString();
            QString type1 = request.value(4).toString();
            QString type2 = request.value(5).toString();
            result = result + date + "\t" + time + "\t\t" + balance + "\t\t\t\t" + type0 + "\t\t\t" + type1 + "\t\t" + type2 + "\n";
        }
        ui->label->setText(result);
    }
    //QSqlQueryModel *requestModel = new QSqlQueryModel();
    //requestModel->setQuery("SELECT * FROM Transactions WHERE AccountNumberP = :AccountNumberP");
    //requestModel->bindValue(":AccountNumberP",mediator.getnum());
    //request.bindValue(":AccountNumberS",mediator.getnum());
    /*requestModel->setHeaderData(0,Qt::Horizontal,tr("Date"));
    requestModel->setHeaderData(1,Qt::Horizontal,tr("Time"));
    requestModel->setHeaderData(2,Qt::Horizontal,tr("Transaction Type"));
    requestModel->setHeaderData(3,Qt::Horizontal,tr("Transaction Balance"));
    requestModel->setHeaderData(4,Qt::Horizontal,tr("Account Number D"));
    requestModel->setHeaderData(5,Qt::Horizontal,tr("Account Number C"));*/
    /*if (!request.exec())
        QMessageBox::information(this,"","error faced!");*/
    //requestModel->select();
    //ui->transaction->setModel(requestModel);
}

DialogTransaction::~DialogTransaction()
{
    delete ui;
}
