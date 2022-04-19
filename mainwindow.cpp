#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QTextDocument>
#include <QPrinter>
#include <QPrintDialog>
#include <QtCharts>
#include "dialog.h"
#include <QFileDialog>
#include <QDialog>



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
    ui->tableView->setModel(Pr.afficherproduit());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_VAL_AJ_2_clicked()
{
    //Récuprération des informations saisies dans les 3 champs

    int idp=ui->idp->text().toInt(); //convertir une chaine de caractére en un entier
    int prix=ui->prix->text().toInt();
    QString libelle=ui->libelle->text();
    int qte=ui->qte->text().toInt();
    int fournisseurp=ui->fournisseurp->text().toInt();

    //instancier un objet de la classe Etudiant en utilisant les informations saisies dans l interfaces
    produit Pr(idp,prix,libelle,qte,fournisseurp);
    //insérer l'objet etudiant instancié dans la table etudiant et recuperer la valeur de retour de query.exec();
    bool test=Pr.ajouterproduit();


    if(test)//si requête executée ==>QMessageBox::information
    {



       //refresh affichage
        ui->tableView->setModel(Pr.afficherproduit());
        QMessageBox::information(nullptr,QObject::tr("ok"),
                QObject::tr("Ajout effectué \n Click Cancel to exit."), QMessageBox::Cancel);
    }
    else //si requête non exécutée ==>QMessageBox::critical
     {
        QMessageBox::critical(nullptr,QObject::tr("Not Ok"),
                              QObject::tr("Ajout non effectué. \n ""Click Cancel to exit."),QMessageBox::Cancel);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    int idaa =ui->idp->text().toInt();
            bool test = Pr.supprimer(idaa);
            if(test)
            {

                QMessageBox::information(nullptr,QObject::tr("ok"),
                                         QObject::tr("suppression effectué \n ""Click Cancel to exit."),QMessageBox::Cancel);
                //refresh affichage
                ui->tableView->setModel(Pr.afficherproduit());

            }
            else
                QMessageBox::critical(nullptr,QObject::tr("not ok"),

     QObject::tr("suppression non effectué.\n""Click Cancel to exit."),QMessageBox::Cancel);
}

//button modifier
void MainWindow::on_pushButton_6_clicked()
{

    int prix=ui->prix->text().toInt();
    QString libelle=ui->libelle->text();
    int qte=ui->qte->text().toInt();
    int fournisseurp=ui->fournisseurp->text().toInt();

    produit Pr(idp , prix , libelle , qte , fournisseurp) ;
    bool test = Pr.modifierproduit() ;
    if(test)//si requête executée ==>QMessageBox::information
    {



       //refresh affichage
        ui->tableView->setModel(Pr.afficherproduit());
        QMessageBox::information(nullptr,QObject::tr("ok"),
                QObject::tr("modification effectué \n Click Cancel to exit."), QMessageBox::Cancel);
    }
    else //si requête non exécutée ==>QMessageBox::critical
     {
        QMessageBox::critical(nullptr,QObject::tr("Not Ok"),
                              QObject::tr("modification non effectué. \n ""Click Cancel to exit."),QMessageBox::Cancel);
    }

}
//elli louta l kol tzbaa e select zidouh maa l modifier
void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
          QSqlQuery qry;
          qry.prepare("select * from produit where"
                      " id_produit='"+val+"' or Prix='"+val+"' or Libelle='"+val+"' or Quantite='"+val+"' or Fournisseurp='"+val+"' ");
          if(qry.exec())
            {while (qry.next())
           { ui->idp->setText(qry.value(0).toString());
             ui->prix->setText(qry.value(1).toString());
             ui->libelle->setText(qry.value(2).toString());
             ui->qte->setText(qry.value(3).toString());
             ui->fournisseurp->setText(qry.value(4).toString());


            }
        }
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    idp=ui->tableView->model()->data(index).toInt();
    QSqlQuery qry;
}

void MainWindow::on_pushButton_25_clicked()
{
    ui->tableView->setModel(Pr.trier_prixASC());

}

void MainWindow::on_pushButton_24_clicked()
{
    ui->tableView->setModel(Pr.trier_prixDEC());

}

void MainWindow::on_pushButton_26_clicked()
{
    ui->tableView->setModel(Pr.trierL());

}

