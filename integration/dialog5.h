#ifndef DIALOG5_H
#define DIALOG5_H

#include <QDialog>
#include "commandes.h"

namespace Ui {
class Dialog5;
}

class Dialog5 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog5(QWidget *parent = nullptr);
    ~Dialog5();

private slots:
    void on_pushButton_VAL_AJ_2_clicked();

    void on_pushButton_7_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_25_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Dialog5 *ui;
    commandes cm ;
    int idc= 0;
};

#endif // DIALOG5_H
