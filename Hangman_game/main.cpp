#include "mainwindow.h"

#include <QApplication>
#include "api_request.h"

#include <QtWidgets>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    MainWindow window;
    Api_request api ;
    api.request_api("cassette",3);

    window.show();

    return app.exec();
}
