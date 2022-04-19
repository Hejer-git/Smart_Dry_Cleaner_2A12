#ifndef DIALOG_H
#define DIALOG_H
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QFileDialog>
#include "arduino.h"
#include <QMainWindow>
#include <QObject>


namespace Ui {
class dialog;
}

class dialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = nullptr);
    ~dialog();

private slots:
    void on_pushButtonn_clicked();

    void update_label();

    void on_pushButton_openn_clicked();

    void on_pushButton_open_22_clicked();

    void on_startt_clicked();

    void on_pausee_clicked();

    void on_horizontalSliderr_sliderMoved(int position);

    void on_pushButton_22_clicked();

    void on_pushButton_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::dialog *ui;
    QMediaPlayer*	playermusic;
    QMediaPlayer*	playermusic1;
    QMediaPlayer*	player;

    QByteArray data; // variable contenant les données reçues

    Arduino A;
    dialog *mDialog;

};

#endif // DIALOG_H
