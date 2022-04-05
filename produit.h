#ifndef PRODUIT_H
#define PRODUIT_H

#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
class produit
{
    QString Libelle;
    int Id_produit,Prix,Fournisseurp,Quantite;


public:
    produit();
    produit(int , int , QString , int ,int) ;
    
    //getters
    int getId_produit();
    int getPrix();
    QString getLibelle();
    int getQuantite();
    int getFournisseurp();



    //Setters
    void setId_produit(int i);
    void setPrix(int p);
    void setLibelle(QString l);
    void setQuantite(int q);
    void setfournisseurp(int f);

    bool modifierproduit();
    bool ajouterproduit();
    QSqlQueryModel * afficherproduit();
    bool supprimer(int);
    QSqlQueryModel * rechercherP(QString);
    QSqlQueryModel * rechercherQ(QString);
    QSqlQueryModel * rechercherL(QString);
    QSqlQueryModel * trier_prixASC();
    QSqlQueryModel * trier_prixDEC();
    QSqlQueryModel * trierL();
    QString  apercu_pdf();
};
    
#endif // PRODUIT_H
