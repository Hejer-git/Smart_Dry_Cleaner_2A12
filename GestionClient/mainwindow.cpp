#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "client.h"
#include <QIntValidator>
#include <QPrinter>
#include <QPrintDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(Cl.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ajouter_clicked()
{
    //recuperation des informations saisies
    int id_c = ui->lineEdit_id->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QString adresse = ui->lineEdit_adresse->text();
    QString email = ui->lineEdit_email->text();
    int num_tel = ui->lineEdit_numt->text().toInt();
    int pt_fidelite = ui->lineEdit_ptf->text().toInt();

    Client C(id_c,nom,prenom,adresse,email,num_tel,pt_fidelite);
    if(id_c!=0 && nom.size()>0 && prenom.size()>0 && adresse.size()>0 && email.size()>0 && num_tel!=0)
       {
                  if(email.contains("@gmail.com")||email.contains("@yahoo.fr")||email.contains("@hotmail.com")||email.contains("@hotmail.fr"))
          {
    bool test=C.ajouter();

                        if(test)
                                  {
                            QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Ajout effectué\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
                            //actualisation
                            ui->tableView->setModel(Cl.afficher());
                            ui->lineEdit_id->setText("");
                            ui->lineEdit_nom->setText("") ;
                            ui->lineEdit_prenom->setText("") ;
                            ui->lineEdit_adresse->setText("");
                            ui->lineEdit_email->setText("") ;
                            ui->lineEdit_numt->setText("") ;
                            ui->lineEdit_ptf->setText("");

                                   }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Ajout non effectué : Identifiant existant\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
          }

    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Ajout non effectué : Email invalide\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Ajout non effectué : Champ vide\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_supprimer_clicked()
{
    int id_c=ui->lineEdit_ids->text().toInt();
    bool test=Cl.supprimer(id_c);
    if(test)
    {
        //actualisation
        ui->tableView->setModel(Cl.afficher());

        QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Suppression effectuée\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Suppression non effectuée\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_modifier_clicked()
{
    int id_c=ui->lineEdit_id->text().toInt() ;
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QString adresse = ui->lineEdit_adresse->text();
    QString email = ui->lineEdit_email->text();
    int num_tel = ui->lineEdit_numt->text().toInt();
    int pt_fidelite = ui->lineEdit_ptf->text().toInt();

    Client C(id_c,nom,prenom,adresse,email,num_tel,pt_fidelite);

    bool test=C.modifier();
    if(test)
    {
       //refresh affichage
        ui->tableView->setModel(Cl.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),
                QObject::tr("modification effectuée\n Click Cancel to exit."), QMessageBox::Cancel);
    }
    else //si requête non exécutée ==>QMessageBox::critical
     {
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                              QObject::tr("modification non effectuée\n ""Click Cancel to exit."),QMessageBox::Cancel);
    }

}

void MainWindow::on_tableView_activated(const QModelIndex &index)
{

    QString val=ui->tableView->model()->data(index).toString();
          QSqlQuery qry;
          qry.prepare("select * from CLIENT where"
                      " id_c='"+val+"' or nom='"+val+"' or prenom='"+val+"' or adresse='"+val+"' or email='"+val+"'or num_tel='"+val+"'or pt_fidelite='"+val+"' ");
          if(qry.exec())
          {while (qry.next())
           { ui->lineEdit_id->setText(qry.value(0).toString());
             ui->lineEdit_nom->setText(qry.value(1).toString());
             ui->lineEdit_prenom->setText(qry.value(2).toString());
             ui->lineEdit_adresse->setText(qry.value(3).toString());
             ui->lineEdit_email->setText(qry.value(4).toString());
             ui->lineEdit_numt->setText(qry.value(5).toString());
             ui->lineEdit_ptf->setText(qry.value(6).toString());

           }
          }
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    id_c=ui->tableView->model()->data(index).toInt();
    QSqlQuery qry;
}

void MainWindow::on_ButtonRechN_clicked()
{
    QString nom = ui->lineEdit_Rnom->text();
    ui->tableView->setModel(Cl.rechercherN(nom));
}

void MainWindow::on_Button_rechP_clicked()
{
    QString prenom = ui->lineEdit_Rprenom->text();
    ui->tableView->setModel(Cl.rechercherP(prenom));
}

void MainWindow::on_Button_rechNum_clicked()
{
    QString num_tel = ui->lineEdit_Rnum->text();
    ui->tableView->setModel(Cl.rechercherNT(num_tel));
}

void MainWindow::on_Button_triN_clicked()
{
     ui->tableView->setModel(Cl.trierN());
}

void MainWindow::on_Button_triId_clicked()
{
     ui->tableView->setModel(Cl.trierId());
}

void MainWindow::on_Button_triPt_clicked()
{
     ui->tableView->setModel(Cl.trierPtf());
}

void MainWindow::on_pushButton_extr_clicked()
{
    Client C;
                  QString text=C.apercu_pdf();
                  ui->textEdit->setText(text);

                  QPrinter printer ;
                  printer.setPrinterName("imprimer");
                  QPrintDialog dialog (&printer,this);
                  if(dialog.exec()==QDialog::Rejected) return ;
                  ui->textEdit->print(&printer);
}