void MainWindow::on_lineEdit_9_textChanged(const QString &arg1)
{
    ui->tableView->setModel(Pr.rechercherP(arg1));
}

void MainWindow::on_lineEdit_10_textChanged(const QString &arg1)
{
    ui->tableView->setModel(Pr.rechercherQ(arg1));
}

void MainWindow::on_lineEdit_11_textChanged(const QString &arg1)
{
    ui->tableView->setModel(Pr.rechercherL(arg1));
}

void MainWindow::on_pushButton_7_clicked()
{
    produit Pr;

             QString text=Pr.apercu_pdf();
             ui->textEdit->setText(text);

                               QPrinter printer ;
                               printer.setPrinterName("imprimer");
                               QPrintDialog dialog (&printer,this);
                               if(dialog.exec()==QDialog::Rejected) return ;
                               ui->textEdit->print(&printer);
}





/*void MainWindow::on_tabWidget_2_tabBarClicked(int index)
{
    qDeleteAll(ui->tabWidget->widget(0)->children());
    QWidget* piestats = new QWidget(this);
    piestats = piechart();
    QGridLayout* layout = new QGridLayout(this);
    layout->addWidget(piestats, 0, 0); // Top-Left
    layout->addWidget(NULL, 0, 1); // Top-Right
    layout->addWidget(NULL, 1, 0); // Bottom-Left
    layout->addWidget(NULL, 1, 1); // Bottom-Right
    ui->tab_2->setLayout(layout);
}*/
void MainWindow::on_tableWidget_cellClicked(int , int)
{
    qDeleteAll(ui->tabWidget->widget(0)->children());
    QWidget* piestats = new QWidget(this);
    piestats = piechart();
    QGridLayout* layout = new QGridLayout(this);
    layout->addWidget(piestats, 0, 0); // Top-Left
    layout->addWidget(NULL, 0, 1); // Top-Right
    layout->addWidget(NULL, 1, 0); // Bottom-Left
    layout->addWidget(NULL, 1, 1); // Bottom-Right
    ui->s->setLayout(layout);

}


void MainWindow::on_tabWidget_tabBarClicked(int)
{
    qDeleteAll(ui->tabWidget->widget(1)->children());
    QWidget* piestats = new QWidget(this);
    piestats = piechart();
    QGridLayout* layout1 = new QGridLayout(this);
    layout1->addWidget(piestats, 0, 0); // Top-Left
    layout1->addWidget(NULL, 0, 1); // Top-Right
    layout1->addWidget(NULL, 1, 0); // Bottom-Left
    layout1->addWidget(NULL, 1, 1); // Bottom-Right
    ui->s->setLayout(layout1);
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

    return "id:"+QString::number(id) + " Name:" +name;
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
                    playermusic1->setMedia(QUrl::fromLocalFile("C:/Users/seifa.AFI/OneDrive/Bureau/qt/ringing.mp3"));
                        playermusic1->play();
                           qDebug() << playermusic1->errorString();
                    ui->label_4->setText("WARNING!! \n indifined card!!");
    };
    /*if(data== access)
       {


        }
    else
    {
        playermusic1->setMedia(QUrl::fromLocalFile("C:/Users/seifa.AFI/OneDrive/Bureau/qt/ringing.mp3"));
            playermusic1->play();
               qDebug() << playermusic1->errorString();
        ui->label_4->setText("WARNING!! \n indifined cart!!");

    }*/
}


void MainWindow::on_pushButton_open_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/seifa.AFI/OneDrive/Bureau/qt/son.Wav"));
        player->play();
           qDebug() << player->errorString();
}

void MainWindow::on_pushButton_close_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/seifa.AFI/OneDrive/Bureau/qt/son.Wav"));
        player->play();
           qDebug() << player->errorString();
        close();
}

void MainWindow::on_pushButton_start_clicked()
{
    playermusic->setMedia(QUrl::fromLocalFile("C:/Users/seifa.AFI/OneDrive/Bureau/qt/Breaking News.Mp3"));
        playermusic->play();
           qDebug() << playermusic->errorString();
}

void MainWindow::on_pushButton_pause_clicked()
{
    playermusic->pause();
}

void MainWindow::on_pushButton_10_clicked()
{
    playermusic->setMedia(QUrl::fromLocalFile("C:/Users/seifa.AFI/OneDrive/Bureau/qt/alert.mp3"));
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
