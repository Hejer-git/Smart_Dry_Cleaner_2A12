#ifndef SMARTINTERFACE_H
#define SMARTINTERFACE_H
#include <QWidget>
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SmartInterface; }
QT_END_NAMESPACE

class SmartInterface : public QWidget
{
    Q_OBJECT

public:
    SmartInterface(QWidget *parent = nullptr);
    ~SmartInterface();
private slots :
    void update_label();   // slot permettant la mise à jour du label état de la lampe 1,
    // ce slot est lancé à chaque réception d'un message de Arduino
    void on_pushButtonArduino1_clicked();

    void on_pushButtonArduino2_clicked();

private:
    Ui::SmartInterface *ui;
     Arduino A; // objet temporaire
     QByteArray data;
};



#endif // SMARTINTERFACE_H
