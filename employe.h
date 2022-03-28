#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>

class Employe
{
private:
    QString Nom_Emp, Prenom_Emp, Fonction;
    int Id_Emp, Num_TelE ,Salaire, Nbr_heures;
    public:
    //Constructeurs
    Employe(){}
    Employe(int,QString,QString,QString,int,int,int);
    //Getters
    int getIdE(){return Id_Emp;}
    QString getNom(){return Nom_Emp ;}
    QString getPrenom(){return Prenom_Emp;}
    QString getfonction(){return Fonction;}
    int getNumTel(){return Num_TelE ;}
    int getSalaire(){return Salaire ;}
    int getNbr(){return Nbr_heures;}
    //setters
    void setIdE(int Id_Emp){this->Id_Emp=Id_Emp;}
    void setNom(QString Nom_Emp){Nom_Emp=Nom_Emp;}
    void setPrenom(QString Prenom_Emp){Prenom_Emp=Prenom_Emp;}
    void setFonction(QString Fonction){Fonction=Fonction;}
    void setNumTel(int Num_TelE){this->Num_TelE=Num_TelE;}
    void setSalaire(int Salaire){this->Salaire=Salaire;}
    void setNbr(int Nbr_heures){this->Nbr_heures=Nbr_heures;}

    //Fonctionnalités de base
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier();
    QSqlQueryModel *rechercher1(QString);
    QSqlQueryModel *rechercher2(QString);
    QSqlQueryModel *rechercher3(QString);
    QSqlQueryModel * trier1();//par ordre alphabétique
    QSqlQueryModel * trier2();//men asgher lel akber
     QSqlQueryModel * trier3();//men asgher lel akber
};

#endif // EMPLOYE_H
