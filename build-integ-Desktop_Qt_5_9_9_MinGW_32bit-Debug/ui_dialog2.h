/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog2
{
public:
    QGroupBox *pushButton_ajouter_2;
    QTableView *tableView_2;
    QLabel *label_8;
    QLabel *label;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_12;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_Mail;
    QLineEdit *subject1;
    QPlainTextEdit *msg1;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *rcpt1;
    QGroupBox *groupBox;
    QPushButton *pushButton_Ajouter;
    QPushButton *pushButton_Quitter;
    QLineEdit *lineEdit_Id;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_Nom;
    QLineEdit *lineEdit_Prenom;
    QLineEdit *lineEdit_Email;
    QLineEdit *lineEdit_Numt;
    QLineEdit *lineEdit_Adresse;
    QLabel *label_28;
    QLineEdit *lineEdit_Ptf;
    QLabel *label_20;
    QGroupBox *groupBox_11;
    QPushButton *Button_TriId;
    QPushButton *Button_TriN;
    QPushButton *Button_TriPt;
    QGroupBox *groupBox_12;
    QPushButton *Button_RechP;
    QPushButton *Button_RechN;
    QPushButton *Button_RechNum;
    QLineEdit *lineEdit_Rnom1;
    QLineEdit *lineEdit_Rprenom1;
    QLineEdit *lineEdit_Rnum1;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_Supprimer;
    QPushButton *pushButton_Modifier;
    QLineEdit *lineEdit_Ids;
    QLabel *label_21;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_Extr;
    QTableView *tableView0;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_refuser;
    QLabel *label1;
    QPushButton *pushButton_acces;

    void setupUi(QWidget *dialog2)
    {
        if (dialog2->objectName().isEmpty())
            dialog2->setObjectName(QStringLiteral("dialog2"));
        dialog2->resize(1893, 1206);
        pushButton_ajouter_2 = new QGroupBox(dialog2);
        pushButton_ajouter_2->setObjectName(QStringLiteral("pushButton_ajouter_2"));
        pushButton_ajouter_2->setGeometry(QRect(490, 30, 521, 311));
        pushButton_ajouter_2->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        tableView_2 = new QTableView(pushButton_ajouter_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 30, 471, 271));
        tableView_2->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_8 = new QLabel(dialog2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1250, 20, 121, 101));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Artboard-35-ConvertImage.png")));
        label = new QLabel(dialog2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-90, -50, 1981, 1001));
        label->setPixmap(QPixmap(QString::fromUtf8(":/15190.jpg")));
        groupBox_7 = new QGroupBox(dialog2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(970, 440, 281, 101));
        groupBox_7->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_12 = new QPushButton(groupBox_7);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 30, 261, 61));
        pushButton_12->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
" \n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        pushButton_12->setAutoDefault(true);
        groupBox_8 = new QGroupBox(dialog2);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(950, 540, 581, 411));
        groupBox_8->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_Mail = new QPushButton(groupBox_8);
        pushButton_Mail->setObjectName(QStringLiteral("pushButton_Mail"));
        pushButton_Mail->setGeometry(QRect(380, 330, 141, 61));
        pushButton_Mail->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
" \n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        pushButton_Mail->setAutoDefault(false);
        subject1 = new QLineEdit(groupBox_8);
        subject1->setObjectName(QStringLiteral("subject1"));
        subject1->setGeometry(QRect(150, 80, 361, 31));
        subject1->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        msg1 = new QPlainTextEdit(groupBox_8);
        msg1->setObjectName(QStringLiteral("msg1"));
        msg1->setGeometry(QRect(150, 130, 371, 181));
        msg1->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;\n"
