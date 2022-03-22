#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnection()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A"); //source de données ODBC
db.setUserName("hejer"); //nom de l'utilisateur qui a créé la source de données "Source_Projet2A"
db.setPassword("hejer"); //Mot de passe de cet utilisateur

if (db.open()) test=true;

    return  test;
}

void Connection::closeConnection(){db.close();}
