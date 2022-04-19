/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_extr;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_mail;
    QLineEdit *subject;
    QPlainTextEdit *msg;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *rcpt;
    QGroupBox *groupBox_11;
    QPushButton *Button_triId;
    QPushButton *Button_triN;
    QPushButton *Button_triPt;
    QGroupBox *groupBox;
    QPushButton *pushButton_ajouter;
    QPushButton *pushButton_quitter;
    QLineEdit *lineEdit_id;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_numt;
    QLineEdit *lineEdit_adresse;
    QLabel *label_27;
    QLineEdit *lineEdit_ptf;
    QLabel *label_9;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_11;
    QGroupBox *groupBox_12;
    QPushButton *Button_rechP;
    QPushButton *ButtonRechN;
    QPushButton *Button_rechNum;
    QLineEdit *lineEdit_Rnom;
    QLineEdit *lineEdit_Rprenom;
    QLineEdit *lineEdit_Rnum;
    QLabel *label_8;
    QGroupBox *pushButton_ajouter_2;
    QTableView *tableView;
    QLabel *label;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_supprimer;
    QPushButton *pushButton_modifier;
    QLineEdit *lineEdit_ids;
    QLabel *label_10;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1631, 986);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(1140, 310, 121, 80));
        groupBox_4->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_extr = new QPushButton(groupBox_4);
        pushButton_extr->setObjectName(QStringLiteral("pushButton_extr"));
        pushButton_extr->setGeometry(QRect(0, 20, 111, 61));
        pushButton_extr->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_extr->setAutoDefault(true);
        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(920, 520, 581, 411));
        groupBox_8->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_mail = new QPushButton(groupBox_8);
        pushButton_mail->setObjectName(QStringLiteral("pushButton_mail"));
        pushButton_mail->setGeometry(QRect(380, 330, 141, 61));
        pushButton_mail->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_mail->setAutoDefault(false);
        subject = new QLineEdit(groupBox_8);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(150, 80, 361, 31));
        subject->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        msg = new QPlainTextEdit(groupBox_8);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(150, 130, 371, 181));
        msg->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;\n"
