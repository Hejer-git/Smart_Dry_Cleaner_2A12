#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <client.h>
#include <QMainWindow>


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



    void on_pushButton_ajouter_clicked();

    void on_pushButton_modifier_clicked();

    void on_pushButton_supprimer_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_tableView_clicked(const QModelIndex &index);

    void on_ButtonRechN_clicked();

    void on_Button_triN_clicked();

    void on_Button_rechP_clicked();

    void on_Button_rechNum_clicked();

    void on_Button_triId_clicked();

    void on_Button_triPt_clicked();

    void on_pushButton_extr_clicked();

private:
    Ui::MainWindow *ui;
    Client Cl;
    int id_c=0;
};
#endif // MAINWINDOW_H
