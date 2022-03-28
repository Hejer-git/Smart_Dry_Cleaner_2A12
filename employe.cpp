#include "employe.h"
#include "Connection.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

Employe::Employe(int Id_Emp,QString Nom_Emp,QString Prenom_Emp,QString Fonction,int Num_TelE,int Salaire,int Nbr_heures)
 {
                   this->Id_Emp=Id_Emp;
                   this->Nom_Emp=Nom_Emp;
                   this->Prenom_Emp=Prenom_Emp;
                   this->Fonction=Fonction;
                   this->Num_TelE=Num_TelE;
                   this->Salaire=Salaire;
                   this->Nbr_heures=Nbr_heures;
}

bool Employe::ajouter()
{
    QSqlQuery query;
    QString res = QString::number(Id_Emp);
    QString res1 = QString::number(Num_TelE);
    QString res2 = QString::number(Nbr_heures);
    QString res3 = QString::number(Salaire);
    //prepare() prend la requete en parametre pour l'execution
        query.prepare("INSERT INTO EMPLOYE(Id_Emp,Nom_Emp,Prenom_Emp,Fonction,Num_TelE,Salaire,Nbr_heures)" "VALUES(:Id_Emp,:Nom_Emp,:Prenom_Emp,:Fonction,:Num_TelE,:Salaire,:Nbr_heures)");
        query.bindValue(":Id_Emp",res);
        query.bindValue(":Nom_Emp",Nom_Emp);
        query.bindValue(":Prenom_Emp",Prenom_Emp);
        query.bindValue(":Fonction",Fonction);
        query.bindValue(":Num_TelE",res1);
        query.bindValue(":Salaire",res3);
        query.bindValue(":Nbr_heures",res2);
        return query.exec();  //exec() envoie la requete pour l'executer
}

QSqlQueryModel * Employe::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery("select * from EMPLOYE");
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("Id_Emp"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom_Emp"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("Prenom_Emp"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("Fonction"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("Num_TelE"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("Salaire"));
        model->setHeaderData(6,Qt::Horizontal,QObject::tr("Nbr_heures"));
        return model;
}

bool Employe::supprimer(int Id_Emp )
{
    QSqlQuery query;
    QString res = QString::number(Id_Emp);
       query.prepare("Delete from EMPLOYE where Id_Emp=:Id_Emp");
       query.bindValue(":Id_Emp",Id_Emp);
       return query.exec();
}

bool Employe::modifier()
{

    QSqlQuery query;
    query.prepare("UPDATE EMPLOYE set Id_Emp=:Id_Emp,Nom_Emp=:Nom_Emp,Prenom_Emp=:Prenom_Emp,Fonction=:Fonction,Num_TelE=:Num_TelE,Salaire=:Salaire,Nbr_heures=:Nbr_heures where Id_Emp=:Id_Emp ");

    query.bindValue(":Id_Emp",Id_Emp);
    query.bindValue(":Nom_Emp", Nom_Emp);
    query.bindValue(":Prenom_Emp",Prenom_Emp);
    query.bindValue(":Fonction",Fonction);
    query.bindValue(":Num_TelE", Num_TelE);
    query.bindValue(":Salaire",Salaire);
    query.bindValue(":Nbr_heures", Nbr_heures);

   return query.exec();
}

QSqlQueryModel * Employe::rechercher1( QString a)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from EMPLOYE where (NOM_EMP like '%"+a+"%' ) ");
        return    query;
}
QSqlQueryModel * Employe::rechercher2( QString b)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from EMPLOYE where (PRENOM_EMP like '%"+b+"%' ) ");
        return    query;
}
QSqlQueryModel * Employe::rechercher3( QString x)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from EMPLOYE where (FONCTION like '%"+x+"%' ) ");
        return    query;
}
QSqlQueryModel * Employe::trier1()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from EMPLOYE order by NOM_EMP");
model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID_EMP"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM_EMP"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM_EMP"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("FONCTION"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("NUM_TELE"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("SALAIRE"));
model->setHeaderData(7, Qt::Horizontal, QObject::tr("NBR_HEURES"));
    return model;
}
QSqlQueryModel * Employe::trier2()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from EMPLOYE order by SALAIRE");
model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID_EMP"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM_EMP"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM_EMP"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("FONCTION"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("NUM_TELE"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("SALAIRE"));
model->setHeaderData(7, Qt::Horizontal, QObject::tr("NBR_HEURES"));
    return model;
}
QSqlQueryModel * Employe::trier3()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from EMPLOYE order by NBR_HEURES");
model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID_EMP"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM_EMP"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM_EMP"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("FONCTION"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("NUM_TELE"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("SALAIRE"));
model->setHeaderData(7, Qt::Horizontal, QObject::tr("NBR_HEURES"));
    return model;
}