""));
        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 80, 111, 31));
        label_14 = new QLabel(groupBox_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 40, 111, 31));
        rcpt1 = new QLineEdit(groupBox_8);
        rcpt1->setObjectName(QStringLiteral("rcpt1"));
        rcpt1->setGeometry(QRect(150, 40, 361, 31));
        rcpt1->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        groupBox = new QGroupBox(dialog2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 471, 411));
        groupBox->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_Ajouter = new QPushButton(groupBox);
        pushButton_Ajouter->setObjectName(QStringLiteral("pushButton_Ajouter"));
        pushButton_Ajouter->setGeometry(QRect(340, 320, 111, 41));
        pushButton_Ajouter->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  margin: 4px 2px;\n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        pushButton_Ajouter->setAutoDefault(true);
        pushButton_Quitter = new QPushButton(groupBox);
        pushButton_Quitter->setObjectName(QStringLiteral("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(340, 360, 111, 41));
        pushButton_Quitter->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  margin: 4px 2px;\n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        pushButton_Quitter->setAutoDefault(true);
        lineEdit_Id = new QLineEdit(groupBox);
        lineEdit_Id->setObjectName(QStringLiteral("lineEdit_Id"));
        lineEdit_Id->setGeometry(QRect(240, 30, 211, 31));
        lineEdit_Id->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 80, 81, 31));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 120, 81, 31));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 160, 131, 31));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 200, 171, 31));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(20, 240, 241, 31));
        lineEdit_Nom = new QLineEdit(groupBox);
        lineEdit_Nom->setObjectName(QStringLiteral("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(240, 70, 211, 31));
        lineEdit_Nom->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_Prenom = new QLineEdit(groupBox);
        lineEdit_Prenom->setObjectName(QStringLiteral("lineEdit_Prenom"));
        lineEdit_Prenom->setGeometry(QRect(240, 120, 211, 31));
        lineEdit_Prenom->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_Email = new QLineEdit(groupBox);
        lineEdit_Email->setObjectName(QStringLiteral("lineEdit_Email"));
        lineEdit_Email->setGeometry(QRect(240, 160, 211, 31));
        lineEdit_Email->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_Numt = new QLineEdit(groupBox);
        lineEdit_Numt->setObjectName(QStringLiteral("lineEdit_Numt"));
        lineEdit_Numt->setGeometry(QRect(240, 200, 211, 31));
        lineEdit_Numt->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_Adresse = new QLineEdit(groupBox);
        lineEdit_Adresse->setObjectName(QStringLiteral("lineEdit_Adresse"));
        lineEdit_Adresse->setGeometry(QRect(240, 240, 211, 31));
        lineEdit_Adresse->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_28 = new QLabel(groupBox);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 280, 241, 31));
        lineEdit_Ptf = new QLineEdit(groupBox);
        lineEdit_Ptf->setObjectName(QStringLiteral("lineEdit_Ptf"));
        lineEdit_Ptf->setGeometry(QRect(240, 280, 211, 31));
        lineEdit_Ptf->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 30, 211, 31));
        groupBox_11 = new QGroupBox(dialog2);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(620, 470, 311, 241));
        groupBox_11->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        Button_TriId = new QPushButton(groupBox_11);
        Button_TriId->setObjectName(QStringLiteral("Button_TriId"));
        Button_TriId->setGeometry(QRect(10, 100, 231, 61));
        Button_TriId->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
" \n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        Button_TriId->setAutoDefault(true);
        Button_TriN = new QPushButton(groupBox_11);
        Button_TriN->setObjectName(QStringLiteral("Button_TriN"));
        Button_TriN->setGeometry(QRect(10, 30, 231, 61));
        Button_TriN->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
" \n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        Button_TriN->setAutoDefault(true);
        Button_TriPt = new QPushButton(groupBox_11);
        Button_TriPt->setObjectName(QStringLiteral("Button_TriPt"));
        Button_TriPt->setGeometry(QRect(10, 170, 231, 61));
        Button_TriPt->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
