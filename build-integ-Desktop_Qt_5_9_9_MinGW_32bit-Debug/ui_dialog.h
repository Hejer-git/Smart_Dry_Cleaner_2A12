/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_10;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_15;
    QLineEdit *lineEdit_12;
    QLabel *label_21;
    QLabel *label_24;
    QLineEdit *lineEdit_13;
    QLabel *label_25;
    QLineEdit *lineEdit_14;
    QGroupBox *groupBox_16;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_17;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QLabel *label_26;
    QGroupBox *groupBox_18;
    QTableView *tableView;
    QGroupBox *groupBox_19;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_20;
    QLineEdit *lineEdit_15;
    QLabel *label_27;
    QLabel *label_28;
    QLineEdit *lineEdit_16;
    QLabel *label_29;
    QLineEdit *lineEdit_17;
    QGroupBox *groupBox_21;
    QPushButton *pushButton_14;
    QGroupBox *groupBox_22;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QLabel *label_30;
    QGroupBox *groupBox_23;
    QPushButton *pushButton_VAL_AJ_3;
    QPushButton *pushButton_QUIT_AJ_3;
    QLineEdit *idp;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *prix;
    QLineEdit *fournisseurp_2;
    QLineEdit *libelle;
    QLineEdit *qte;
    QLabel *label_36;
    QTextEdit *textEdit;
    QWidget *s;
    QLabel *label_37;
    QWidget *tab_4;
    QLabel *label_38;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_stop;
    QLabel *label_39;
    QPushButton *pushButton_alert;
    QLabel *label_40;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName(QStringLiteral("dialog"));
        dialog->resize(1252, 774);
        centralwidget = new QWidget(dialog);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1631, 691));
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab {\n"
"\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid#C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width:20ex;\n"
"    padding: 2px;\n"
"     font: bold, \"Comic Sans MS\";\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
""));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        comboBox_2 = new QComboBox(tab_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(2140, 1020, 251, 61));
        comboBox_2->setStyleSheet(QLatin1String(" border-radius : 16px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 74, 108);"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(1660, 590, 581, 281));
        groupBox_2->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        groupBox_10 = new QGroupBox(tab_3);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(1840, 880, 361, 91));
        groupBox_10->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_2 = new QPushButton(groupBox_10);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 20, 111, 61));
        pushButton_2->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_3 = new QPushButton(groupBox_10);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 20, 111, 61));
        pushButton_3->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        groupBox_15 = new QGroupBox(tab_3);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(1160, 990, 381, 171));
        groupBox_15->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        lineEdit_12 = new QLineEdit(groupBox_15);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(160, 30, 201, 21));
        lineEdit_12->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_21 = new QLabel(groupBox_15);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(40, 20, 80, 31));
        label_24 = new QLabel(groupBox_15);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(39, 72, 80, 31));
        lineEdit_13 = new QLineEdit(groupBox_15);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(159, 82, 201, 21));
        lineEdit_13->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_25 = new QLabel(groupBox_15);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(40, 118, 80, 31));
        lineEdit_14 = new QLineEdit(groupBox_15);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(160, 128, 201, 21));
        lineEdit_14->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        groupBox_16 = new QGroupBox(tab_3);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        groupBox_16->setGeometry(QRect(2220, 880, 211, 80));
        groupBox_16->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_5 = new QPushButton(groupBox_16);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 20, 111, 61));
        pushButton_5->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        groupBox_17 = new QGroupBox(tab_3);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        groupBox_17->setGeometry(QRect(1740, 990, 241, 171));
        groupBox_17->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_27 = new QPushButton(groupBox_17);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(10, 80, 221, 31));
        pushButton_27->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_28 = new QPushButton(groupBox_17);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setGeometry(QRect(10, 30, 221, 31));
        pushButton_28->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_29 = new QPushButton(groupBox_17);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        pushButton_29->setGeometry(QRect(10, 130, 221, 31));
        pushButton_29->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        label_26 = new QLabel(tab_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(2330, 540, 121, 101));
        label_26->setPixmap(QPixmap(QString::fromUtf8(":/Artboard-35-ConvertImage.png")));
        groupBox_18 = new QGroupBox(tab_3);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        groupBox_18->setGeometry(QRect(510, 0, 581, 161));
        groupBox_18->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        tableView = new QTableView(groupBox_18);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 20, 551, 141));
        tableView->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        groupBox_19 = new QGroupBox(tab_3);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        groupBox_19->setGeometry(QRect(697, 340, 361, 91));
        groupBox_19->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_4 = new QPushButton(groupBox_19);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 20, 111, 61));
        pushButton_4->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_6 = new QPushButton(groupBox_19);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 20, 111, 61));
        pushButton_6->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        groupBox_20 = new QGroupBox(tab_3);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        groupBox_20->setGeometry(QRect(17, 450, 381, 171));
        groupBox_20->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        lineEdit_15 = new QLineEdit(groupBox_20);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(160, 30, 201, 21));
        lineEdit_15->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_27 = new QLabel(groupBox_20);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(40, 20, 80, 31));
        label_28 = new QLabel(groupBox_20);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(39, 72, 80, 31));
        lineEdit_16 = new QLineEdit(groupBox_20);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(159, 82, 201, 21));
        lineEdit_16->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_29 = new QLabel(groupBox_20);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(40, 118, 80, 31));
        lineEdit_17 = new QLineEdit(groupBox_20);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(160, 128, 201, 21));
        lineEdit_17->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        groupBox_21 = new QGroupBox(tab_3);
        groupBox_21->setObjectName(QStringLiteral("groupBox_21"));
        groupBox_21->setGeometry(QRect(1030, 490, 211, 80));
        groupBox_21->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_14 = new QPushButton(groupBox_21);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(30, 20, 111, 61));
        pushButton_14->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        groupBox_22 = new QGroupBox(tab_3);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        groupBox_22->setGeometry(QRect(597, 450, 241, 171));
        groupBox_22->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_30 = new QPushButton(groupBox_22);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(10, 80, 221, 31));
        pushButton_30->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_31 = new QPushButton(groupBox_22);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        pushButton_31->setGeometry(QRect(10, 30, 221, 31));
        pushButton_31->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_32 = new QPushButton(groupBox_22);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        pushButton_32->setGeometry(QRect(10, 130, 221, 31));
        pushButton_32->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        label_30 = new QLabel(tab_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(-3, 0, 1561, 671));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/15190.jpg")));
        groupBox_23 = new QGroupBox(tab_3);
        groupBox_23->setObjectName(QStringLiteral("groupBox_23"));
        groupBox_23->setGeometry(QRect(0, 0, 511, 391));
        groupBox_23->setStyleSheet(QLatin1String("color: #00002d;\n"
"  font-size: 16px;"));
        pushButton_VAL_AJ_3 = new QPushButton(groupBox_23);
        pushButton_VAL_AJ_3->setObjectName(QStringLiteral("pushButton_VAL_AJ_3"));
        pushButton_VAL_AJ_3->setGeometry(QRect(410, 320, 93, 28));
        pushButton_VAL_AJ_3->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        pushButton_QUIT_AJ_3 = new QPushButton(groupBox_23);
        pushButton_QUIT_AJ_3->setObjectName(QStringLiteral("pushButton_QUIT_AJ_3"));
        pushButton_QUIT_AJ_3->setGeometry(QRect(410, 350, 93, 28));
        pushButton_QUIT_AJ_3->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        idp = new QLineEdit(groupBox_23);
        idp->setObjectName(QStringLiteral("idp"));
        idp->setGeometry(QRect(280, 50, 201, 21));
        idp->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_31 = new QLabel(groupBox_23);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(20, 50, 101, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_31->setFont(font);
        label_32 = new QLabel(groupBox_23);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(20, 90, 81, 31));
        label_33 = new QLabel(groupBox_23);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(10, 210, 141, 31));
        label_34 = new QLabel(groupBox_23);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(20, 130, 131, 31));
        label_35 = new QLabel(groupBox_23);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(20, 170, 81, 31));
        prix = new QLineEdit(groupBox_23);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(280, 90, 201, 21));
        prix->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        fournisseurp_2 = new QLineEdit(groupBox_23);
        fournisseurp_2->setObjectName(QStringLiteral("fournisseurp_2"));
        fournisseurp_2->setGeometry(QRect(280, 210, 201, 21));
        fournisseurp_2->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        libelle = new QLineEdit(groupBox_23);
        libelle->setObjectName(QStringLiteral("libelle"));
        libelle->setGeometry(QRect(280, 130, 201, 21));
        libelle->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        qte = new QLineEdit(groupBox_23);
        qte->setObjectName(QStringLiteral("qte"));
        qte->setGeometry(QRect(280, 170, 201, 21));
        qte->setStyleSheet(QLatin1String("border: 2px solid black;\n"
"border-radius: 10px;"));
        label_36 = new QLabel(tab_3);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(1187, 0, 121, 101));
        label_36->setPixmap(QPixmap(QString::fromUtf8(":/Artboard-35-ConvertImage.png")));
        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(533, 176, 551, 111));
        tabWidget->addTab(tab_3, QString());
        label_30->raise();
        comboBox_2->raise();
        groupBox_10->raise();
        groupBox_15->raise();
        groupBox_16->raise();
        groupBox_17->raise();
        label_26->raise();
        groupBox_18->raise();
        groupBox_19->raise();
        groupBox_20->raise();
        groupBox_21->raise();
        groupBox_22->raise();
        groupBox_23->raise();
        label_36->raise();
        textEdit->raise();
        groupBox_2->raise();
        s = new QWidget();
        s->setObjectName(QStringLiteral("s"));
        label_37 = new QLabel(s);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(0, 0, 1571, 681));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/15190.jpg")));
        tabWidget->addTab(s, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_38 = new QLabel(tab_4);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(-10, -10, 1281, 631));
        label_38->setPixmap(QPixmap(QString::fromUtf8(":/15190.jpg")));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(570, 230, 61, 16));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(557, 270, 91, 81));
        label_6->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: black;\n"
