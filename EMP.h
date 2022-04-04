#ifndef EMP_H
#define EMP_H
#include"employe.h"
#include "excel.h"
#include"qr.h"
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class EMP;}
QT_END_NAMESPACE

class EMP : public QDialog
{
    Q_OBJECT

public:
    explicit EMP(QWidget *parent = nullptr);
    ~EMP();

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
    Ui::EMP *ui;
    Employe Emp ;
    int Id_Emp=0;
};

#endif // EMP_H
