#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QTextDocument>
#include <QFileDialog>
#include <QDialog>
#include<QtDebug>
#include<QMediaPlayer>
#include <QMainWindow>
#include<qmainwindow.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int ret=A.connect_arduino(); // lancer la connexion à arduino
    switch(ret){
    case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
        break;
    case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
       break;
    case(-1):qDebug() << "arduino is not available";
}

 QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));

playermusic = new QMediaPlayer;
playermusic1 = new QMediaPlayer;
player = new QMediaPlayer;
QPixmap pix("../img2.png");
ui->label->setPixmap(pix);
// ui->setupUi(this);
//ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::checkUIDInBase(int id) {
  QSqlDatabase::database().transaction();
  QString query = "select * from employe where id_emp = :id";
  QSqlQuery q;
  q.prepare(query);
  q.bindValue(":id", id);
  q.exec();
  QSqlDatabase::database().commit();
  return q.first();
}

QString MainWindow::getIdAndNameEmp(int id) {
    QSqlDatabase::database().transaction();
    QString query = "select nom_emp from employe where id_emp = :id";
    QSqlQuery q;
    q.prepare(query);
    q.bindValue(":id", id);
    q.exec();
    QSqlDatabase::database().commit();
    q.next();
    QString name = q.value(0).toString();

    return QString::number(id) + " " +name;
}


void MainWindow::update_label()
{
    data=A.read_from_arduino();
    qDebug() << "Data: " << data.toInt();


    bool exist = checkUIDInBase(data.toInt());
    if(exist) {

        QString user = getIdAndNameEmp(data.toInt());
        A.write_to_arduino(user.toUtf8());
        playermusic1->stop();
         ui->label_4->setText("access") ;
    } else {



        A.write_to_arduino("d");
                    playermusic1->setMedia(QUrl::fromLocalFile("C:/Users/21629/Documents/Drycleaner/ringing.mp3"));
                        playermusic1->play();
                           qDebug() << playermusic1->errorString();
                    ui->label_4->setText("WARNING!! \n indifined cart!!");
    };

}
void MainWindow::on_pushButton_10_clicked()
{
    playermusic->setMedia(QUrl::fromLocalFile("C:/Users/21629/Documents/Drycleaner/alert.mp3"));
        playermusic->play();
           qDebug() << playermusic->errorString();
     A.write_to_arduino("0"); //envoyer 1 à arduino
}

void MainWindow::on_pushButton_11_clicked()
{
playermusic->stop();
A.write_to_arduino("1");
  ui->label_4->setText("loading");
}
