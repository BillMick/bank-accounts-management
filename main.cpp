#include "mainwindow0.h"
#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QPixmap>
#include "mediator.h"

mediator mediator,newAccount,worker;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow0 w;
    w.show();
    return a.exec();
}
