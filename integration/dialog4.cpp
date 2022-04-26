#include "dialog4.h"
#include "ui_dialog4.h"
#include "livraison.h"
#include <QMessageBox>
#include <QIntValidator>
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QMessageBox>
#include <QtGui>
#include <QtCore>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextDocument>


Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
}

Dialog4::~Dialog4()
{
    delete ui;
}
void Dialog4::on_pushButton_VAL_AJ_2_clicked()
{
    //Récuprération des informations saisies dans les 3 champs

    int idl=ui->idl->text().toInt(); //convertir une chaine de caractére en un entier
    QString etat_l=ui->etat_l->text();
    QString adresse=ui->adresse->text();
    int prix_liv=ui->prix_liv->text().toInt();


    //instancier un objet de la classe Etudiant en utilisant les informations saisies dans l interfaces
    livrasion liv(idl,etat_l,adresse,prix_liv);
    //insérer l'objet etudiant instancié dans la table etudiant et recuperer la valeur de retour de query.exec();
     bool test=liv.ajouterlivraison();


    if(test)//si requête executée ==>QMessageBox::information
     {



       //refresh affichage
        ui->tableView->setModel(liv.afficherlivraison());
        QMessageBox::information(nullptr,QObject::tr("ok"),
                QObject::tr("Ajout effectué \n Click Cancel to exit."), QMessageBox::Cancel);
    }
    else //si requête non exécutée ==>QMessageBox::critical
     {
        QMessageBox::critical(nullptr,QObject::tr("Not Ok"),
                              QObject::tr("Ajout non effectué. \n ""Click Cancel to exit."),QMessageBox::Cancel);
    }
}

void Dialog4::on_pushButton_4_clicked()
{
    int idaa =ui->idl->text().toInt();
            bool test = liv.supprimer(idaa);
            if(test)
            {

                QMessageBox::information(nullptr,QObject::tr("ok"),
                                         QObject::tr("suppression effectué \n ""Click Cancel to exit."),QMessageBox::Cancel);
                //refresh affichage
                ui->tableView->setModel(liv.afficherlivraison());

            }
            else
                QMessageBox::critical(nullptr,QObject::tr("not ok"),

     QObject::tr("suppression non effectué.\n""Click Cancel to exit."),QMessageBox::Cancel);
}


void Dialog4::on_pushButton_6_clicked()
{
    int idl=ui->idl->text().toInt();
    QString etat_l=ui->etat_l->text();
    QString adresse=ui->adresse->text();
    int prix_liv=ui->prix_liv->text().toInt();



    livrasion liv(idl , etat_l , adresse , prix_liv ) ;
    bool test = liv.modifierlivraison(idl, etat_l , adresse , prix_liv ) ;
    if(test)//si requête executée ==>QMessageBox::information
    {



       //refresh affichage
        ui->tableView->setModel(liv.afficherlivraison());
        QMessageBox::information(nullptr,QObject::tr("ok"),
                QObject::tr("modification effectué \n Click Cancel to exit."), QMessageBox::Cancel);
    }
    else //si requête non exécutée ==>QMessageBox::critical
     {
        QMessageBox::critical(nullptr,QObject::tr("Not Ok"),
                              QObject::tr("modification non effectué. \n ""Click Cancel to exit."),QMessageBox::Cancel);
    }

}
void Dialog4::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
          QSqlQuery qry;
          qry.prepare("select * from livraison where"
                      " id_livraison='"+val+"' or etat_l='"+val+"' or adresse='"+val+"' or prix_liv='"+val+"' ");
          if(qry.exec())
            {while (qry.next())
           { ui->idl->setText(qry.value(0).toString());
             ui->etat_l->setText(qry.value(1).toString());
             ui->adresse->setText(qry.value(2).toString());
             ui->prix_liv->setText(qry.value(3).toString());



            }
        }
}

void Dialog4::on_tableView_clicked(const QModelIndex &index)
{
    idl=ui->tableView->model()->data(index).toInt();
    QSqlQuery qry;
}



