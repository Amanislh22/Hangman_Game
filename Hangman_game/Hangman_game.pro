QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    game_setting.cpp \
    key_board.cpp \
    main.cpp \
    mainwindow.cpp \
    play_music.cpp \
    single_player.cpp

HEADERS += \
    game_setting.h \
    key_board.h \
    mainwindow.h \
    play_music.h \
    single_player.h

FORMS += \
    game_setting.ui \
    key_board.ui \
    mainwindow.ui \
    play_music.ui \
    single_player.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
