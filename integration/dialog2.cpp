#include "dialog2.h"
#include "ui_dialog2.h"
#include <QMessageBox>
#include "client.h"
#include <QIntValidator>
#include <QPrinter>
#include <QPrintDialog>
#include <QSystemTrayIcon>
#include <QComboBox>
#include <smtp.h>

dialog2::dialog2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialog2)
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

    //ui->setupUi(this);
     //ui->tableView0->setModel(Cl.afficher());

}

dialog2::~dialog2()
{
    delete ui;
}

void dialog2::on_pushButton_Ajouter_clicked()
{
    //recuperation des informations saisies
    int id_c = ui->lineEdit_Id->text().toInt();
    QString nom = ui->lineEdit_Nom->text();
    QString prenom = ui->lineEdit_Prenom->text();
    QString adresse = ui->lineEdit_Adresse->text();
    QString email = ui->lineEdit_Email->text();
    int num_tel = ui->lineEdit_Numt->text().toInt();
    int pt_fidelite = ui->lineEdit_Ptf->text().toInt();

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
                            ui->tableView0->setModel(Cl.afficher());
                            ui->lineEdit_Id->setText("");
                            ui->lineEdit_Nom->setText("") ;
                            ui->lineEdit_Prenom->setText("") ;
                            ui->lineEdit_Adresse->setText("");
                            ui->lineEdit_Email->setText("") ;
                            ui->lineEdit_Numt->setText("") ;
                            ui->lineEdit_Ptf->setText("");

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

void dialog2::on_pushButton_Modifier_clicked()
{
    int id_c=ui->lineEdit_Id->text().toInt() ;
    QString nom = ui->lineEdit_Nom->text();
    QString prenom = ui->lineEdit_Prenom->text();
    QString adresse = ui->lineEdit_Adresse->text();
    QString email = ui->lineEdit_Email->text();
    int num_tel = ui->lineEdit_Numt->text().toInt();
    int pt_fidelite = ui->lineEdit_Ptf->text().toInt();

    Client C(id_c,nom,prenom,adresse,email,num_tel,pt_fidelite);

    bool test=C.modifier();
    if(test)
    {
       //refresh affichage
        ui->tableView0->setModel(Cl.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),
                QObject::tr("modification effectuée\n Click Cancel to exit."), QMessageBox::Cancel);
    }
    else //si requête non exécutée ==>QMessageBox::critical
     {
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                              QObject::tr("modification non effectuée\n ""Click Cancel to exit."),QMessageBox::Cancel);
    }
}

void dialog2::on_pushButton_Supprimer_clicked()
{
    int id_c=ui->lineEdit_Ids->text().toInt();
    bool test=Cl.supprimer(id_c);
    if(test)
    {
        //actualisation
        ui->tableView0->setModel(Cl.afficher());

        QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Suppression effectuée\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Suppression non effectuée\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void dialog2::on_tableView0_activated(const QModelIndex &index)
{
    QString val=ui->tableView0->model()->data(index).toString();
          QSqlQuery qry;
          qry.prepare("select * from CLIENT where"
                      " id_c='"+val+"' or nom='"+val+"' or prenom='"+val+"' or adresse='"+val+"' or email='"+val+"'or num_tel='"+val+"'or pt_fidelite='"+val+"' ");
          if(qry.exec())
          {while (qry.next())
           { ui->lineEdit_Id->setText(qry.value(0).toString());
             ui->lineEdit_Nom->setText(qry.value(1).toString());
             ui->lineEdit_Prenom->setText(qry.value(2).toString());
             ui->lineEdit_Adresse->setText(qry.value(3).toString());
             ui->lineEdit_Email->setText(qry.value(4).toString());
             ui->lineEdit_Numt->setText(qry.value(5).toString());
             ui->lineEdit_Ptf->setText(qry.value(6).toString());

           }
          }
}

void dialog2::on_tableView0_clicked(const QModelIndex &index)
{
    id_c=ui->tableView0->model()->data(index).toInt();
    QSqlQuery qry;
}


void dialog2::on_pushButton_Extr_clicked()
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

void dialog2::on_Button_RechN_clicked()
{
    QString nom = ui->lineEdit_Rnom1->text();
    ui->tableView0->setModel(Cl.rechercherN(nom));
}

void dialog2::on_Button_RechP_clicked()
{
    QString prenom = ui->lineEdit_Rprenom1->text();
    ui->tableView0->setModel(Cl.rechercherP(prenom));
}

void dialog2::on_Button_RechNum_clicked()
{
    QString num_tel = ui->lineEdit_Rnum1->text();
    ui->tableView0->setModel(Cl.rechercherNT(num_tel));
}

void dialog2::on_Button_TriN_clicked()
{
     ui->tableView0->setModel(Cl.trierN());
}

void dialog2::on_Button_TriId_clicked()
{
     ui->tableView0->setModel(Cl.trierId());
}

void dialog2::on_Button_TriPt_clicked()
{
     ui->tableView0->setModel(Cl.trierPtf());
}

void dialog2::on_pushButton_Mail_clicked()
{
    Smtp* smtp = new Smtp("hejerbenyacoub0@gmail.com","hejerbenyacoub","smtp.gmail.com",465);
     connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent()));

    smtp->sendMail("hejerbenyacoub0@gmail.com",ui->rcpt1->text(),ui->subject1->text(),ui->msg1->toPlainText());
}

void dialog2::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt1->clear();
    ui->subject1->clear();

    ui->msg1->clear();
}

void dialog2::update_label()
{
    data=A.read_from_arduino();

    if(data=="1111")

     {   ui->label1->setText("il y a du mouvement"); }



    else if (data=="0000")

       { ui->label1->setText("pas de mouvement");  }
// si les données reçues de arduino via la liaison série sont égales à 0
     //alors afficher ON
}

void dialog2::on_pushButton_acces_clicked()
{
     A.write_to_arduino("1"); //envoyer 1 à arduino
}

void dialog2::on_pushButton_refuser_clicked()
{
     A.write_to_arduino("0");  //envoyer 0 à arduino
}
