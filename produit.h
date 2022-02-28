#ifndef PRODUIT_H
#define PRODUIT_H

#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
class produit
{
    QString Libelle;
    int Id_produit,Fournisseurp,Quantite;
    float Prix;

public:
    produit();
    produit(int , float , QString , int ,int) ;
    
    //getters
    int getId_produit();
    float getPrix();
    QString getLibelle();
    int getQuantite();
    int getFournisseurp();



    //Setters
    void setId_produit(int);
    void setPrix(float);
    void setLibelle(QString);
    void setQuantite(int);
    void setfournisseurp(int);


    bool ajouterproduit();
    QSqlQueryModel * afficherproduit();
    bool supprimer(int);
};
    
#endif // PRODUIT_H
