#include "smartinterface.h"
#include "ui_smartinterface.h"

SmartInterface::SmartInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SmartInterface)
{
    ui->setupUi(this);
    ui->setupUi(this);
    int ret=A.connect_arduino(); // lancer la connexion à arduino
      switch(ret){
      case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
          break;
      case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
         break;
      case(-1):qDebug() << "arduino is not available";
      }
       QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
}


void SmartInterface::update_label()
{
    data=A.read_from_arduino();

    if(data=="1111")

     {   ui->label_29->setText("il y a du mouvement"); }



    else if (data=="0000")

       { ui->label_29->setText("pas de mouvement");  }
// si les données reçues de arduino via la liaison série sont égales à 0
     //alors afficher ON
}

void SmartInterface::on_pushButtonArduino1_clicked()   // implémentation du slot bouton on
{
     A.write_to_arduino("1"); //envoyer 1 à arduino
}

void SmartInterface::on_pushButtonArduino2_clicked()  // implémentation du slot bouton off
{

     A.write_to_arduino("0");  //envoyer 0 à arduino
}


SmartInterface::~SmartInterface()
{
    delete ui;
}
