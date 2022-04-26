#include "dialog3.h"
#include "ui_dialog3.h"
#include "employe.h"
#include "excel.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QFileDialog>
#include <QDebug>
#include <QDate>
#include <QSqlQuery>
#include "qr.h"
#include <QMessageBox>
#include <QSqlError>
#include<QSystemTrayIcon>
#include <QRegExp>
#include <QFileDialog>
#include <QPainter>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>
#include <QPixmap>

using namespace qrcodegen;

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    ui->tableViewaff->setModel(Emp.afficher());
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_VAL_AJ_clicked()
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



void Dialog3::on_pushButtonsupp_clicked()
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


void Dialog3::on_tableViewaff_activated(const QModelIndex &index)
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

void Dialog3::on_tableViewaff_clicked(const QModelIndex &index)
{
    Id_Emp=ui->tableViewaff->model()->data(index).toInt();
    QSqlQuery qry;
}

void Dialog3::on_pushButtonmodif_clicked()
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

void Dialog3::on_pushButtonRnom_clicked()
{
    QString Nom_Emp = ui->lineEditRN->text();
    ui->tableViewaff->setModel(Emp.rechercher1(Nom_Emp));

}

void Dialog3::on_pushButtonRprenom_clicked()
{
    QString Prenom_Emp = ui->lineEditRP->text();
    ui->tableViewaff->setModel(Emp.rechercher2(Prenom_Emp));
}


void Dialog3::on_pushButtonRfonction_clicked()
{
    QString Fonction= ui->lineEditRF->text();
    ui->tableViewaff->setModel(Emp.rechercher3(Fonction));
}

void Dialog3::on_pushButtonTnom_clicked()
{
    ui->tableViewaff->setModel(Emp.trier1());
}

void Dialog3::on_pushButtonTsalaire_clicked()
{
    ui->tableViewaff->setModel(Emp.trier2());
}

void Dialog3::on_pushButtonTnbh_clicked()
{
    ui->tableViewaff->setModel(Emp.trier3());
}

void Dialog3::on_pushButtonextraire_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Exportation en fichier Excel"), qApp->applicationDirPath (),
                                                                tr("Fichiers d'extension Excel (*.xls)"));
                if (fileName.isEmpty())
                    return;

                ExportExcelObject obj(fileName, "mydata", ui->tableViewaff);

                obj.addField(0, "Id_Emp", "int");
                obj.addField(0, "Nom_Emp", "char(20)");
                obj.addField(2, "Prenom_Emp", "char(20)");
                obj.addField(1, "Fonction", "char(20)");
                obj.addField(0, "Num_TelE", "int");
                obj.addField(0, "Salaire", "int");
                obj.addField(0, "Nbr_heures", "int");



                int retVal = obj.export2Excel();

                if( retVal > 0)
                {
                    QMessageBox::information(this, tr("FAIS!"),
                                             QString(tr("%1 enregistrements exportés!")).arg(retVal)
                                             );

                    QFile file("C:/Users/21629/Documents/Drycleaner");
                            if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                                return;
                            QTextStream cout(&file);
                            QString d_info = QDateTime::currentDateTime().toString();
                            QString message2=d_info+" - Une fichier exel a été génerée !\n";
                            cout << message2;

                }
}


void Dialog3::on_pushButtonCprime_clicked()
{

    int  test=Emp.calcul();

    if(test)
    {
        //actualisation

        ui->tableViewaff->setModel(Emp.afficher());

        QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("prime effectué\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("prime non effectué\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);

}

void Dialog3::on_pushButtonqr_clicked()
{

                   int tabeq=ui->tableViewaff->currentIndex().row();
                   QVariant idd=ui->tableViewaff->model()->data(ui->tableViewaff->model()->index(tabeq,0));
                   QString id=idd.toString();
                  // QString code=idd.toSTring();
                   QSqlQuery qry;
                   qry.prepare("select * from EMPLOYE where ID_EMP=:code");
                   qry.bindValue(":code",id);
                   qry.exec();

                    QString Nom_Emp,Prenom_Emp,Fonction;//attributs
                    int Id_Emp,Num_TelE,Salaire,Nbr_heures;
                    QDate datep;

                  while(qry.next()){


                       Nom_Emp=qry.value(4).toString();
                       Prenom_Emp=qry.value(4).toString();
                       Fonction=qry.value(4).toString();
                       Id_Emp=qry.value(1).toInt();
                       Num_TelE=qry.value(1).toInt();
                       Salaire=qry.value(1).toInt();
                       Nbr_heures=qry.value(1).toInt();
                       datep=qry.value(2).toDate();



                   }
                   id=QString(id);
                          id="CODE:\t" +id+ "NOM\t:" +Nom_Emp+ "Nom:\t" +Prenom_Emp+ "Prenom:\t" ;
                   QrCode qr = QrCode::encodeText(id.toUtf8().constData(), QrCode::Ecc::HIGH);

                   // Read the black & white pixels
                   QImage im(qr.getSize(),qr.getSize(), QImage::Format_RGB888);
                   for (int y = 0; y < qr.getSize(); y++) {
                       for (int x = 0; x < qr.getSize(); x++) {
                           int color = qr.getModule(x, y);  // 0 for white, 1 for black
                           // You need to modify this part
                           if(color==0)
                               im.setPixel(x, y,qRgb(254, 254, 254));
                           else
                               im.setPixel(x, y,qRgb(0, 0, 0));
                       }
                   }
                   im=im.scaled(200,200);
                   //ui->qr_code->setPixmap(QPixmap::fromImage(im));
                   ui->label_9->setPixmap(QPixmap::fromImage(im));
    }
