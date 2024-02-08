#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "play_music.h"
#include <QStackedWidget>
#include "key_board.h"
#include "BinaryTree.h"
#include <iostream>
#include <cstring>
#include <QTableWidget>
#include <QTableWidgetItem>
#include "set_images.h"
#include "won.h"
#include "perdu.h"
#include "api_request.h"
//#include "File_manipulation/dic.h"
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

    void on_single_plyer_btn_clicked();

    void on_hint_btn_clicked();

public slots:
    void RecieveKyeboradInput(QString& message );
    void set_playing_state(int state);
public:
//    void get_word_from_user(int size,Node* root,char* guessed_word  );
//    int check_user_input(Node* root,char* guessed_word,char user_in, int len, int *arr) ;
//    void  set_up_word(char*  word_toguess, int len_str);
//    void update_guessed_word(char* word_toguess, int *arr, char c, int len_arr)  ;
    void create_table(int num_cols);
    void clear_table_frame();

    void show_image(QPixmap* pic);
    void judge(bool correct,int occ=0);
    void set_score_label(int scr);
    void set_num_trials_label(int num);
    void show_hearst(QPixmap* pic , int num );
    void reset_game();
    void calculate_penalty();
//    void show_hearts()


private:
    Ui::MainWindow *ui;
    play_music* music_wid;
    Key_board* keyboard_wid;
    QTableWidget *tableWidget;
    Set_images set_img;
    Won* win_notif;
    Api_request api ;
    int max_hint_words=3;
    perdu* lost_notif;
    BinaryTree tree;
    const int  tab_size=11;
    int num_error_trials=9;
    int corret_answ=0;
    int score=0;
    int penalty=5;
    QVector<QString> arr = {"cas", "cassette", "ce", "ces", "ci", "de", "des", "don", "fas", "font", "kas"};
    QString word_to_guess="cassette";
    QVector<QTableWidgetItem*> itemVector;

};
#endif // MAINWINDOW_H
