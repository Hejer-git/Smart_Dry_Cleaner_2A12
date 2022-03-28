#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "machine.h"
#include <QIntValidator>
#include <QPrinter>
#include <QPrintDialog>
#include"historique.h"
#include <QTextDocument>
#include"alert.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(m.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_VAL_AJ_clicked()
{
    int id_machine = ui->lineEdit->text().toInt();
    QString libelle_M = ui->lineEdit_2->text();
    QString fourisseur_M = ui->lineEdit_3->text();
    int etat_M = ui->lineEdit_4->text().toInt();
    int prix_M = ui->lineEdit_9->text().toInt();
    int qte_M = ui->lineEdit_5->text().toInt();
    int id_emp = ui->lineEdit_12->text().toInt();
      int idR;
    QString textajouter;//historique
    historique h;

    machine M(id_machine,libelle_M,fourisseur_M,etat_M,qte_M,prix_M,id_emp);
    bool test=M.ajouter();
    if(test)
    {

        //actualisation
        ui->tableView->setModel(m.afficher());

        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Ajout effectue\n" "Click Cancel to exit."),QMessageBox::Cancel);

    }
    else
       { QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Ajout non effectué\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);}


    //ajout historique
         QSqlQuery qry;
         qry.prepare("select * from MACHINE");
         if (qry.exec())
         {
             while (qry.next())
             {
     idR =qry.value(3).toInt();
             }
         }

         textajouter="L'ajout d'une machine dans la base de donnees d'e nom'etat = "+QString::number(idR)+" a ete effectuee avec succees";
         h.write(textajouter);
}


void MainWindow::on_pushButton_2_clicked()
{
    int id_machine=ui->lineEdit_11->text().toInt();
    bool test=m.supprimer(id_machine);
    if(test)
         {
             //actualisation
             ui->tableView->setModel(m.afficher());

             QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Suppression effectuée\n"
                         "Click Cancel to exit."), QMessageBox::Cancel);
         }
         else
          {   QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Suppression non effectuée\n"
                         "Click Cancel to exit."), QMessageBox::Cancel);}
    QString textajouter;
   int idR;
           historique h;
           QSqlQuery qry;
           qry.prepare("select * from MACHINE");
           if (qry.exec())
           {

               while (qry.next())
               {
       idR =qry.value(3).toInt();
               }
           }

           textajouter="La supression d'une machine de la base de donnees d'etat = "+QString::number(idR)+" a ete effectuee avec succees";
           h.write(textajouter);


}
void MainWindow::on_pushButton_3_clicked()
{
    int id_machine = ui->lineEdit->text().toInt(); //not sure
    QString libelle_M = ui->lineEdit_2->text();
    QString fourisseur_M = ui->lineEdit_3->text();
    int etat_M = ui->lineEdit_4->text().toInt();
    int prix_M = ui->lineEdit_9->text().toInt();
    int qte_M = ui->lineEdit_5->text().toInt();
    int id_emp = ui->lineEdit_12->text().toInt();
    machine M(id_machine,libelle_M,fourisseur_M,etat_M,qte_M,prix_M,id_emp);
    bool test=M.modifiermachine();
    if(test)
    {
        //actualisation
        ui->tableView->setModel(m.afficher());

        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("modif effectué\n" "Click Cancel to exit."),QMessageBox::Cancel);

    }
    else
       { QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("modif non effectué\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);}
    QString textajouter;
   int idR;
           historique h;
           QSqlQuery qry;
           qry.prepare("select * from MACHINE");
           if (qry.exec())
           {

               while (qry.next())
               {
       idR =qry.value(3).toInt();
               }
           }

           textajouter="La modification d'une machine de la base de donnees d'etat = "+QString::number(idR)+" a ete effectuee avec succees";
           h.write(textajouter);

}



void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
          QSqlQuery qry;
          qry.prepare("select * from MACHINE where"
                      " id_machine='"+val+"' or libelle_M='"+val+"' or fournisseur_M='"+val+"' or etat_M='"+val+"' or prix_M='"+val+"' or qte_M='"+val+"' or id_emp='"+val+"' ");
          if(qry.exec())
       {while (qry.next())
           { ui->lineEdit->setText(qry.value(0).toString());
             ui->lineEdit_2 ->setText(qry.value(1).toString());
             ui->lineEdit_3->setText(qry.value(2).toString());
             ui->lineEdit_4->setText(qry.value(3).toString());
             ui->lineEdit_5->setText(qry.value(4).toString());
             ui->lineEdit_9->setText(qry.value(5).toString());
             ui->lineEdit_12->setText(qry.value(6).toString());
            }
        }
}

void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    id_machine=ui->tableView->model()->data(index).toInt();
    QSqlQuery qry;

}

void MainWindow::on_pushButton_22_clicked()
{

ui->tableView->setModel(m.tri_prixASC());


}

void MainWindow::on_pushButton_21_clicked()
{
    ui->tableView->setModel(m.tri_prixDEC());
}

void MainWindow::on_pushButton_23_clicked()
{
    ui->tableView->setModel(m.tri_libelle());
}



void MainWindow::on_pushButton_25_clicked()
{

    QString prix_M = ui->lineEdit_6->text();
    ui->tableView->setModel(m.recherche1(prix_M));
}

void MainWindow::on_pushButton_24_clicked()
{

    QString libelle_M = ui->lineEdit_7->text();
    ui->tableView->setModel(m.recherche2(libelle_M));
}

void MainWindow::on_pushButton_26_clicked()
{

    QString etat_M = ui->lineEdit_10->text();
    ui->tableView->setModel(m.recherche3(etat_M));
}

void MainWindow::on_pushButton_5_clicked()
{
    machine m;
              QString text=m.apercu_pdf();
              ui->textEdit->setText(text);

              QPrinter printer ;
              printer.setPrinterName("imprimer");
              QPrintDialog dialog (&printer,this);
              if(dialog.exec()==QDialog::Rejected) return ;
             ui->textEdit->print(&printer);
}

void MainWindow::on_pushButton_12_clicked()
{
    historique h;
    ui->textBrowser->show();
    ui->textBrowser->setPlainText(h.read());
}
