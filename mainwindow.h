#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <machine.h>

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

    void on_pushButton_VAL_AJ_clicked();

    void on_pushButton_2_clicked();

   void on_pushButton_3_clicked();

   void on_tableView_activated(const QModelIndex &index);

   void on_tableView_clicked(const QModelIndex &index);

   void on_pushButton_22_clicked();

  void on_pushButton_21_clicked();

   void on_pushButton_23_clicked();

   void on_pushButton_25_clicked();

   void on_pushButton_24_clicked();

   void on_pushButton_26_clicked();

   void on_pushButton_5_clicked();

   void on_pushButton_12_clicked();

private:
    Ui::MainWindow *ui;
    machine m;
    int id_machine=0;
};
#endif // MAINWINDOW_H
