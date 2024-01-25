#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "play_music.h"
#include <QStackedWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_exit_btn_clicked();

    void on_Home_page_btn_clicked();

    void on_settings_page_btn_clicked();

    void on_volume_settings_clicked();

    void on_Mute_btn_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    play_music* music_wid;
};
#endif // MAINWINDOW_H
