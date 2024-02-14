#ifndef GAME_SETTINGS_H
#define GAME_SETTINGS_H

#include <QWidget>
#include"state.h"
#include "dic.h"
#include "BinaryTree.h"
namespace Ui {
class game_settings;
}

class game_settings : public QWidget
{
    Q_OBJECT

public:
    explicit game_settings(QWidget *parent = nullptr);
    ~game_settings();
    void disaply_tree( );


private slots:
    void on_open_file_btn_clicked();

    void on_add_word_file_btn_clicked();

    void on_remove_word_btn_clicked();

    void on_max_num_lifes_spinBox_valueChanged(int arg1);

    void on_max_socre_spinBox_valueChanged(int arg1);

    void on_remove_word_tree_btn_clicked();

    void on_add_word_tree_btn_clicked();
    void on_lang_comboBox_currentTextChanged(const  QString &arg1);
signals:
    void update_dict_language(const QString& arg1);
public:


    int get_num_lines() ;
    void  set_path(QString);


    QString  get_file_path();

    void clear_tree();
    QString set_word_to_guess(int mode);
    void load_tree();
    void init_file_management();
    int check_user_input(QChar key,QString  w,int* arr);
    void Find_word(QString  w);
    void init_tree();
    QString get_language();
//    void reset_g
//    void set_file_path(QString );
private:
    Ui::game_settings *ui;
    QStringList list;
    Dictionary dict;
    BinaryTree tree;
    int num_lines;
    QString dict_path="/home/moktar/Hangman_Game/Hangman_game/dic.txt";
    void set_num_lines_label( );
    void update_list_words_combox(int sate,QStringList  list); // update the Qcombox of eitheir the file or tree
};

#endif // GAME_SETTINGS_H
