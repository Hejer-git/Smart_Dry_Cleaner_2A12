#ifndef DIALOG4_H
#define DIALOG4_H

#include <QDialog>
#include "livraison.h"
namespace Ui {
class Dialog4;
}

class Dialog4 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog4(QWidget *parent = nullptr);
    ~Dialog4();

private slots:
    void on_pushButton_VAL_AJ_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_QUIT_AJ_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();


private:
    Ui::Dialog4 *ui;
    livrasion liv ;
    int idl=0;
};

#endif // DIALOG4_H
