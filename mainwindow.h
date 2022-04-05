#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "produit.h"
#include <QTextDocument>
#include <QtCharts>


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

    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    produit Pr ;
    int idp= 0;

};
#endif // MAINWINDOW_H
