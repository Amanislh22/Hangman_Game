#include "mainwindow.h"

#include <QApplication>

#include "play_music.h"

#include "key_board.h""
#include <QtWidgets>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    MainWindow window;
    Key_board key_wid;
//    play_music play_audio ;
//    play_audio.show();
    window.show();
    key_wid.show();
    return app.exec();
}
