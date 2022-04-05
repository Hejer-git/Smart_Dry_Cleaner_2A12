#include "machine.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>


#include <QSystemTrayIcon>


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

QSqlQueryModel * machine::tri_libelle()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from MACHINE order by LIBELLE_M asc");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_machine"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("libelle_M"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("fournisseur_M"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("etat_M"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("qte_M"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("prix_M"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("id_emp"));
    return model;
}


QSqlQueryModel * machine::tri_prixDEC()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from MACHINE order by PRIX_M desc");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_machine"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("libelle_M"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("fournisseur_M"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("etat_M"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("qte_M"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("prix_M"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("id_emp"));
    return model;
}


QSqlQueryModel * machine::tri_prixASC()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from MACHINE order by PRIX_M asc");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_machine"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("libelle_M"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("fournisseur_M"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("etat_M"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("qte_M"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("prix_M"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("id_emp"));
    return model;
}


QSqlQueryModel * machine::recherche1( QString a)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from MACHINE where (prix_M like '%"+a+"%' ) ");
        return    query;
}

QSqlQueryModel * machine::recherche2( QString b)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from MACHINE where (libelle_M like '%"+b+"%' ) ");
        return    query;
}

QSqlQueryModel * machine::recherche3( QString c)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from MACHINE where (etat_M like '%"+c+"%' ) ");
        return    query;
}


QString machine::  apercu_pdf()
{

    QString text="            ******* LES MACHINES  ********       \n \n " ;
    QSqlQuery query ;
    QString i,x,z,n,t,p;


     query.exec("select * from MACHINE ");
     while (query.next())
     {
         i=query.value(0).toString();
         x=query.value(1).toString();
         z=query.value(2).toString();
         n=query.value(3).toString();
         t=query.value(4).toString();
         p=query.value(5).toString();

       text += "\n - id_machine : "+i+"\n - libelle_M : "+ x+"\n  - Fournisseur_M : "+ z+"\n - Etat_M : "+ n+"\n  - Qte_M : "+t+"\n  -  Prix_M : "+p+"\n______________\n";



    }

            return text ;
}


void machine::notification(QString cls)
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->showMessage("NOTIFICATION",cls,QSystemTrayIcon::Information,15000);

}
void machine::Signal()
{
    QSqlQuery query ;
    query.prepare("SELECT * from MACHINE where etat_M = 0 ")  ;

    if(query.exec())
            {
                int count=0;
                while(query.next())
                {
                    count++;
                }
                if(count==1)
                   {
                    notification("une machine en panne");

                    }
                if(count<1)

                    {
                    notification("aucune machine en panne");

                    }
               if (count>1)
                   {
                     notification("plusieurs machine en panne");

                   }
    }

}
