#include "livraison.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>
#include <QtGui>
#include <QtCore>

livrasion::livrasion()
{
    ID_LIVRAISON=0,PRIX_LIV=0;
            ADRESSE="",ETAT_L="";

}

livrasion::livrasion(int ID_LIVRAISON, QString ETAT_L , QString ADRESSE, int PRIX_LIV)
{
    this->ID_LIVRAISON=ID_LIVRAISON;
    this->ETAT_L=ETAT_L;
    this->ADRESSE=ADRESSE;
    this->PRIX_LIV=PRIX_LIV;
}
int livrasion::getID_LIVRAISON(){return ID_LIVRAISON;}
QString livrasion::getETAT_L(){return ETAT_L;}
QString livrasion::getADRESSE(){return ADRESSE;}
int livrasion::getPRIX_LIV(){return PRIX_LIV;}


void livrasion::setID_LIVRAISON(int ID_LIVRAISON){this->ID_LIVRAISON=ID_LIVRAISON;}
void livrasion::setETAT_L(QString ETAT_L){this->ETAT_L=ETAT_L;}
void livrasion::setADRESSE(QString  ADRESSE){this->ADRESSE=ADRESSE;}
void livrasion::setPRIX_LIV(int PRIX_LIV){this->PRIX_LIV=PRIX_LIV;}



bool livrasion::ajouterlivraison()
{

    QSqlQuery query;
          query.prepare("insert into livraison(ID_LIVRAISON, ETAT_L, ADRESSE, PRIX_LIV)" " values ( :id_livraison , :etat_l , :adresse , :prix_liv )");
          query.bindValue(":id_livraison", ID_LIVRAISON);
          query.bindValue(":etat_l", ETAT_L);
          query.bindValue(":adresse", ADRESSE);
          query.bindValue(":prix_liv", PRIX_LIV);





         return query.exec();



}
 QSqlQueryModel * livrasion::afficherlivraison()
 {
     QSqlQueryModel * model=new QSqlQueryModel();


          model->setQuery("SELECT * FROM livraison");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_LIVRAISON"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("ETAT_L"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE_L"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIX_LIV"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("CODE_C"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID_EMP"));
          return model ;
 }
 bool livrasion::supprimer(int Id_livraison)
 {
     QSqlQuery query;
     QString Id_livraison_string=QString::number(Id_livraison);
           query.prepare("Delete from livraison where id_livraison=:Id_livraison");
           query.bindValue(":Id_livraison", Id_livraison_string);

           return query.exec();



 }

bool livrasion::modifierlivraison(int ID_LIVRAISON,QString ETAT_L,QString ADRESSE,int PRIX_LIV)
{    QSqlQuery query ;
     QString ID_LIVRAISON_string =QString::number(ID_LIVRAISON);
     QString PRIX_LIV_string =QString::number(PRIX_LIV);

    query.prepare("update livraison set ID_livraison=:idl, ETAT_L=:etat_l, ADRESSE=:adresse, PRIX_L=:prix_liv, WHERE ID_livraison=:id_livraison");
     //Création des variables liées
     query.bindValue(":idl",ID_LIVRAISON_string);
     query.bindValue(":etat_l",ETAT_L);
     query.bindValue(":adresse",ADRESSE);
     query.bindValue(":prix_liv",PRIX_LIV_string);
     return query.exec();

}
/*
QSqlQueryModel * Livraison::tri_qiantitedecroissant()
{
    QSqlQueryModel *  model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM LIVRAISON1 ORDER BY QUANTITE DESC");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_COMMANDE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("QUANTITE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DATE_COMMANDE"));

    return model;

}

QSqlQueryModel * livraison::tri_quantitecroissant()
{
    QSqlQueryModel * model=new QSqlQueryModel();

        model->setQuery(("SELECT * FROM COMMANDE1 ORDER BY QUANTITE ASC"));
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_COMMANDE"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("QUANTITE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("DATE_COMMANDE"));

        return  model;

}

bool Commandes::rech(int x)
{
    QSqlQuery query;
    query.prepare("select * from COMMANDE1 where QUANTITE = :QUANTITE;");
    query.bindValue(":QUANTITE", x);
    return  query.exec();

}

QSqlQueryModel * Commandes::rechercher(QString a)
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from COMMANDE1 where DATE_COMMANDE='"+a+"' ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_COMMANDE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("QUANTITE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DATE_COMMANDE"));

    return model;
}





void  print(int argc, char **argv) {
    QApplication app(argc, argv);
    QTextEdit parent;
    parent.setText("We are the world!");
    parent.show();

    QString filename = QFileDialog::getOpenFileName(&parent,"Open File",QString(),"Pdf File(*.pdf)");
    qDebug()<<"Print file name is "<<filename;
    if(!filename.isEmpty()) {
        if(QFileInfo(filename).suffix().isEmpty()) {
            filename.append(".pdf");
        }

        QPrinter printer(QPrinter::HighResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(filename);
        QPrintDialog*dlg = new QPrintDialog(&printer,&parent);
        dlg->setWindowTitle(QObject::tr("Print Document"));

        if(dlg->exec() == QDialog::Accepted) {
            parent.print(&printer);
        }
        delete dlg;
    }

}*/
