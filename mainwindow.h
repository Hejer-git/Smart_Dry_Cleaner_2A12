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

    void on_pushButton_VAL_AJ_16_clicked();

    void on_pushButton_157_clicked();

   void on_pushButton_158_clicked();

   void on_tableView_15_activated(const QModelIndex &index);

   void on_tableView_15_clicked(const QModelIndex &index);

   void on_pushButton_163_clicked();

  void on_pushButton_161_clicked();

   void on_pushButton_164_clicked();

   void on_pushButton_160_clicked();

   void on_pushButton_159_clicked();

   void on_pushButton_162_clicked();

   void on_pushButton_156_clicked();

   void on_pushButton_166_clicked();

private:
    Ui::MainWindow *ui;
    machine m;
    int id_machine=0;
};
#endif // MAINWINDOW_H
