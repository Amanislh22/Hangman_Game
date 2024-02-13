//
// Created by amani on 13/01/24.
//

#ifndef HANGMAN_GAME_DIC_H
#define HANGMAN_GAME_DIC_H
#include <QFile>
#include <QTextStream>
#include <QtDebug>
class Dictionary
{

public:
    Dictionary();

    void sortFile();

    void readFile(QStringList &list);

    QString get_word();
    void writeFile( QStringList &lines);
    int  get_number_lines();
    int get_random_line();
    QString get_word(int l , bool state );
    void set_res_path(QString path);
    void set_dic_path(QString path);
    void deleteWordFromFile( QString& wordToDelete);

public:
    QString path_res= "/home/moktar/Hangman_Game/Hangman_game/result.txt";
    QString path_dic;
    int num_lines =0;
    QList<int> prevwords;
    int min=1;
};

#endif //HANGMAN_GAME_DIC_H