" \n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  \n"
"  font-size: 15px;\n"
" \n"
"  border-radius : 16px;"));
        pushButton_stop = new QPushButton(tab_4);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(550, 440, 111, 61));
        pushButton_stop->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        label_39 = new QLabel(tab_4);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(540, 200, 121, 161));
        label_39->setStyleSheet(QLatin1String("background-color: rgb(0, 74, 108);\n"
"  border: 2px solid black;\n"
"border-radius: 10px;\n"
"  color: white;\n"
" \n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  \n"
"  font-size: 15px;\n"
" \n"
"  border-radius : 16px;"));
        pushButton_alert = new QPushButton(tab_4);
        pushButton_alert->setObjectName(QStringLiteral("pushButton_alert"));
        pushButton_alert->setGeometry(QRect(547, 370, 111, 61));
        pushButton_alert->setStyleSheet(QLatin1String("  border: 2px solid black;\n"
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
        label_40 = new QLabel(tab_4);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(-40, 170, 871, 351));
        tabWidget->addTab(tab_4, QString());
        label_40->raise();
        label_38->raise();
        pushButton_stop->raise();
        label_39->raise();
        label_6->raise();
        label_5->raise();
        pushButton_alert->raise();
        dialog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dialog);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1252, 26));
        dialog->setMenuBar(menubar);
        statusbar = new QStatusBar(dialog);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        dialog->setStatusBar(statusbar);

        retranslateUi(dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QMainWindow *dialog)
    {
        dialog->setWindowTitle(QApplication::translate("dialog", "MainWindow", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("dialog", "TRADUCTION", Q_NULLPTR)
         << QApplication::translate("dialog", "francais", Q_NULLPTR)
         << QApplication::translate("dialog", "anglais", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("dialog", "Afficher les employ\303\251s", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("dialog", "Modifier ou Supprimer un produit", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("dialog", "Supprimer", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("dialog", "Modifier", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("dialog", "Rechercher les produit", Q_NULLPTR));
        label_21->setText(QApplication::translate("dialog", "<html><head/><body><p>Par prix</p></body></html>", Q_NULLPTR));
        label_24->setText(QApplication::translate("dialog", "<html><head/><body><p>Par Qte</p></body></html>", Q_NULLPTR));
        label_25->setText(QApplication::translate("dialog", "<html><head/><body><p>Par Libell\303\251</p></body></html>", Q_NULLPTR));
        groupBox_16->setTitle(QApplication::translate("dialog", "Extaire Fichier PDF", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("dialog", "Extraire", Q_NULLPTR));
        groupBox_17->setTitle(QApplication::translate("dialog", "Trier les produits", Q_NULLPTR));
        pushButton_27->setText(QApplication::translate("dialog", "Par prix d\303\251croissant", Q_NULLPTR));
        pushButton_28->setText(QApplication::translate("dialog", "Par prix croissant", Q_NULLPTR));
        pushButton_29->setText(QApplication::translate("dialog", "Par libell\303\251", Q_NULLPTR));
        label_26->setText(QString());
        groupBox_18->setTitle(QApplication::translate("dialog", "Afficher les produits", Q_NULLPTR));
        groupBox_19->setTitle(QApplication::translate("dialog", "Modifier ou Supprimer un produit", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("dialog", "Supprimer", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("dialog", "Modifier", Q_NULLPTR));
        groupBox_20->setTitle(QApplication::translate("dialog", "Rechercher les produit", Q_NULLPTR));
        label_27->setText(QApplication::translate("dialog", "<html><head/><body><p>Par prix</p></body></html>", Q_NULLPTR));
        label_28->setText(QApplication::translate("dialog", "<html><head/><body><p>Par Qte</p></body></html>", Q_NULLPTR));
        label_29->setText(QApplication::translate("dialog", "<html><head/><body><p>Par Libell\303\251</p></body></html>", Q_NULLPTR));
        groupBox_21->setTitle(QApplication::translate("dialog", "Extaire Fichier PDF", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("dialog", "Extraire", Q_NULLPTR));
        groupBox_22->setTitle(QApplication::translate("dialog", "Trier les produits", Q_NULLPTR));
        pushButton_30->setText(QApplication::translate("dialog", "Par prix d\303\251croissant", Q_NULLPTR));
        pushButton_31->setText(QApplication::translate("dialog", "Par prix croissant", Q_NULLPTR));
        pushButton_32->setText(QApplication::translate("dialog", "Par libell\303\251", Q_NULLPTR));
        label_30->setText(QString());
        groupBox_23->setTitle(QApplication::translate("dialog", "Ajouter un produit", Q_NULLPTR));
        pushButton_VAL_AJ_3->setText(QApplication::translate("dialog", "Valider", Q_NULLPTR));
        pushButton_QUIT_AJ_3->setText(QApplication::translate("dialog", "Quitter", Q_NULLPTR));
        label_31->setText(QApplication::translate("dialog", "id\302\260 Produit", Q_NULLPTR));
        label_32->setText(QApplication::translate("dialog", "<html><head/><body><p><span style=\" font-size:12pt;\">Prix</span></p></body></html>", Q_NULLPTR));
        label_33->setText(QApplication::translate("dialog", "<html><head/><body><p><span style=\" font-size:12pt;\">Fournisseur_P</span></p></body></html>", Q_NULLPTR));
        label_34->setText(QApplication::translate("dialog", "<html><head/><body><p><span style=\" font-size:12pt;\">Libelle_P</span></p></body></html>", Q_NULLPTR));
        label_35->setText(QApplication::translate("dialog", "<html><head/><body><p><span style=\" font-size:12pt;\">Qte</span></p></body></html>", Q_NULLPTR));
        label_36->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("dialog", "Produit", Q_NULLPTR));
        label_37->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(s), QApplication::translate("dialog", "Statistique", Q_NULLPTR));
        label_38->setText(QString());
        label_5->setText(QApplication::translate("dialog", "detecteur", Q_NULLPTR));
        label_6->setText(QString());
        pushButton_stop->setText(QApplication::translate("dialog", "STOP Alert", Q_NULLPTR));
        label_39->setText(QString());
        pushButton_alert->setText(QApplication::translate("dialog", "Alert", Q_NULLPTR));
        label_40->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("dialog", "arduino", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
