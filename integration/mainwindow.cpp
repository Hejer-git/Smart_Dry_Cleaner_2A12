#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include"employe.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QTextDocument>
#include <QPrinter>
#include <QPrintDialog>
#include <QtCharts>
#include "dialog.h"
#include "dialog1.h"
#include "machine.h"
#include "dialog3.h"
#include <QFileDialog>
#include <QDialog>
#include <QMediaPlayer>
#include <QPropertyAnimation>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   ui->setupUi(this);
        playermusic = new QMediaPlayer;
   // playermusic1 = new QMediaPlayer;
    player = new QMediaPlayer;

    //Annimation
    QPropertyAnimation *animation = new QPropertyAnimation(ui->label_30, "geometry");
       animation->setDuration(4000);
       animation->setStartValue(ui->label_30->geometry());
       animation->setStartValue(QRect(0, 0, 100, 30));
       animation->setEasingCurve(QEasingCurve::OutBounce);
       animation->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_6_clicked()
{

    mDialog = new dialog(this); // allocated space for a new MyDialog
                                         // while also giving a parent class of
                                         // this, the MainWindow class
            mDialog->show();
}

void MainWindow::on_pushButton_on_clicked()
{
    playermusic->setMedia(QUrl::fromLocalFile("C:/Users/seifa.AFI/OneDrive/Bureau/integration v3/integration/integration/Breaking News.Mp3"));
        playermusic->play();
           qDebug() << playermusic->errorString();
}

void MainWindow::on_pushButton_8_clicked()
{
     playermusic->stop();
}

void MainWindow::on_pushButton_3_clicked()
{
    xDialog = new Dialog1(this); // allocated space for a new MyDialog
                                         // while also giving a parent class of
                                         // this, the MainWindow class
            xDialog->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    cDialog = new dialog2(this); // allocated space for a new MyDialog
                                         // while also giving a parent class of
                                         // this, the MainWindow class
            cDialog->show();
}

void MainWindow::on_pushButton_clicked()
{
    aDialog = new Dialog3(this); // allocated space for a new MyDialog
                                         // while also giving a parent class of
                                         // this, the MainWindow class
            aDialog->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    bDialog = new Dialog4(this); // allocated space for a new MyDialog
                                         // while also giving a parent class of
                                         // this, the MainWindow class
            bDialog->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    zDialog = new Dialog5(this); // allocated space for a new MyDialog
                                         // while also giving a parent class of
                                         // this, the MainWindow class
            zDialog->show();
}
