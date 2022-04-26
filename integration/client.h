#ifndef CLIENT_H
#define CLIENT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QDialog>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>

class Client
{

    private:
    QString nom, prenom, adresse, email;
    int id_c, num_tel, pt_fidelite;
    public:
    //Constructeurs
    Client();
    Client(int,QString,QString,QString,QString,int,int);
    //Getters
    int getIdc(){return id_c;}
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getAdresse(){return adresse;}
    QString getEmail(){return email;}
    int getNumTel(){return num_tel;}
    int getPtFidelite(){return pt_fidelite;}
    //Setters
    void setIdc(int id_c){this->id_c=id_c;}
    void setNom(QString n){nom=n;}
    void setPrenom(QString p){prenom=p;}
    void setAdresse(QString adr){adresse=adr;}
    void setEmail(QString e){email=e;}
    void setNumTel(int numt){this->num_tel=numt;}
    void setPtFidelite(int ptf){this->pt_fidelite=ptf;}

    //Fonctionnalités de base
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier();
    QSqlQueryModel * rechercherN(QString);
    QSqlQueryModel * rechercherP(QString);
    QSqlQueryModel * rechercherNT(QString);
    QSqlQueryModel * trierN();
    QSqlQueryModel * trierId();
    QSqlQueryModel * trierPtf();
    QString  apercu_pdf();

};

#endif // CLIENT_H
