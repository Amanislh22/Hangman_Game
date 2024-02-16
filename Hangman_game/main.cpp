#include "mainwindow.h"

#include <QApplication>

#include <QtWidgets>
#include "dic.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    MainWindow window;

    qDebug()<<QDir::currentPath();




    window.show();

    return app.exec();
}
