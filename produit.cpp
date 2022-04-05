#include "produit.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
produit::produit()
{
    Id_produit=0;Prix=0;Fournisseurp=0;Quantite=0;
            Libelle="";

}

produit::produit(int Id_produit, int Prix , QString Libelle, int Quantite ,int Fournisseurp)
{
    this->Id_produit=Id_produit;
    this->Prix=Prix;
    this->Libelle=Libelle;
    this->Quantite=Quantite;
    this->Fournisseurp=Fournisseurp;
}
int produit::getId_produit(){return Id_produit;}
int produit::getPrix(){return Prix;}
QString produit::getLibelle(){return Libelle;}
int produit::getQuantite(){return Quantite;}
int produit::getFournisseurp(){return Fournisseurp;}


void produit::setId_produit(int Id_produit){this->Id_produit=Id_produit;}
void produit::setPrix(int Prix){this->Prix=Prix;}
void produit::setLibelle(QString Libelle){this->Libelle=Libelle;}
void produit::setQuantite(int Quantite){this->Quantite=Quantite;}
void produit::setfournisseurp(int Fournisseurp) {this->Fournisseurp=Fournisseurp;}


bool produit::ajouterproduit()
{

    QSqlQuery query;
          query.prepare("insert into produit(ID_PRODUIT, PRIX, LIBELLE, QUANTITE, FOURNISSEURP) "
                        "values ( :id_produit, :prix, :libelle, :quantite, :fournisseurp)");
          query.bindValue(":id_produit", Id_produit);
          query.bindValue(":prix", Prix);
          query.bindValue(":libelle", Libelle);
          query.bindValue(":quantite", Quantite);
          query.bindValue(":fournisseurp", Fournisseurp);




         return query.exec();



}
 QSqlQueryModel * produit::afficherproduit()
 {
     QSqlQueryModel * model=new QSqlQueryModel();


          model->setQuery("SELECT * FROM produit");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDproduit"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Libelle"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("Quantite"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("Fournisseurp"));
          return model ;
 }
 bool produit::supprimer(int Id_produit)
 {
     QSqlQuery query;
           query.prepare("Delete from produit where id_produit=:Id_produit");
           query.bindValue(":Id_produit", Id_produit);

           return query.exec();



 }

bool produit::modifierproduit()
{    QSqlQuery query ;
    query.prepare("UPDATE produit set ID_PRODUIT=:id_produit, PRIX=:prix, LIBELLE=:libelle, QUANTITE=:quantite, FOURNISSEURP=:fournisseurp WHERE ID_PRODUIT=:id_produit");
     //Création des variables liées
     query.bindValue(":id_produit",Id_produit);
     query.bindValue(":prix",Prix);
     query.bindValue(":libelle",Libelle);
     query.bindValue(":quantite",Quantite);
     query.bindValue(":fournisseurp",Fournisseurp);
     return query.exec();
}

QSqlQueryModel * produit::rechercherP(QString p)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from PRODUIT where (PRIX like '%"+p+"%' ) ");
        return    query;
}

QSqlQueryModel * produit::rechercherQ(QString q)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from PRODUIT where (QUANTITE like '%"+q+"%' ) ");
        return    query;
}

QSqlQueryModel * produit::rechercherL( QString l)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from PRODUIT where (LIBELLE like '%"+l+"%' ) ");
        return    query;
}
QSqlQueryModel * produit::trierL()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from PRODUIT order by LIBELLE asc");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDproduit"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Libelle"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Quantite"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Fournisseurp"));
return model ;
}


QSqlQueryModel * produit::trier_prixDEC()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from PRODUIT order by PRIX desc");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDproduit"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Libelle"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Quantite"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Fournisseurp"));
return model ;
}


QSqlQueryModel * produit::trier_prixASC()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from PRODUIT order by PRIX asc");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDproduit"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Libelle"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Quantite"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Fournisseurp"));
return model ;
}
QString produit::  apercu_pdf()
{

    QString text="            ******* LES PRODUITS  ********       \n \n " ;
    QSqlQuery query ;
    QString i,p,l,q,f;


     query.exec("select * from PRODUIT ");
     while (query.next())
     {
         i=query.value(0).toString();
         p=query.value(1).toString();
         l=query.value(2).toString();
         q=query.value(3).toString();
         f=query.value(4).toString();


       text += "\n - IDproduit : "+i+"\n - Prix : "+ p+"\n  - Libelle : "+ l+"\n - Quantite : "+ q+"\n  - Fournisseurp : "+f+"\n______________\n";



    }

            return text ;
}
