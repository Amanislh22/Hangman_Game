#include "mainwindow.h"

#include <QApplication>

#include "play_music.h"

#include "key_board.h"
#include <QtWidgets>
#include "game_setting.h"
int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    MainWindow window;
    game_setting game_wind;

//    play_music play_audio ;
//    play_audio.show();
    window.show();
    game_wind.show();

    return app.exec();
}
