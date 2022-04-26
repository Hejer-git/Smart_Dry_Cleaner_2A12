#include "commandes.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QtGui>
#include <QtCore>
#include <QtPrintSupport/QtPrintSupport>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>


commandes::commandes()
{
    CODE_C=0;TYPE="";DATE_C=0;PRIX_TOT=0;
             ID_C=0;

}

commandes::commandes(int CODE_C, QString TYPE, int DATE_C, int PRIX_TOT,int ID_C)
{
    this->CODE_C=CODE_C;
    this->TYPE=TYPE;
    this->DATE_C=DATE_C;
    this->PRIX_TOT=PRIX_TOT;
    this->ID_C=ID_C;
}
int commandes::getCODE_C(){return CODE_C;}
QString commandes::getTYPE(){return TYPE;}
int commandes::getDATE_C(){return DATE_C;}
int commandes::getPRIX_TOT(){return PRIX_TOT;}
int commandes::getID_C(){return ID_C;}


void commandes::setCODE_C(int CODE_C){this->CODE_C=CODE_C;}
void commandes::setTYPE(QString TYPE){this->TYPE=TYPE;}
void commandes::setDATE_C(int DATE_C){this->DATE_C=DATE_C;}
void commandes::setPRIX_TOT(int PRIX_TOT){this->PRIX_TOT=PRIX_TOT;}
void commandes::setID_C(int ID_C) {this->ID_C=ID_C;}


bool commandes::ajoutercommandes()
{

    QSqlQuery query;
          query.prepare("insert into commandes(CODE_C, TYPE, DATE_C, PRIX_TOT, ID_C) " "values (:CODE_C,:TYPE,:DATE_C,:PRIX_TOT,:ID_C)");
          query.bindValue(":CODE_C",CODE_C);
          query.bindValue(":TYPE",TYPE);
          query.bindValue(":DATE_C",DATE_C);
          query.bindValue(":PRIX_TOT",PRIX_TOT);
          query.bindValue(":ID_C",ID_C);




         return query.exec();



}
 QSqlQueryModel * commandes::affichercommandes()
 {
     QSqlQueryModel * model=new QSqlQueryModel();


          model->setQuery("SELECT * FROM COMMANDES");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODE_C"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_C"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIX_TOT"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_C"));
          return model ;
 }
 bool commandes::supprimer(int CODE_C)
 {
     QSqlQuery query;
           query.prepare("Delete from commandes where CODE_C=:CODE_C");
           query.bindValue(":CODE_C", CODE_C);

           return query.exec();



 }

bool commandes::modifiercommandes()
{    QSqlQuery query ;
    query.prepare("update commandes set CODE_C=:CODE_C, TYPE=:TYPE, DATE_C=:DATE_C, PRIX_TOT=:PRIX_TOT, ID_C=:ID_C WHERE CODE_C=:CODE_C");
     //Création des variables liées
     query.bindValue(":CODE_C",CODE_C);
     query.bindValue(":TYPE",TYPE);
     query.bindValue(":DATE_C",DATE_C);
     query.bindValue(":PRIX_TOT",PRIX_TOT);
     query.bindValue(":ID_C",ID_C);
     return query.exec();
}
void  print(int argc, char **argv) {
    QApplication app(argc, argv);
    QTextEdit parent;
    parent.setText("We are the world!");
    parent.show();

    QString filename = QFileDialog::getOpenFileName(&parent,"Open File",QString(),"Pdf File(*.pdf)");
    qDebug()<<"Print file name is "<<filename;
    if(!filename.isEmpty()) {
        if(QFileInfo(filename).suffix().isEmpty()) {
            filename.append(".pdf");
        }

        QPrinter printer(QPrinter::HighResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(filename);
        QPrintDialog*dlg = new QPrintDialog(&printer,&parent);
        dlg->setWindowTitle(QObject::tr("Print Document"));

        if(dlg->exec() == QDialog::Accepted) {
            parent.print(&printer);
        }
        delete dlg;
    }
}
QSqlQueryModel * commandes::tri_quantitecroissant()
{
    QSqlQueryModel * model=new QSqlQueryModel();

        model->setQuery(("SELECT * FROM commandes ORDER BY PRIX_TOT ASC"));
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("CODE_C"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("TYPE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("DATE_C"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("ID_C"));

        return  model;

}
QSqlQueryModel * commandes::tri_qiantitedecroissant()
{
    QSqlQueryModel *  model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM commandes ORDER BY PRIX_TOT DESC");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CODE_C"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("TYPE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DATE_C"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("ID_C"));

    return model;

}
bool commandes::rech(int x)
{
    QSqlQuery query;
    query.prepare("select * from commandes where CODE_C = :code_c;");
    query.bindValue(":code_c", x);
    return  query.exec();

}

QSqlQueryModel * commandes::rechercher(QString a)
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from COMMANDES where PRIX_TOT='"+a+"' ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CODE_C"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("TYPE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DATE_C"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("ID_C"));
    return model;
}
