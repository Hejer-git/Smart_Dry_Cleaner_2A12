#include "EMP.h"
#include "ui_EMP.h"
#include "employe.h"
#include <QMessageBox>
#include <QIntValidator>

EMP::EMP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EMP)
{
    ui->setupUi(this);
    ui->tableViewaff->setModel(Emp.afficher());
}

EMP::~EMP()
{
    delete ui;
}

void EMP::on_pushButton_VAL_AJ_clicked()
{
    //recuperation des informations saisies
    int Id_Emp = ui->lineEditid->text().toInt();
    QString Nom_Emp= ui->lineEditnom->text();
    QString Prenom_Emp= ui->lineEditprenom->text();
    QString Fonction= ui->lineEditfonction->text();
    int Num_TelE = ui->lineEdittel->text().toInt();
    int Salaire= ui->lineEditsalaire->text().toInt();
    int Nbr_heures = ui->lineEditnbh->text().toInt();

    Employe E(Id_Emp,Nom_Emp,Prenom_Emp,Fonction,Num_TelE,Salaire,Nbr_heures);
    bool test=E.ajouter();

    if(test)
    {
        //actualisation

        ui->tableViewaff->setModel(Emp.afficher());

        QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Ajout effectué\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Ajout non effectué\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);


}



void EMP::on_pushButtonsupp_clicked()
{
    int Id_Emp=ui->lineEditid->text().toInt();
    bool test=Emp.supprimer(Id_Emp);
    if(test)
    {
        //actualisation

        ui->tableViewaff->setModel(Emp.afficher());

        QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Suppression effectuée\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Suppression non effectuée\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);

}


void EMP::on_tableViewaff_activated(const QModelIndex &index)
{
    QString val=ui->tableViewaff->model()->data(index).toString();
          QSqlQuery qry;
          qry.prepare("select * from EMPLOYE where"
                      " Id_Emp='"+val+"' or Nom_Emp='"+val+"' or Prenom_Emp='"+val+"' or Fonction='"+val+"' or Num_TelE='"+val+"'or Salaire='"+val+"'or Nbr_heures='"+val+"' ");
          if(qry.exec())
          {while (qry.next())
           { ui->lineEditid->setText(qry.value(0).toString());
             ui->lineEditnom->setText(qry.value(1).toString());
             ui->lineEditprenom->setText(qry.value(2).toString());
             ui->lineEditfonction->setText(qry.value(3).toString());
             ui->lineEdittel->setText(qry.value(4).toString());
             ui->lineEditsalaire->setText(qry.value(5).toString());
             ui->lineEditnbh->setText(qry.value(6).toString());

           }

          }
}

void EMP::on_tableViewaff_clicked(const QModelIndex &index)
{
    Id_Emp=ui->tableViewaff->model()->data(index).toInt();
    QSqlQuery qry;
}

void EMP::on_pushButtonmodif_clicked()
{

    int Id_Emp=ui->lineEditid->text().toInt() ;
    QString Nom_Emp= ui->lineEditnom->text();
    QString Prenom_Emp = ui->lineEditprenom->text();
    QString Fonction = ui->lineEditfonction->text();
    int Num_TelE = ui->lineEdittel->text().toInt();
    int Salaire= ui->lineEditsalaire->text().toInt();
    int Nbr_heures= ui->lineEditnbh->text().toInt();

    Employe E( Id_Emp,Nom_Emp,Prenom_Emp,Fonction,Num_TelE,Salaire,Nbr_heures);

    bool test=E.modifier();
    if(test)
    {
       //refresh affichage
        ui->tableViewaff->setModel(Emp.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),
                QObject::tr("modification effectuée\n Click Cancel to exit."), QMessageBox::Cancel);
    }
    else //si requête non exécutée ==>QMessageBox::critical
     {
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                              QObject::tr("modification non effectuée\n ""Click Cancel to exit."),QMessageBox::Cancel);
    }
}
