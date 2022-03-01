#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include <QMessageBox>
#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(Pr.afficherproduit());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_VAL_AJ_2_clicked()
{
    //Récuprération des informations saisies dans les 3 champs

    int idp=ui->idp->text().toInt(); //convertir une chaine de caractére en un entier
    float prix=ui->prix->text().toFloat();
    QString libelle=ui->libelle->text();
    int qte=ui->qte->text().toInt();
    int fournisseurp=ui->fournisseurp->text().toInt();

    //instancier un objet de la classe Etudiant en utilisant les informations saisies dans l interfaces
    produit Pr(idp,prix,libelle,qte,fournisseurp);
    //insérer l'objet etudiant instancié dans la table etudiant et recuperer la valeur de retour de query.exec();
    bool test=Pr.ajouterproduit();


    if(test)//si requête executée ==>QMessageBox::information
    {



       //refresh affichage
        ui->tableView->setModel(Pr.afficherproduit());
        QMessageBox::information(nullptr,QObject::tr("ok"),
                QObject::tr("Ajout effectué \n Click Cancel to exit."), QMessageBox::Cancel);
    }
    else //si requête non exécutée ==>QMessageBox::critical
     {
        QMessageBox::critical(nullptr,QObject::tr("Not Ok"),
                              QObject::tr("Ajout non effectué. \n ""Click Cancel to exit."),QMessageBox::Cancel);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    int idaa =ui->idp->text().toInt();
            bool test = Pr.supprimer(idaa);
            if(test)
            {

                QMessageBox::information(nullptr,QObject::tr("ok"),
                                         QObject::tr("suppression effectué \n ""Click Cancel to exit."),QMessageBox::Cancel);
                //refresh affichage
                ui->tableView->setModel(Pr.afficherproduit());

            }
            else
                QMessageBox::critical(nullptr,QObject::tr("not ok"),

     QObject::tr("suppression non effectué.\n""Click Cancel to exit."),QMessageBox::Cancel);
}
void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
          QSqlQuery qry;
          qry.prepare("select * from produit where"
                      " id_produit='"+val+"' or Prix='"+val+"' or Libelle='"+val+"' or Quantite='"+val+"' or Fournisseurp='"+val+"' ");
          if(qry.exec())
            {while (qry.next())
           { ui->idp->setText(qry.value(0).toString());
             ui->prix->setText(qry.value(1).toString());
             ui->libelle->setText(qry.value(2).toString());
             ui->qte->setText(qry.value(3).toString());
             ui->fournisseurp->setText(qry.value(4).toString());


            }
        }
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    idp=ui->tableView->model()->data(index).toInt();
    QSqlQuery qry;
}



