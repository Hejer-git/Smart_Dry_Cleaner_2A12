#include "dialog5.h"
#include "ui_dialog5.h"
#include "commandes.h"
#include <QMessageBox>
#include <QIntValidator>
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QMessageBox>
#include <QtGui>
#include <QtCore>
#include <QtPrintSupport/QtPrintSupport>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>

Dialog5::Dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog5)
{
    ui->setupUi(this);
}

Dialog5::~Dialog5()
{
    delete ui;
}
void Dialog5::on_pushButton_VAL_AJ_2_clicked()
{
    //Récuprération des informations saisies dans les 3 champs

    int CODE_C=ui->CODE_C->text().toInt(); //convertir une chaine de caractére en un entier
    QString TYPE=ui->TYPE->text();
    int DATE_C=ui->DATE_C->text().toInt();
    int PRIX_TOT=ui->PRIX_TOT->text().toInt();
    int ID_C=ui->ID_C->text().toInt();

    //instancier un objet de la classe Etudiant en utilisant les informations saisies dans l interfaces
    commandes cm(CODE_C,TYPE,DATE_C,PRIX_TOT,ID_C);
    //insérer l'objet etudiant instancié dans la table etudiant et recuperer la valeur de retour de query.exec();
    bool test=cm.ajoutercommandes();


    if(test)//si requête executée ==>QMessageBox::information
    {



       //refresh affichage
        ui->tableView->setModel(cm.affichercommandes());
        QMessageBox::information(nullptr,QObject::tr("ok"),
                QObject::tr("Ajout effectué \n Click Cancel to exit."), QMessageBox::Cancel);
    }
    else //si requête non exécutée ==>QMessageBox::critical
     {
        QMessageBox::critical(nullptr,QObject::tr("Not Ok"),
                              QObject::tr("Ajout non effectué. \n ""Click Cancel to exit."),QMessageBox::Cancel);
    }
}

void Dialog5::on_pushButton_4_clicked()
{
    int idaa =ui->CODE_C->text().toInt();
            bool test = cm.supprimer(idaa);
            if(test)
            {

                QMessageBox::information(nullptr,QObject::tr("ok"),
                                         QObject::tr("suppression effectué \n ""Click Cancel to exit."),QMessageBox::Cancel);
                //refresh affichage
                ui->tableView->setModel(cm.affichercommandes());

            }
            else
                QMessageBox::critical(nullptr,QObject::tr("not ok"),

     QObject::tr("suppression non effectué.\n""Click Cancel to exit."),QMessageBox::Cancel);
}


void Dialog5::on_pushButton_6_clicked()
{
    int CODE_C=ui->CODE_C->text().toInt(); //convertir une chaine de caractére en un entier
    QString TYPE=ui->TYPE->text();
    int DATE_C=ui->DATE_C->text().toInt();
    int PRIX_TOT=ui->PRIX_TOT->text().toInt();
    int ID_C=ui->ID_C->text().toInt();


    commandes cm(CODE_C,TYPE,DATE_C,PRIX_TOT,ID_C) ;
    bool test = cm.modifiercommandes() ;
    if(test)//si requête executée ==>QMessageBox::information
    {



       //refresh affichage
        ui->tableView->setModel(cm.affichercommandes());
        QMessageBox::information(nullptr,QObject::tr("ok"),
                QObject::tr("modification effectué \n Click Cancel to exit."), QMessageBox::Cancel);
    }
    else //si requête non exécutée ==>QMessageBox::critical
     {
        QMessageBox::critical(nullptr,QObject::tr("Not Ok"),
                              QObject::tr("modification non effectué. \n ""Click Cancel to exit."),QMessageBox::Cancel);
    }

}
void Dialog5::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
          QSqlQuery qry;
          qry.prepare("select * from commandes where"
                      " CODE_C='"+val+"' or TYPE='"+val+"' or DATE_C='"+val+"' or PRIX_TOT='"+val+"' or ID_C='"+val+"' ");
          if(qry.exec())
            {while (qry.next())
           { ui->CODE_C->setText(qry.value(0).toString());
             ui->TYPE->setText(qry.value(1).toString());
             ui->DATE_C->setText(qry.value(2).toString());
             ui->PRIX_TOT->setText(qry.value(3).toString());
             ui->ID_C->setText(qry.value(4).toString());


            }
        }
}

void Dialog5::on_tableView_clicked(const QModelIndex &index)
{
    idc=ui->tableView->model()->data(index).toInt();
    QSqlQuery qry;
}





void Dialog5::on_pushButton_8_clicked()
{
    QPdfWriter fichier_pdf("C:\\Users\tekay\\Desktop\vv\\qt\\commande.pdf");


                   QPainter painter(&fichier_pdf);
                   int i = 4000;
                          painter.setPen(Qt::red);
                          painter.setFont(QFont("Time New Roman", 25));
                          painter.drawText(3000,1400,"Commandes");
                          painter.setPen(Qt::black);
                          painter.setFont(QFont("Time New Roman", 15));
                          painter.drawRect(100,100,9400,2500);
                          painter.drawRect(100,3000,9400,500);
                          painter.setFont(QFont("Time New Roman", 9));
                          painter.drawText(400,3300,"Identifiant");
                          painter.drawText(1350,3300,"Quantite");
                          painter.drawText(2200,3300,"Date Commande");


                          QSqlQuery query;
                          query.prepare("select * from commandes");
                          query.exec();
                          while (query.next())
                          {
                              painter.drawText(400,i,query.value(0).toString());
                              painter.drawText(1350,i,query.value(1).toString());
                              painter.drawText(2300,i,query.value(2).toString());


                             i = i + 350;
                          }
                          QMessageBox::information(this, QObject::tr("PDF Enregistré!"),
                          QObject::tr("PDF Enregistré.\n" "Click Cancel to exit."), QMessageBox::Cancel);

                          QPrinter printer;
                          printer.setPrinterName("imrpimer commande!");
                          QPrintDialog dialog(&printer,this);
                          if(dialog.exec() == QDialog::Rejected) return;

                          //ui->->print(&printer);
}

void Dialog5::on_pushButton_25_clicked()
{
    commandes C;
        ui->tableView->setModel(C.tri_quantitecroissant());
        ui->tableView->setModel(C.affichercommandes());
        bool test = C.tri_quantitecroissant();
        if (test)
        {
            ui->tableView->setModel(C.tri_quantitecroissant());
            QMessageBox::information(nullptr,QObject::tr("ok"),
                                     QObject::tr("tri croissante effectue \n"
                                             "click cancel to exist."),QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::information(nullptr,QObject::tr("ok"),
                                     QObject::tr("tri croissante failed \n"
                                             "click cancel to exist."),QMessageBox::Cancel);

        }
}

void Dialog5::on_pushButton_24_clicked()
{
    commandes C;
    ui->tableView->setModel(C.tri_qiantitedecroissant());
    ui->tableView->setModel(C.affichercommandes());
    bool test = C.tri_qiantitedecroissant();
    if (test)
    {
        ui->tableView->setModel(C.tri_qiantitedecroissant());
        QMessageBox::information(nullptr,QObject::tr("ok"),
                                 QObject::tr("tri decroissante effectue \n"
                                         "click cancel to exist."),QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::information(nullptr,QObject::tr("ok"),
                                 QObject::tr("tri decroissante failed \n"
                                         "click cancel to exist."),QMessageBox::Cancel);

    }
}

void Dialog5::on_pushButton_7_clicked()
{
    commandes C;
        QString PRIX_TOT=ui->lineEdit_10->text();
        ui->tableView->setModel(C.rechercher(PRIX_TOT));
}





