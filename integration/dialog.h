#ifndef DIALOG_H
#define DIALOG_H
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QFileDialog>
#include "arduino.h"
#include <QMainWindow>
#include <QObject>
#include <QMainWindow>
#include <QMessageBox>
#include "produit.h"
#include <QTextDocument>
#include <QtCharts>
#include <QObject>


namespace Ui {
class dialog;
}

class dialog : public QMainWindow
{
    Q_OBJECT
    bool checkUIDInBase(int);
    QString getIdAndNameEmp(int uid);
public:
    explicit dialog(QWidget *parent = nullptr);
    ~dialog();

private slots:
    void on_pushButton_VAL_AJ_3_clicked();


    void on_tableView_activated(const QModelIndex &index);

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_4_clicked();
    void update_label();

    void on_pushButton_6_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_32_clicked();

    void on_lineEdit_15_textChanged(const QString &arg1);

    void on_lineEdit_16_textChanged(const QString &arg1);

    void on_lineEdit_17_textChanged(const QString &arg1);



    void on_tabWidget_tabBarClicked(int index);
    int G_PVS1();
    int G_PVS2();
    int G_PVS3();
    int G_PVS4();
    int G_PVS5();
    int G_PVS6();

    QChartView* piechart();

    void on_tableWidget_cellClicked(int, int );

    void on_pushButton_alert_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_14_clicked();

private:
    Ui::dialog *ui;
    QMediaPlayer*	playermusic;
    QMediaPlayer*	playermusic1;
    QMediaPlayer*	player;

    QByteArray data; // variable contenant les données reçues

    Arduino A;
    dialog *mDialog;
    produit Pr ;
    int idp= 0;

};

#endif // DIALOG_H
