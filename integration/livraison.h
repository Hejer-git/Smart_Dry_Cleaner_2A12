#ifndef LIVRAISON_H
#define LIVRAISON_H
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
class livrasion
{
    QString ADRESSE ,ETAT_L;
    int ID_LIVRAISON,PRIX_LIV;


public:
    livrasion();
    livrasion(int , QString , QString , int) ;

    //getters
    int getID_LIVRAISON();
    QString getETAT_L();
    QString getADRESSE();
    int getPRIX_LIV();



    //Setters
    void setID_LIVRAISON(int);
    void setETAT_L(QString);
    void setADRESSE(QString);
    void setPRIX_LIV(int);

    bool modifierlivraison(int,QString,QString,int);
    bool ajouterlivraison();
   QSqlQueryModel * afficherlivraison();
    QSqlQueryModel * tri_qiantitedecroissant();
    QSqlQueryModel * tri_quantitecroissant();
      bool rech(int );
      QSqlQueryModel * rechercher(QString );
      QSqlQueryModel * exporterpdf();
 QString  apercu_pdf();
         int print_fn(int argcc, char **argvv);

    bool supprimer(int);
};

#endif // LIVRAISON_H
