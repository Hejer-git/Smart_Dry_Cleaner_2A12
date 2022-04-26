QT       += core gui sql
QT += core gui multimedia
QT += qml quick
QT += core gui serialport
TRANSLATIONS += fr.ts en.ts
QT       += core gui charts
QT += printsupport
    quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = Atelier_Connexion
TEMPLATE = app
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    client.cpp \
    commandes.cpp \
    dialog.cpp \
    dialog1.cpp \
    dialog2.cpp \
    dialog3.cpp \
    dialog4.cpp \
    dialog5.cpp \
    employe.cpp \
    excel.cpp \
    historique.cpp \
    livraison.cpp \
    machine.cpp \
    main.cpp \
    mainwindow.cpp\
    connection.cpp \
    piechart.cpp \
    produit.cpp \
    qr.cpp \
    smtp.cpp

HEADERS += \
    ../../../Nouveau dossier (3)/livraison.h \
    arduino.h \
    client.h \
    commandes.h \
    dialog.h \
    dialog1.h \
    dialog2.h \
    dialog3.h \
    dialog4.h \
    dialog5.h \
    employe.h \
    excel.h \
    historique.h \
    livraison.h \
    machine.h \
    mainwindow.h\
    connection.h \
    produit.h \
    qr.h \
    smtp.h

FORMS += \
    dialog.ui \
    dialog1.ui \
    dialog2.ui \
    dialog3.ui \
    dialog4.ui \
    dialog5.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    15190.jpg \
    Breaking News.mp3

RESOURCES += \
    recource.qrc \
    translation.qrc
