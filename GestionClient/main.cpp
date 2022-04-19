#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include "client.h"
#include "smartinterface.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    SmartInterface s;
    bool test=c.createconnection();
    MainWindow w;
    s.show();
    return a.exec();

    if(test) //si la connexion est établie
    {w.show();
        QMessageBox::critical(nullptr, QObject::tr("database is open"),
        QObject::tr("connection successful.\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);

}
    else //si la connexion a échoué
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
        QObject::tr("connection failed.\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);


    return a.exec();
}

