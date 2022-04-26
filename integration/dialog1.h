#ifndef DIALOG1_H
#define DIALOG1_H

#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QDialog>
#include <machine.h>
#include"arduino.h"

namespace Ui { class Dialog1; }


class Dialog1 : public QDialog
{
    Q_OBJECT
public:
    Dialog1(QWidget *parent = nullptr);
    ~Dialog1();

private slots:

    void on_pushButton_VAL_AJ_18_clicked();

    void on_pushButton_184_clicked();

   void on_pushButton_185_clicked();

   void on_tableView_17_activated(const QModelIndex &index);

   void on_tableView_17_clicked(const QModelIndex &index);

   void on_pushButton_176_clicked();
   void on_pushButton_180_clicked();


   void on_pushButton_178_clicked();

   void on_pushButton_177_clicked();

   void on_pushButton_179_clicked();

   void on_pushButton_182_clicked();

   void on_pushButton_181_clicked();

   void on_pushButton_183_clicked();

   void on_pushButton_acces_clicked();

   void on_pushButton_refuser_clicked();
    void update_label();
private:
    Ui::Dialog1 *ui;
    QMediaPlayer*	playermusic;
    QMediaPlayer*	playermusic1;
    QMediaPlayer*	player;

    machine m;
    int id_machine=0;
    Arduino A; // objet temporaire
    QByteArray data;
};
#endif // MDIALOG1_H
