#include "dialog1.h"
#include "ui_dialog1.h"
#include <QMessageBox>
#include "machine.h"
#include <QIntValidator>
#include <QPrinter>
#include <QPrintDialog>
#include"historique.h"
#include <QTextDocument>
#include <QSqlError>
#include<QSystemTrayIcon>
#include <QRegExp>
#include <QDesktopServices>
#include <QUrl>


Dialog1::Dialog1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    int ret=A.connect_arduino(); // lancer la connexion à arduino
    switch(ret){
    case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
        break;
    case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
       break;
    case(-1):qDebug() << "arduino is not available";
    }
     QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));

    playermusic = new QMediaPlayer;
    playermusic1 = new QMediaPlayer;
    player = new QMediaPlayer;

   // ui->setupUi(this);
    //ui->tableView_17->setModel(m.afficher());
}

Dialog1::~Dialog1()
{
    delete ui;
}
void Dialog1::on_pushButton_VAL_AJ_18_clicked()
{
    int id_machine = ui->lineEdit_a_3->text().toInt();
    QString libelle_M = ui->lineEdit_b_3->text();
    QString fourisseur_M = ui->lineEdit_c_3->text();
    int etat_M = ui->lineEdit_d_3->text().toInt();
    int prix_M = ui->lineEdit_e_3->text().toInt();
    int qte_M = ui->lineEdit_f_3->text().toInt();
    int id_emp = ui->lineEdit_g_3->text().toInt();
      int idR;
    QString textajouter;//historique
    historique h;

    machine M(id_machine,libelle_M,fourisseur_M,etat_M,qte_M,prix_M,id_emp);
    bool test=M.ajouter();
    if(test)
    {

        //actualisation
        ui->tableView_17->setModel(m.afficher());
         m.Signal();

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


void Dialog1::on_pushButton_184_clicked()
{
    int id_machine=ui->lineEdit_k_3->text().toInt();
    bool test=m.supprimer(id_machine);
    if(test)
         {
             //actualisation
             ui->tableView_17->setModel(m.afficher());


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
void Dialog1::on_pushButton_185_clicked()
{
    int id_machine = ui->lineEdit_a_3->text().toInt(); //not sure
    QString libelle_M = ui->lineEdit_b_3->text();
    QString fourisseur_M = ui->lineEdit_c_3->text();
    int etat_M = ui->lineEdit_d_3->text().toInt();
    int prix_M = ui->lineEdit_e_3->text().toInt();
    int qte_M = ui->lineEdit_f_3->text().toInt();
    int id_emp = ui->lineEdit_g_3->text().toInt();
    machine M(id_machine,libelle_M,fourisseur_M,etat_M,qte_M,prix_M,id_emp);
    bool test=M.modifiermachine();
    if(test)
    {
        //actualisation
        ui->tableView_17->setModel(m.afficher());
         m.Signal();

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



void Dialog1::on_tableView_17_clicked(const QModelIndex &index)
{
    QString val=ui->tableView_17->model()->data(index).toString();
          QSqlQuery qry;
          qry.prepare("select * from MACHINE where"
                      " id_machine='"+val+"' or libelle_M='"+val+"' or fournisseur_M='"+val+"' or etat_M='"+val+"' or prix_M='"+val+"' or qte_M='"+val+"' or id_emp='"+val+"' ");
          if(qry.exec())
       {while (qry.next())
           { ui->lineEdit_a_3->setText(qry.value(0).toString());
             ui->lineEdit_b_3 ->setText(qry.value(1).toString());
             ui->lineEdit_c_3->setText(qry.value(2).toString());
             ui->lineEdit_d_3->setText(qry.value(3).toString());
             ui->lineEdit_e_3->setText(qry.value(4).toString());
             ui->lineEdit_f_3->setText(qry.value(5).toString());
             ui->lineEdit_g_3->setText(qry.value(6).toString());
            }
        }
}

void Dialog1::on_tableView_17_activated(const QModelIndex &index)
{
    id_machine=ui->tableView_17->model()->data(index).toInt();
    QSqlQuery qry;

}

void Dialog1::on_pushButton_182_clicked()
{

ui->tableView_17->setModel(m.tri_prixASC());


}

void Dialog1::on_pushButton_181_clicked()
{
    ui->tableView_17->setModel(m.tri_prixDEC());
}

void Dialog1::on_pushButton_183_clicked()
{
    ui->tableView_17->setModel(m.tri_libelle());
}



void Dialog1::on_pushButton_178_clicked()
{

    QString prix_M = ui->lineEdit_h_3->text();
    ui->tableView_17->setModel(m.recherche1(prix_M));
}

void Dialog1::on_pushButton_177_clicked()
{

    QString libelle_M = ui->lineEdit_i_3->text();
    ui->tableView_17->setModel(m.recherche2(libelle_M));
}

void Dialog1::on_pushButton_179_clicked()
{

    QString etat_M = ui->lineEdit_j_3->text();
    ui->tableView_17->setModel(m.recherche3(etat_M));
}

void Dialog1::on_pushButton_176_clicked()
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

void Dialog1::update_label()
{
    data=A.read_from_arduino();

    if(data=="1111")

     {   ui->label_29->setText("il y a du mouvement"); }



    else if (data=="0000")

       { ui->label_29->setText("pas de mouvement");  }
// si les données reçues de arduino via la liaison série sont égales à 0
     //alors afficher ON
}
void Dialog1::on_pushButton_180_clicked()
{
    historique h;
    ui->textBrowser->show();
    ui->textBrowser->setPlainText(h.read());
}


void Dialog1::on_pushButton_acces_clicked()
{
      A.write_to_arduino("1"); //envoyer 1 à arduino
}

void Dialog1::on_pushButton_refuser_clicked()
{
    A.write_to_arduino("0");  //envoyer 0 à arduino

}
