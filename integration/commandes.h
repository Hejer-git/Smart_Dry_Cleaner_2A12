#ifndef COMMANDES_H
#define COMMANDES_H


#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<QDate>
#include <QFrame>
#include<QFileDialog>
#include <QtCharts/QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include "QString"
#include <QtGui>
#include <QtCore>
class commandes
{
    QString TYPE;
    int CODE_C,PRIX_TOT,ID_C;
    int DATE_C;

public:
    commandes();
    commandes(int , QString , int ,int , int) ;

    //getters
    int getCODE_C();
    QString getTYPE();
    int getDATE_C();
    int getPRIX_TOT();
    int getID_C();



    //Setters
    void setCODE_C(int);
    void setTYPE(QString);
    void setDATE_C(int);
    void setPRIX_TOT(int);
    void setID_C(int);

    bool modifiercommandes();
    bool ajoutercommandes();
    QSqlQueryModel * affichercommandes();
    bool supprimer(int);
    int print_fn(int argcc, char **argvv);
    QSqlQueryModel * tri_quantitecroissant();
    QSqlQueryModel * tri_qiantitedecroissant();
    bool rech(int );
    QSqlQueryModel * rechercher(QString );
};

#endif // COMMANDES_H
