QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    BinaryTree.cpp \
    Node.cpp \
    api_request.cpp \
    key_board.cpp \
    main.cpp \
    mainwindow.cpp \
    perdu.cpp \
    play.cpp \
    play_music.cpp \
    set_images.cpp \
    single_player.cpp \
    dic.cpp \
    won.cpp

HEADERS += \
    dic.h \
    BinaryTree.h \
    Node.h \
    api_request.h \
    key_board.h \
    mainwindow.h \
    perdu.h \
    play.h \
    play_music.h \
    set_images.h \
    single_player.h \
    state.h \
    won.h

FORMS += \
    key_board.ui \
    mainwindow.ui \
    perdu.ui \
    play_music.ui \
    single_player.ui \
    won.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    smile.jpg
