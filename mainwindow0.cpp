#include "mainwindow0.h"
#include "dialogconnexion.h"
#include "ui_mainwindow0.h"
#include <QApplication>
#include <QMainWindow>
#include <QMessageBox>
#include "dialogroot.h"
#include <QLabel>
#include "mediator.h"
MainWindow0::MainWindow0(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow0)
{
    ui->setupUi(this);
    /*QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(update()));
    timer ->start(1000);*/
    /*bool good(connexionBd());
    if(good)
    {
        QMessageBox::information(this, "DataBase connexion", "Successfully connected !");
    }
    else
    {
        QMessageBox::about(this, "DataBase connexion", "Error ! !");
    }*/
}

MainWindow0::~MainWindow0()
{
    delete ui;
}

void MainWindow0::on_quit0_clicked()
{
    int reponse = QMessageBox::question(this, "Exit Confirmation",
    "Do you really want to quit App?", QMessageBox ::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        exit(0);
    }
}

void MainWindow0::on_logon0_clicked()
{
    //hide();
    DialogConnexion fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}

void MainWindow0::on_aboutB_clicked()
{
    ui->about->setText("Blue Lighted Bank is a financial institution created since 2001."
                       "\n\nOur hope is to see you more happier."
                       "\n\nBe peaceful, We have The Solution."
                       "\n\nThanks for your faithful and reliance.");
    //QMessageBox::information(this, "About B-Bank", "");
}


