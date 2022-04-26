#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "produit.h"
#include "machine.h"
#include "employe.h"
#include <QTextDocument>
#include <QtCharts>
#include "dialog.h"
#include "dialog1.h"
#include "dialog2.h"
#include "dialog3.h"
#include "dialog4.h"
#include "dialog5.h"
#include <QObject>
#include <QtWidgets/QDialog>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_6_clicked();

    void on_pushButton_on_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    QMediaPlayer*	playermusic;
    QMediaPlayer*	player;
    Ui::MainWindow *ui;

    dialog *mDialog;
    Dialog1 *xDialog;
    dialog2 *cDialog;
    Dialog3 *aDialog;
     Dialog4 *bDialog;
      Dialog5 *zDialog;
    QWidget *w;

};
#endif // MAINWINDOW_H
