#include "dialogdebitw.h"
#include "ui_dialogdebitw.h"


extern mediator mediator;
DialogDebitW::DialogDebitW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDebitW)
{
    ui->setupUi(this);
}

DialogDebitW::~DialogDebitW()
{
    delete ui;
}

void DialogDebitW::on_ok_clicked()
{
    QString acNum = ui->accountNumberT->text();
    QString cBal = ui->debit->text();
    if(acNum == "" || cBal == "")
    {
        QMessageBox::information(this,"Conditions","You should fill gaps.");
    }
    else if(acNum == mediator.getnum())
    {
        QString m_type = "Debit";
        int indicator(0);
        double cBal1 = cBal.toDouble();
        mediator.setCredit(cBal1);
        double newBal(mediator.getbalance() - mediator.getcredit());
        mediator.setbalance(newBal);
        bool good(dbConnected());
        if (good)
        {
            QSqlQuery request(QSqlDatabase::database("MyConnect"));
           // QString m_pass1;
           // m_pass1 = Cryptographie(m_pass);
            request.prepare("SELECT * FROM Customers WHERE accountnumber = :accountnumber");
            request.bindValue(":accountnumber",acNum);
            //request.bindValue(":password",m_pass1);
            if(request.exec())
            {
                mediator.setnum("");
                mediator.setname("");
                mediator.setbalance(0);
                mediator.settype("");
                //QMessageBox::information(this,"","Successfully connected !");
                while(request.next())
                {
                    QString a_num = request.value(0).toString();
                    QString pass = request.value(4).toString();
                    double balance = request.value(13).toDouble();
                    QString type = request.value(1).toString();
                    QString name = request.value(5).toString() + " " + request.value(6).toString();
                    if(acNum == a_num)// && m_pass1 == pass)
                    {
                        mediator.setnum(a_num);
                        mediator.setname(name);
                        mediator.setbalance(balance);
                        //mediator.settype(type);
                        //hide();
                        //DialogAccount fenetre;
                        //fenetre.setModal(true);
                        //fenetre.exec();
                        //break;
                    }
                    else
                    {
                        QMessageBox::information(this,"","Access denied !");
                        break;
                    }
                }
            }
            else
            {
                QMessageBox::critical(this,"","Access failed !");
            }
            QSqlQuery request1(QSqlDatabase::database("MyConnect"));
            request1.prepare("SELECT * FROM Customers WHERE accountnumber = :accountnumber");
            request1.bindValue(":accountnumber",mediator.getnum());
            if(request1.exec())
            {
                while(request1.next())
                {
                    QString a_num = request1.value(0).toString();
                    if(a_num == acNum)
                    {
                        double a = mediator.getbalance();
                        QSqlQuery req;
                        req.prepare("UPDATE Customers SET balance=:a WHERE accountnumber = :accountnumber");
                        req.bindValue(":accountnumber",mediator.getnum());
                        req.bindValue(":a",a);
                        if (!req.exec())
                        {
                            QMessageBox::critical(this,"","Something is running bad !");
                        }
                        else
                            indicator = 1;
                        break;
                    }
                }
                if (indicator != 1)
                {
                    QMessageBox::critical(this,"","No exist data !");
                }
                else
                {
                    QSqlQuery reqT;
                    QString m_dateC = QDate::currentDate().toString("yyyy/MM/dd");
                    QString m_timeC = QTime::currentTime().toString("hh:mm:ss");
                    reqT.prepare("INSERT INTO Transactions(Date,Time,TransactionType,AccountNumberP,AccountNumberS,TransactionBalance) VALUES(:Date,:Time,:TransactionType,:AccountNumberP,:AccountNumberS,:TransactionBalance)");
                    reqT.bindValue(":Date",m_dateC);
                    reqT.bindValue(":Time",m_timeC);
                    reqT.bindValue(":TransactionType",m_type);
                    reqT.bindValue(":AccountNumberP",mediator.getnum());
                    reqT.bindValue(":AccountNumberS",acNum);
                    reqT.bindValue(":TransactionBalance",mediator.getcredit());
                    if(reqT.exec())
                    {
                        QMessageBox::information(this,"","Transaction successfully saved !");
                        hide();
                    }
                }
                hide();
            }
            else
            {
                QMessageBox::critical(this,"","Access failed !");
            }
        }
    }
    else
    {
        QMessageBox::information(this,"","You are not authorized to debit from another account than yours\nwithout an official bank draft or a validate personal check.\nThanks for understanding.");
    }
}
