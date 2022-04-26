#ifndef DIALOG3_H
#define DIALOG3_H
#include"employe.h"
#include "excel.h"
#include"qr.h"
#include <QDialog>

namespace Ui {class Dialog3;}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(QWidget *parent = nullptr);
    ~Dialog3();
private slots:
    void on_pushButton_VAL_AJ_clicked();

    void on_pushButtonsupp_clicked();


    void on_tableViewaff_activated(const QModelIndex &index);

    void on_tableViewaff_clicked(const QModelIndex &index);

    void on_pushButtonmodif_clicked();

    void on_pushButtonRnom_clicked();

    void on_pushButtonRprenom_clicked();

    void on_pushButtonRfonction_clicked();

    void on_pushButtonTnom_clicked();

    void on_pushButtonTsalaire_clicked();

    void on_pushButtonTnbh_clicked();

    void on_pushButtonextraire_clicked();

    void on_pushButtonCprime_clicked();

    void on_pushButtonqr_clicked();

private:
    Ui::Dialog3 *ui;
    Employe Emp;
    int Id_Emp=0;
};
#endif // DIALOG3_H
