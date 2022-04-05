#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QTextDocument>
#include <QPrinter>
#include <QPrintDialog>
#include <QtCharts>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
void MainWindow::on_tableWidget_cellClicked(int row, int column)
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

