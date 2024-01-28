QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    key_board.cpp \
    main.cpp \
    mainwindow.cpp \
    notification.cpp \
    perdu.cpp \
    play_music.cpp \
    single_player.cpp

HEADERS += \
    key_board.h \
    mainwindow.h \
    notification.h \
    perdu.h \
    play_music.h \
    single_player.h

FORMS += \
    key_board.ui \
    mainwindow.ui \
    notification.ui \
    perdu.ui \
    play_music.ui \
    single_player.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    smile.jpg
