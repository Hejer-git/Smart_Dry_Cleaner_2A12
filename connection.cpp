#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test");
db.setUserName("afi");//inserer nom de l'utilisateur
db.setPassword("afi");//inserer mot de passe de cet utilisateur

if (db.open()){

test=true;

}

    return  test;
}
void Connection::closeConnection(){db.close();}