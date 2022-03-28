#ifndef MACHINE_H
#define MACHINE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QTableView>
#include "historique.h"
class machine
{
private:
    QString  libelle_M,fournisseur_M;
    int id_machine, prix_M,etat_M,qte_M,id_emp;
public:

    //constructeur
    machine();
    machine(int, QString,QString,int,int,int,int);

    //getters
    int getid_machine(){return id_machine;}
    QString getilibelle_M(){return libelle_M;}
    QString getifournisseur_M(){return fournisseur_M;}
    int getetat_M(){return etat_M;}
    int getqte_M(){return qte_M;}
    int getprix_M(){return prix_M;}
    int getid_emp(){return id_emp;}

    //setters
    void setid_machine(int i){this->id_machine=i;}
    void setlibelle_M(QString l){libelle_M=l;}
    void setfounisseur_M(QString f){fournisseur_M=f;}
    void setetat_M(int e){this->etat_M=e;}
    void setqte_M(int q){this->qte_M=q;}
    void setprix_M(int p){this->prix_M=p;}
    void setid_emp(int emp){this->id_emp=emp;}

    //fonctionalité de base
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer (int);
    bool modifiermachine();
    QSqlQueryModel * tri_prixASC();
    QSqlQueryModel * tri_prixDEC();
    QSqlQueryModel * tri_libelle();
    QSqlQueryModel * recherche1(QString);
    QSqlQueryModel * recherche2(QString);
    QSqlQueryModel * recherche3(QString);
    QString  apercu_pdf();

 historique h;







};

#endif // MACHINE_H