" \n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        Button_TriPt->setAutoDefault(true);
        groupBox_12 = new QGroupBox(dialog2);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(110, 470, 421, 171));
        groupBox_12->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        Button_RechP = new QPushButton(groupBox_12);
        Button_RechP->setObjectName(QStringLiteral("Button_RechP"));
        Button_RechP->setGeometry(QRect(10, 70, 191, 41));
        Button_RechP->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  margin: 4px 2px;\n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        Button_RechP->setAutoDefault(true);
        Button_RechN = new QPushButton(groupBox_12);
        Button_RechN->setObjectName(QStringLiteral("Button_RechN"));
        Button_RechN->setGeometry(QRect(10, 20, 191, 41));
        Button_RechN->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  margin: 4px 2px;\n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        Button_RechN->setAutoDefault(true);
        Button_RechNum = new QPushButton(groupBox_12);
        Button_RechNum->setObjectName(QStringLiteral("Button_RechNum"));
        Button_RechNum->setGeometry(QRect(10, 120, 191, 41));
        Button_RechNum->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  margin: 4px 2px;\n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        Button_RechNum->setAutoDefault(true);
        lineEdit_Rnom1 = new QLineEdit(groupBox_12);
        lineEdit_Rnom1->setObjectName(QStringLiteral("lineEdit_Rnom1"));
        lineEdit_Rnom1->setGeometry(QRect(210, 20, 211, 31));
        lineEdit_Rnom1->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_Rprenom1 = new QLineEdit(groupBox_12);
        lineEdit_Rprenom1->setObjectName(QStringLiteral("lineEdit_Rprenom1"));
        lineEdit_Rprenom1->setGeometry(QRect(210, 70, 211, 31));
        lineEdit_Rprenom1->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_Rnum1 = new QLineEdit(groupBox_12);
        lineEdit_Rnum1->setObjectName(QStringLiteral("lineEdit_Rnum1"));
        lineEdit_Rnum1->setGeometry(QRect(210, 120, 211, 31));
        lineEdit_Rnum1->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        textEdit = new QTextEdit(dialog2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(1020, 60, 431, 271));
        textEdit->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        groupBox_3 = new QGroupBox(dialog2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(600, 340, 391, 91));
        groupBox_3->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_Supprimer = new QPushButton(groupBox_3);
        pushButton_Supprimer->setObjectName(QStringLiteral("pushButton_Supprimer"));
        pushButton_Supprimer->setGeometry(QRect(140, 20, 111, 61));
        pushButton_Supprimer->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
" \n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        pushButton_Supprimer->setAutoDefault(true);
        pushButton_Modifier = new QPushButton(groupBox_3);
        pushButton_Modifier->setObjectName(QStringLiteral("pushButton_Modifier"));
        pushButton_Modifier->setGeometry(QRect(0, 20, 111, 61));
        pushButton_Modifier->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  \n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
" \n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        pushButton_Modifier->setAutoDefault(true);
        lineEdit_Ids = new QLineEdit(groupBox_3);
        lineEdit_Ids->setObjectName(QStringLiteral("lineEdit_Ids"));
        lineEdit_Ids->setGeometry(QRect(290, 30, 81, 31));
        lineEdit_Ids->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(270, 40, 41, 21));
        groupBox_4 = new QGroupBox(dialog2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(1170, 330, 121, 80));
        groupBox_4->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_Extr = new QPushButton(groupBox_4);
        pushButton_Extr->setObjectName(QStringLiteral("pushButton_Extr"));
        pushButton_Extr->setGeometry(QRect(0, 20, 111, 61));
        pushButton_Extr->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
" \n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        pushButton_Extr->setAutoDefault(true);
        tableView0 = new QTableView(dialog2);
        tableView0->setObjectName(QStringLiteral("tableView0"));
        tableView0->setGeometry(QRect(520, 60, 471, 271));
        tableView0->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        groupBox_5 = new QGroupBox(dialog2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(1520, 60, 251, 321));
        pushButton_refuser = new QPushButton(groupBox_5);
        pushButton_refuser->setObjectName(QStringLiteral("pushButton_refuser"));
        pushButton_refuser->setGeometry(QRect(40, 200, 161, 61));
        pushButton_refuser->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
" \n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));
        label1 = new QLabel(groupBox_5);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(10, 30, 221, 71));
        label1->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"gridline-color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;"));
        pushButton_acces = new QPushButton(groupBox_5);
        pushButton_acces->setObjectName(QStringLiteral("pushButton_acces"));
        pushButton_acces->setGeometry(QRect(40, 120, 161, 61));
        pushButton_acces->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
