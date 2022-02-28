#include "produit.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
produit::produit()
{
    Id_produit=0;Fournisseurp=0;Quantite=0;
            Libelle="";
    Prix=0;
}

produit::produit(int Id_produit, float Prix , QString Libelle, int Quantite ,int Fournisseurp)
{
    this->Id_produit=Id_produit;
    this->Prix=Prix;
    this->Libelle=Libelle;
    this->Quantite=Quantite;
    this->Fournisseurp=Fournisseurp;
}
int produit::getId_produit(){return Id_produit;}
float produit::getPrix(){return Prix;}
QString produit::getLibelle(){return Libelle;}
int produit::getQuantite(){return Quantite;}
int produit::getFournisseurp(){return Fournisseurp;}


void produit::setId_produit(int Id_produit){this->Id_produit=Id_produit;}
void produit::setPrix(float Prix){this->Prix=Prix;}
void produit::setLibelle(QString Libelle){this->Libelle=Libelle;}
void produit::setQuantite(int Quantite){this->Quantite=Quantite;}
void produit::setfournisseurp(int Fournisseurp) {this->Fournisseurp=Fournisseurp;}


bool produit::ajouterproduit()
{
    QSqlQuery query;

          query.prepare("INSERT INTO produit (ID_PRODUIT, PRIX, LIBELLE, QUANTITE, FOURNISSEURP) "
                        "VALUES ( :ID_PRODUIT, :PRIX, :LIBELLE, :QUANTITE, :FOURNISSEURP)");
          query.bindValue(":ID_PRODUIT", Id_produit);
          query.bindValue(":PRIX", Prix);
          query.bindValue(":LIBELLE", Libelle);
          query.bindValue(":QUANTITE", Quantite);
          query.bindValue(":FOURNISSEURP", Fournisseurp);

         return  query.exec();


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


