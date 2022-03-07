#ifndef EMP_H
#define EMP_H
#include"employe.h"
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

private:
    Ui::EMP *ui;
    Employe Emp ;
    int Id_Emp=0;
};

#endif // EMP_H
