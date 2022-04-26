#include "client.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>
#include<QMessageBox>
#include <QDesktopServices>
#include <QPainter>
#include<QUrl>
#include <QPrintDialog>
#include <QPrinter>
#include <QPdfWriter>

Client::Client()
{
    id_c=0;
    nom="";
    prenom="";
    adresse="";
    email="";
    num_tel=0;
    pt_fidelite=0;

}

Client::Client(int id_c,QString nom,QString prenom,QString adresse,QString email,int num_tel, int pt_fidelite)
{
                   this->id_c=id_c;
                   this->nom=nom;
                   this->prenom=prenom;
                   this->adresse=adresse;
                   this->email=email;
                   this->num_tel=num_tel;
                   this->pt_fidelite=pt_fidelite;

}

bool Client::ajouter()
{
    QSqlQuery query;
    QString res = QString::number(id_c);
    QString res1 = QString::number(num_tel);
    QString res2 = QString::number(pt_fidelite);
    //prepare() prend la requete en parametre pour l'execution
        query.prepare("INSERT INTO CLIENT(id_c,nom,prenom,adresse,email,num_tel,pt_fidelite)" "VALUES(:id_c,:nom,:prenom,:adresse,:email,:num_tel,:pt_fidelite)");
        query.bindValue(":id_c",res);
        query.bindValue(":nom",nom);
        query.bindValue(":prenom",prenom);
        query.bindValue(":adresse",adresse);
        query.bindValue(":email",email);
        query.bindValue(":num_tel",res1);
        query.bindValue(":pt_fidelite",res2);
        return query.exec();  //exec() envoie la requete pour l'executer
}

QSqlQueryModel * Client::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery("select * from CLIENT");
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_c"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("adresse"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("email"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("num_tel"));
        model->setHeaderData(6,Qt::Horizontal,QObject::tr("pt_fidelite"));
        return model;
}

bool Client::supprimer(int id_c)
{
    QSqlQuery query;
    QString res = QString::number(id_c);
       query.prepare("Delete from CLIENT where id_c=:id_c");
       query.bindValue(":id_c",id_c);
       return query.exec();
}

bool Client::modifier()
{

    QSqlQuery query;
    query.prepare("UPDATE CLIENT set id_c=:id_c,nom=:nom,prenom=:prenom,adresse=:adresse,email=:email,num_tel=:num_tel,pt_fidelite=:pt_fidelite where id_c=:id_c ");

    query.bindValue(":id_c", id_c);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":email", email);
    query.bindValue(":num_tel", num_tel);
    query.bindValue(":pt_fidelite", pt_fidelite);

   return query.exec();
}

QSqlQueryModel * Client::rechercherN(QString a)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from CLIENT where (NOM like '%"+a+"%' ) ");
        return query;
}

QSqlQueryModel * Client::rechercherP(QString b)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from CLIENT where (PRENOM like '%"+b+"%' ) ");
        return query;
}

QSqlQueryModel * Client::rechercherNT(QString c)
{
    QSqlQueryModel * query=new QSqlQueryModel();
        query->setQuery("select * from CLIENT where (NUM_TEL like '%"+c+"%' ) ");
        return query;
}

QSqlQueryModel * Client::trierN()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from CLIENT order by NOM");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_c"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("adresse"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("num_tel"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("pt_fidelite"));
        return model;
}

QSqlQueryModel * Client::trierId()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from CLIENT order by ID_C");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_c"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("adresse"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("num_tel"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("pt_fidelite"));
        return model;
}

QSqlQueryModel * Client::trierPtf()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from CLIENT order by PT_FIDELITE");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_c"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("adresse"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("num_tel"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("pt_fidelite"));
        return model;
}

QString Client::  apercu_pdf()
{
    /*QPdfWriter pdf("C:/Users/21654/Desktop/SmartDryCleaner/GestionClient/client.pdf");
        QPainter painter(&pdf);
        int i = 4000;
        painter.setPen(Qt::blue);
        painter.setFont(QFont("Arial", 30));
        painter.drawText(2300,1200,"Liste Des Clients");
        painter.setPen(Qt::black);
        painter.setFont(QFont("Arial", 50));
        // painter.drawText(1100,2000,afficheDC);
        painter.drawRect(1500,200,7300,2600);
        //painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/RH/Desktop/projecpp/image/logopdf.png"));
        painter.drawRect(0,3000,9600,500);
        painter.setFont(QFont("Arial", 9));
        painter.drawText(300,3300,"id_c");
        painter.drawText(1633,3300,"nom");
        painter.drawText(2966,3300,"prenom");
        painter.drawText(4299,3300,"adresse");
        painter.drawText(5632,3300,"email");
        painter.drawText(6965,3300,"num_tel");


        QSqlQuery query;
        query.prepare("select * from CLIENT");
        query.exec();
        while (query.next())
        {
            painter.drawText(300,i,query.value(0).toString());
            painter.drawText(1633,i,query.value(1).toString());
            painter.drawText(2966,i,query.value(2).toString());
            painter.drawText(4299,i,query.value(3).toString());
            painter.drawText(5632,i,query.value(4).toString());
            painter.drawText(6965,i,query.value(5).toString());



            i = i +500;
        }
        int reponse = QMessageBox::question(this, "Generer PDF", "<PDF Enregistre>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
        if (reponse == QMessageBox::Yes)
        {
            QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/21654/Desktop/SmartDryCleaner/GestionClient/client.pdf"));

            painter.end();
        }
        if (reponse == QMessageBox::No)
        {
            painter.end();
        }*/

    QString text="            ******* Les CLIENTS ********       \n \n " ;
    QSqlQuery query ;
    QString i,n,p,a,e,t,f;


     query.exec("select * from CLIENT ");
     while (query.next())
     {
        i=query.value(0).toString();
        n=query.value(1).toString();
        p=query.value(2).toString();
        a=query.value(3).toString();
        e=query.value(4).toString();
        t=query.value(5).toString();
        f=query.value(6).toString();

       text += "\n id_c: "+i+"\n\n - nom: "+n+"\n - prenom: "+p+"\n - adresse:"+a+"\n - email:"+e+"\n - numero de tel:"+t+"\n - point de fidelite:"+f+"\n______________\n";

    }

            return text ;
}
