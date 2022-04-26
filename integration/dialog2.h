#ifndef DIALOG2_H
#define DIALOG2_H
#include <client.h>
#include <smtp.h>
#include <QDialog>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include"arduino.h"


QT_BEGIN_NAMESPACE
namespace Ui { class dialog2; }
QT_END_NAMESPACE

class dialog2 : public QDialog
{
    Q_OBJECT

public:
    dialog2(QWidget *parent = nullptr);
    ~dialog2();

private slots:

    void mailSent(QString);

    void on_pushButton_Ajouter_clicked();

    void on_pushButton_Modifier_clicked();

    void on_pushButton_Supprimer_clicked();

    void on_pushButton_Extr_clicked();

    void on_Button_RechN_clicked();

    void on_Button_RechP_clicked();

    void on_Button_RechNum_clicked();

    void on_Button_TriN_clicked();

    void on_Button_TriId_clicked();

    void on_Button_TriPt_clicked();

    void on_pushButton_Mail_clicked();

    void on_tableView0_activated(const QModelIndex &index);

    void on_tableView0_clicked(const QModelIndex &index);

    void update_label();

    void on_pushButton_acces_clicked();

    void on_pushButton_refuser_clicked();

private:
    Ui::dialog2 *ui;
    QMediaPlayer*	playermusic;
    QMediaPlayer*	playermusic1;
    QMediaPlayer*	player;
    Client Cl;
    int id_c=0;
    Arduino A;
    QByteArray data;
};
#endif // DIALOG2_H
