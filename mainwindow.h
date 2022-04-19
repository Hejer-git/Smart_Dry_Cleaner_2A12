#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "produit.h"
#include <QTextDocument>
#include <QtCharts>
#include "dialog.h"
#include <QObject>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    bool checkUIDInBase(int);
    QString getIdAndNameEmp(int uid);


public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_VAL_AJ_2_clicked();


    void on_tableView_activated(const QModelIndex &index);

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_4_clicked();


    void on_pushButton_6_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_26_clicked();

    void on_lineEdit_9_textChanged(const QString &arg1);

    void on_lineEdit_10_textChanged(const QString &arg1);

    void on_lineEdit_11_textChanged(const QString &arg1);

    void on_pushButton_7_clicked();




    void on_tabWidget_tabBarClicked(int index);
    int G_PVS1();
    int G_PVS2();
    int G_PVS3();
    int G_PVS4();
    int G_PVS5();
    int G_PVS6();

    QChartView* piechart();
    void on_tabWidget_2_tabBarClicked(int index);

    void on_tableWidget_cellClicked(int, int );

    void on_pushButton_clicked();

    void on_pushButton_open_clicked();

    void on_pushButton_close_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_pause_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

void update_label();
private:
    Ui::MainWindow *ui;
    produit Pr ;
    int idp= 0;
    dialog *mDialog;
    QMediaPlayer*	playermusic;
    QMediaPlayer*	playermusic1;
    QMediaPlayer*	player;

    QByteArray data; // variable contenant les données reçues

    Arduino A;

};
#endif // MAINWINDOW_H
