#include "game_settings.h"
#include "ui_game_settings.h"
#include <QFileDialog>
game_settings::game_settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game_settings)
{
    ui->setupUi(this);

}

game_settings::~game_settings()
{
    delete ui;
}

void game_settings::disaply_tree()
{
    QString tree_data;
    tree.printTree(tree.root,tree_data);
    ui->tree_layout_text->clear();
    ui->tree_layout_text->setText(tree_data);
}

void game_settings::on_open_file_btn_clicked()
{
    dict_path = QFileDialog::getOpenFileName(this,tr("Open Text File"), QDir::homePath(), tr("Text Files (*.txt)"));
    if ( !dict_path.isEmpty())
    {
        ui->path_file_edit->setText(dict_path);
        init_file_management();
    }
        //    qDebug()<<file;
}


void game_settings::on_add_word_file_btn_clicked()
{
    QString word = ui->add_word_file_edit->text();
    QStringList l;
    l.append(word);
    if ( !word.isEmpty()  )
    {
        dict.writeFile(l);
        qDebug()<<word;
        // udpate file
        init_file_management();
        ui->add_word_file_edit->clear();
    }

 }


void game_settings::on_remove_word_btn_clicked()
{
    QString word = ui->remove_word_file_edit->text();

    if ( !word.isEmpty() )
    {
        qDebug()<<word;
        dict.deleteWordFromFile(word);
        init_file_management();
        // udpate file
        ui->remove_word_file_edit->clear();
    }
}


void game_settings::on_max_num_lifes_spinBox_valueChanged(int arg1)
{

}


void game_settings::on_max_socre_spinBox_valueChanged(int arg1)
{

}


void game_settings::on_remove_word_tree_btn_clicked()
{

}


void game_settings::on_add_word_tree_btn_clicked()
{

}
void game_settings::clear_tree()
{
    tree = BinaryTree() ;
    tree.Clear_tree(tree.root);
    ui->tree_layout_text->clear();

}
void game_settings::load_tree()
{
//    init_file_management();
    QStringList list;
    dict.readFile(list);
    for ( int i=0; i<list.length();i++)
        tree.root = tree.insert_word(tree.root,list[i]);
    update_list_words_combox(Tree,list);
    list.clear();

}

void game_settings::init_file_management()
{
//    QString path = ui->path_file_edit->text();
//    if ( dict_path.isEmpty())
    dict_path= "/home/moktar/Hangman_Game/Hangman_game/dic.txt";
    dict.set_dic_path(dict_path);
    dict.sortFile();
//    num_lines = dict.get_number_lines();
    QStringList list;
    dict.readFile(list);
    num_lines = list.length();
    set_num_lines_label();
    update_list_words_combox(File,list);
    list.clear();
}

int game_settings::check_user_input(QChar key,QString  w,int* arr)
{
    int len = tree.check_user_input(tree.root,w,key,w.length(),arr);
    return len;
}
void game_settings::Find_word(QString  w)
{
    tree.Find_Word(tree.root,w,w.length());

}
void game_settings::update_list_words_combox(int state, QStringList&  list)
{
    if ( state == File)
    {
        ui->file_qcombox->clear();
        ui->file_qcombox->insertItems(0,list);
    }
    else if (state == Tree ){
        ui->file_qcombox->clear();
        ui->list_words_tree_combox->insertItems(0,list);
    }
}

void game_settings::set_num_lines_label()
{
    ui->num_words_file_label->setText(QString ("num words %1").arg(num_lines));
}
QString game_settings::set_word_to_guess(int mode )
{
    QString word_to_guess;
    word_to_guess= dict.get_word(0,false);
    return word_to_guess;
}


