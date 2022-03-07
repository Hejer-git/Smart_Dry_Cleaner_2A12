#include "machine.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

machine::machine()
{
    id_machine=0;
    libelle_M="";
    fournisseur_M="";
    etat_M=0;
    qte_M=0;
    prix_M=0;
    id_emp=0;

}
machine::machine (int id_machine,QString libelle_M,QString fournisseur_M,int etat_M, int qte_M,int prix_M,int id_emp)
{
    this->id_machine=id_machine;
    this->libelle_M=libelle_M;
    this->fournisseur_M=fournisseur_M;
    this->etat_M=etat_M;
    this->qte_M=qte_M;
    this->prix_M=prix_M;
    this->id_emp=id_emp;
}

bool machine::ajouter()
{
QSqlQuery query;
QString res=QString::number(id_machine);
QString res1=QString::number(etat_M);
QString res2=QString::number(qte_M);
QString res3=QString::number(prix_M);
QString res4=QString::number(id_emp);


query.prepare("INSERT INTO MACHINE(id_machine,libelle_M,fournisseur_M,etat_M,qte_M,prix_M,id_emp)"
"VALUES(:id_machine,:libelle_M,:fournisseur_M,:etat_M,:qte_M,:prix_M,:id_emp)");
query.bindValue(":id_machine",res);
query.bindValue(":libelle_M",libelle_M);
query.bindValue(":fournisseur_M",fournisseur_M);
query.bindValue(":etat_M",etat_M);
query.bindValue(":qte_M",qte_M);
query.bindValue(":prix_M",prix_M);
query.bindValue(":id_emp",id_emp);
return query.exec();
}

QSqlQueryModel * machine::afficher()
{
QSqlQueryModel * model=new QSqlQueryModel();
model->setQuery("select * from MACHINE");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_machine"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("libelle_M"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("fournisseur_M"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("etat_M"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("qte_M"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("prix_M"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("id_emp"));
return model;
}
bool machine::supprimer(int id_machine)
{
QSqlQuery query ;
QString res=QString::number(id_machine);
query.prepare("Delete from MACHINE where id_machine=:id_machine");
query.bindValue(":id_machine",id_machine);
return query.exec();
}
bool machine::modifiermachine()
{
    QSqlQuery query;
    query.prepare("UPDATE MACHINE SET id_machine=:id_machine,libelle_M=:libelle_M,fournisseur_M=:fournisseur_M,etat_M=:etat_M,qte_M=:qte_M,prix_M=:prix_M,id_emp=:id_emp WHERE id_machine=:id_machine");

            query.bindValue(":id_machine",id_machine);
            query.bindValue(":libelle_M",libelle_M);
            query.bindValue(":fournisseur_M",fournisseur_M);
            query.bindValue(":etat_M",etat_M);
            query.bindValue(":qte_M",qte_M);
            query.bindValue(":prix_M",prix_M);
            query.bindValue(":id_emp",id_emp);
            return query.exec();
}