"  padding: 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
" \n"
"  border-radius : 16px;\n"
"background-color: rgb(0, 74, 108);"));

        retranslateUi(dialog2);

        QMetaObject::connectSlotsByName(dialog2);
    } // setupUi

    void retranslateUi(QWidget *dialog2)
    {
        dialog2->setWindowTitle(QApplication::translate("dialog2", "Form", Q_NULLPTR));
        pushButton_ajouter_2->setTitle(QApplication::translate("dialog2", "                             Afficher les clients", Q_NULLPTR));
        label_8->setText(QString());
        label->setText(QString());
        groupBox_7->setTitle(QApplication::translate("dialog2", "Calculer les points de fid\303\251lit\303\251", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("dialog2", "Calculer les points de fid\303\251lit\303\251", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("dialog2", "Envoyer un mail de confirmation", Q_NULLPTR));
        pushButton_Mail->setText(QApplication::translate("dialog2", "Envoyer", Q_NULLPTR));
        label_13->setText(QApplication::translate("dialog2", "<html><head/><body><p><span style=\" font-size:14pt;\">Objet</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("dialog2", "<html><head/><body><p><span style=\" font-size:14pt;\">\303\200</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("dialog2", "Ajouter un client", Q_NULLPTR));
        pushButton_Ajouter->setText(QApplication::translate("dialog2", "Valider", Q_NULLPTR));
        pushButton_Quitter->setText(QApplication::translate("dialog2", "Quitter", Q_NULLPTR));
        label_15->setText(QApplication::translate("dialog2", "<html><head/><body><p><span style=\" font-size:12pt;\">Nom</span></p></body></html>", Q_NULLPTR));
        label_16->setText(QApplication::translate("dialog2", "<html><head/><body><p><span style=\" font-size:12pt;\">Pr\303\251nom</span></p></body></html>", Q_NULLPTR));
        label_17->setText(QApplication::translate("dialog2", "<html><head/><body><p><span style=\" font-size:12pt;\">Adresse e-mail</span></p></body></html>", Q_NULLPTR));
        label_18->setText(QApplication::translate("dialog2", "<html><head/><body><p><span style=\" font-size:12pt;\">N\302\260 de t\303\251l\303\251phone</span></p></body></html>", Q_NULLPTR));
        label_19->setText(QApplication::translate("dialog2", "<html><head/><body><p><span style=\" font-size:12pt;\">Adresse</span></p></body></html>", Q_NULLPTR));
        label_28->setText(QApplication::translate("dialog2", "<html><head/><body><p><span style=\" font-size:12pt;\">Point de fid\303\251lit\303\251</span></p></body></html>", Q_NULLPTR));
        label_20->setText(QApplication::translate("dialog2", "<html><head/><body><p><span style=\" font-size:12pt;\">Identifiant du client</span></p></body></html>", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("dialog2", "Trier les clients", Q_NULLPTR));
        Button_TriId->setText(QApplication::translate("dialog2", "Par identifiant", Q_NULLPTR));
        Button_TriN->setText(QApplication::translate("dialog2", "Par nom", Q_NULLPTR));
        Button_TriPt->setText(QApplication::translate("dialog2", "Par point de fid\303\251lit\303\251", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("dialog2", "Rechercher les clients", Q_NULLPTR));
        Button_RechP->setText(QApplication::translate("dialog2", "Par pr\303\251nom", Q_NULLPTR));
        Button_RechN->setText(QApplication::translate("dialog2", "Par nom", Q_NULLPTR));
        Button_RechNum->setText(QApplication::translate("dialog2", "Par N\302\260 de t\303\251l\303\251phone", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("dialog2", "Modifier ou Supprimer un client", Q_NULLPTR));
        pushButton_Supprimer->setText(QApplication::translate("dialog2", "Supprimer", Q_NULLPTR));
        pushButton_Modifier->setText(QApplication::translate("dialog2", "Modifier", Q_NULLPTR));
        label_21->setText(QApplication::translate("dialog2", "<html><head/><body><p>Id</p></body></html>", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("dialog2", "Extaire PDF", Q_NULLPTR));
        pushButton_Extr->setText(QApplication::translate("dialog2", "Extraire", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("dialog2", "ARDUINO", Q_NULLPTR));
        pushButton_refuser->setText(QApplication::translate("dialog2", "REFUSER ACCES", Q_NULLPTR));
        label1->setText(QString());
        pushButton_acces->setText(QApplication::translate("dialog2", "DONNER ACCES", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialog2: public Ui_dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