""));
        label_11 = new QLabel(groupBox_8);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 80, 111, 31));
        label_12 = new QLabel(groupBox_8);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(40, 40, 111, 31));
        rcpt = new QLineEdit(groupBox_8);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(150, 40, 361, 31));
        rcpt->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        groupBox_11 = new QGroupBox(centralwidget);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(590, 450, 311, 241));
        groupBox_11->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        Button_triId = new QPushButton(groupBox_11);
        Button_triId->setObjectName(QStringLiteral("Button_triId"));
        Button_triId->setGeometry(QRect(10, 100, 231, 61));
        Button_triId->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        Button_triId->setAutoDefault(true);
        Button_triN = new QPushButton(groupBox_11);
        Button_triN->setObjectName(QStringLiteral("Button_triN"));
        Button_triN->setGeometry(QRect(10, 30, 231, 61));
        Button_triN->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        Button_triN->setAutoDefault(true);
        Button_triPt = new QPushButton(groupBox_11);
        Button_triPt->setObjectName(QStringLiteral("Button_triPt"));
        Button_triPt->setGeometry(QRect(10, 170, 231, 61));
        Button_triPt->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        Button_triPt->setAutoDefault(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-10, 0, 471, 411));
        groupBox->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_ajouter = new QPushButton(groupBox);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(340, 320, 111, 41));
        pushButton_ajouter->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_ajouter->setAutoDefault(true);
        pushButton_quitter = new QPushButton(groupBox);
        pushButton_quitter->setObjectName(QStringLiteral("pushButton_quitter"));
        pushButton_quitter->setGeometry(QRect(340, 360, 111, 41));
        pushButton_quitter->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_quitter->setAutoDefault(true);
        lineEdit_id = new QLineEdit(groupBox);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(240, 30, 211, 31));
        lineEdit_id->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 81, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 120, 81, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 160, 131, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 200, 171, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 240, 241, 31));
        lineEdit_nom = new QLineEdit(groupBox);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(240, 70, 211, 31));
        lineEdit_nom->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_prenom = new QLineEdit(groupBox);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(240, 120, 211, 31));
        lineEdit_prenom->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(240, 160, 211, 31));
        lineEdit_email->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_numt = new QLineEdit(groupBox);
        lineEdit_numt->setObjectName(QStringLiteral("lineEdit_numt"));
        lineEdit_numt->setGeometry(QRect(240, 200, 211, 31));
        lineEdit_numt->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_adresse = new QLineEdit(groupBox);
        lineEdit_adresse->setObjectName(QStringLiteral("lineEdit_adresse"));
        lineEdit_adresse->setGeometry(QRect(240, 240, 211, 31));
        lineEdit_adresse->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(20, 280, 241, 31));
        lineEdit_ptf = new QLineEdit(groupBox);
        lineEdit_ptf->setObjectName(QStringLiteral("lineEdit_ptf"));
        lineEdit_ptf->setGeometry(QRect(240, 280, 211, 31));
        lineEdit_ptf->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 30, 211, 31));
        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(940, 420, 281, 101));
        groupBox_7->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_11 = new QPushButton(groupBox_7);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 30, 261, 61));
        pushButton_11->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_11->setAutoDefault(true);
        groupBox_12 = new QGroupBox(centralwidget);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(80, 450, 421, 171));
        groupBox_12->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        Button_rechP = new QPushButton(groupBox_12);
        Button_rechP->setObjectName(QStringLiteral("Button_rechP"));
        Button_rechP->setGeometry(QRect(10, 70, 191, 41));
        Button_rechP->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        Button_rechP->setAutoDefault(true);
        ButtonRechN = new QPushButton(groupBox_12);
        ButtonRechN->setObjectName(QStringLiteral("ButtonRechN"));
        ButtonRechN->setGeometry(QRect(10, 20, 191, 41));
        ButtonRechN->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        ButtonRechN->setAutoDefault(true);
        Button_rechNum = new QPushButton(groupBox_12);
        Button_rechNum->setObjectName(QStringLiteral("Button_rechNum"));
        Button_rechNum->setGeometry(QRect(10, 120, 191, 41));
        Button_rechNum->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        Button_rechNum->setAutoDefault(true);
        lineEdit_Rnom = new QLineEdit(groupBox_12);
        lineEdit_Rnom->setObjectName(QStringLiteral("lineEdit_Rnom"));
        lineEdit_Rnom->setGeometry(QRect(210, 20, 211, 31));
        lineEdit_Rnom->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_Rprenom = new QLineEdit(groupBox_12);
        lineEdit_Rprenom->setObjectName(QStringLiteral("lineEdit_Rprenom"));
        lineEdit_Rprenom->setGeometry(QRect(210, 70, 211, 31));
        lineEdit_Rprenom->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        lineEdit_Rnum = new QLineEdit(groupBox_12);
        lineEdit_Rnum->setObjectName(QStringLiteral("lineEdit_Rnum"));
        lineEdit_Rnum->setGeometry(QRect(210, 120, 211, 31));
        lineEdit_Rnum->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1220, 0, 121, 101));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Artboard-35-ConvertImage.png")));
        pushButton_ajouter_2 = new QGroupBox(centralwidget);
        pushButton_ajouter_2->setObjectName(QStringLiteral("pushButton_ajouter_2"));
        pushButton_ajouter_2->setGeometry(QRect(460, 10, 521, 311));
        pushButton_ajouter_2->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        tableView = new QTableView(pushButton_ajouter_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 30, 471, 271));
        tableView->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-120, -70, 1621, 1001));
        label->setPixmap(QPixmap(QString::fromUtf8(":/15190.jpg")));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(570, 320, 391, 91));
        groupBox_3->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_supprimer = new QPushButton(groupBox_3);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(140, 20, 111, 61));
        pushButton_supprimer->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_supprimer->setAutoDefault(true);
        pushButton_modifier = new QPushButton(groupBox_3);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(0, 20, 111, 61));
        pushButton_modifier->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_modifier->setAutoDefault(true);
        lineEdit_ids = new QLineEdit(groupBox_3);
        lineEdit_ids->setObjectName(QStringLiteral("lineEdit_ids"));
        lineEdit_ids->setGeometry(QRect(290, 30, 81, 31));
        lineEdit_ids->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 40, 41, 21));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(990, 40, 431, 271));
        textEdit->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        groupBox_4->raise();
        groupBox_8->raise();
        groupBox_11->raise();
        groupBox->raise();
        groupBox_7->raise();
        groupBox_12->raise();
        label_8->raise();
        pushButton_ajouter_2->raise();
        groupBox_3->raise();
        textEdit->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1631, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Extaire PDF", Q_NULLPTR));
        pushButton_extr->setText(QApplication::translate("MainWindow", "Extraire", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Envoyer un mail de confirmation", Q_NULLPTR));
        pushButton_mail->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Objet</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\303\200</span></p></body></html>", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Trier les clients", Q_NULLPTR));
        Button_triId->setText(QApplication::translate("MainWindow", "Par identifiant", Q_NULLPTR));
        Button_triN->setText(QApplication::translate("MainWindow", "Par nom", Q_NULLPTR));
        Button_triPt->setText(QApplication::translate("MainWindow", "Par point de fid\303\251lit\303\251", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajouter un client", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        pushButton_quitter->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Nom</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Pr\303\251nom</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Adresse e-mail</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">N\302\260 de t\303\251l\303\251phone</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Adresse</span></p></body></html>", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Point de fid\303\251lit\303\251</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Identifiant du client</span></p></body></html>", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Calculer les points de fid\303\251lit\303\251", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Calculer les points de fid\303\251lit\303\251", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "Rechercher les clients", Q_NULLPTR));
        Button_rechP->setText(QApplication::translate("MainWindow", "Par pr\303\251nom", Q_NULLPTR));
        ButtonRechN->setText(QApplication::translate("MainWindow", "Par nom", Q_NULLPTR));
        Button_rechNum->setText(QApplication::translate("MainWindow", "Par N\302\260 de t\303\251l\303\251phone", Q_NULLPTR));
        label_8->setText(QString());
        pushButton_ajouter_2->setTitle(QApplication::translate("MainWindow", "                             Afficher les clients", Q_NULLPTR));
        label->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Modifier ou Supprimer un client", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Id</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
