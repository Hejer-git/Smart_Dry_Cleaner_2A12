#ifndef SMARTINTERFACE_H
#define SMARTINTERFACE_H
#include <QDialog>
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui { class smartinterface; }
QT_END_NAMESPACE

class smartinterface : public QDialog
{
    Q_OBJECT

public:
    smartinterface(QDialog *parent = nullptr);
    ~smartinterface();
private slots :
    void update_label();   // slot permettant la mise à jour du label état de la lampe 1,
    // ce slot est lancé à chaque réception d'un message de Arduino
    void on_pushButtonArduino1_clicked();

    void on_pushButtonArduino2_clicked();

private:
    Ui::smartinterface *ui;
     Arduino A; // objet temporaire
     QByteArray data;
};



#endif // SMARTINTERFACE_H
