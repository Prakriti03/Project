QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    apparels_and_accessories.cpp \
    automobiles.cpp \
    beauty_and_health.cpp \
    homepage.cpp \
    main.cpp \
    mainwindow.cpp \
    sellproduct.cpp \
    signuppage.cpp

HEADERS += \
    apparels_and_accessories.h \
    automobiles.h \
    beauty_and_health.h \
    homepage.h \
    mainwindow.h \
    sellproduct.h \
    signuppage.h

FORMS += \
    apparels_and_accessories.ui \
    automobiles.ui \
    beauty_and_health.ui \
    homepage.ui \
    mainwindow.ui \
    sellproduct.ui \
    signuppage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
