#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMessageBox>
#include "employe.h"
#include <QTextDocument>
#include <QObject>
#include <QMediaPlayer>
#include <QSerialPort>
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    bool checkUIDInBase(int);
    QString getIdAndNameEmp(int uid);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();
void update_label();
private:
    Ui::MainWindow*ui;
    QMediaPlayer*	playermusic;
    QMediaPlayer*	playermusic1;
    QMediaPlayer*	player;

    QByteArray data; // variable contenant les données reçues

    Arduino A;

};
#endif // MAINWINDOW_H
