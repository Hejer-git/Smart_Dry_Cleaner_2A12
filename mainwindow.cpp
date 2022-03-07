#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "machine.h"
#include <QIntValidator>
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

    machine M(id_machine,libelle_M,fourisseur_M,etat_M,qte_M,prix_M,id_emp);
    bool test=M.ajouter();
    if(test)
    {
        //actualisation
        ui->tableView->setModel(m.afficher());

        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Ajout effectue\n" "Click Cancel to exit."),QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Ajout non effectué\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

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
             QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Suppression non effectuée\n"
                         "Click Cancel to exit."), QMessageBox::Cancel);

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
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("modif non effectué\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

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
