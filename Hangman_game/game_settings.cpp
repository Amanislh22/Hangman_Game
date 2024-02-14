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
    tree_data.clear();
}

void game_settings::on_open_file_btn_clicked()
{
    dict_path = QFileDialog::getOpenFileName(this,tr("Open Text File"), QDir::homePath(), tr("Text Files (*.txt)"));
    if ( !dict_path.isEmpty())
    {
              qDebug()<<dict_path;
        ui->path_file_edit->setText(dict_path);
        init_tree();
    }

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
    QString word = ui->remove_word_tree_edit->text();
    if (word.isEmpty())
        return ;
    QStringList l;
    QString s="";
    tree.get_allWords(s,l,tree.root);
    int index = l.indexOf(word);
    if (index<0)
    {
        qDebug()<< "word doesn't exist";
        return;
    }
    word = word.toLower();
    l.removeAt(index);
    l.sort();
    clear_tree();

    for ( int i=0; i<l.length();i++)
        tree.root = tree.insert_word(tree.root,l[i]);

    disaply_tree();
    l.clear();
    s.clear();
    tree.get_allWords(s,l,tree.root);
    update_list_words_combox(Tree,l);
    l.clear();
    ui->remove_word_tree_edit->clear();
}


void game_settings::on_add_word_tree_btn_clicked()
{
    QString word = ui->add_word_tree_edit->text();
    if (word.isEmpty())
        return ;
    QStringList l;
    QString s="";
    tree.get_allWords(s,l,tree.root);
    if ( l.contains(word))
    {
        qDebug()<< "word already exist";
        return;
    }
    word = word.toLower();
    l.append(word);
    l.sort();
    clear_tree();

    for ( int i=0; i<l.length();i++)
        tree.root = tree.insert_word(tree.root,l[i]);

    disaply_tree();
    l.clear();
    s.clear();
    tree.get_allWords(s,l,tree.root);
    update_list_words_combox(Tree,l);
//    update_list_words_combox(Tree,l);
    l.clear();
    ui->add_word_tree_edit->clear();
}
void game_settings::clear_tree()
{
    tree.Clear_tree(tree.root);
    tree = BinaryTree() ;
    ui->tree_layout_text->clear();

}
void game_settings::load_tree()
{
//    init_file_management();

    QStringList list;
    dict.readFile(list);

    for ( int i=0; i<list.length();i++)
        tree.root = tree.insert_word(tree.root,list[i]);


    list.clear();

}
void game_settings::init_tree()
{
   clear_tree();
   init_file_management();
   load_tree();
   QStringList l;
   QString s="";
   tree.get_allWords(s,l,tree.root);
   update_list_words_combox(Tree,l);
   l.clear();


   disaply_tree();


}

QString game_settings::get_language()
{
   return ui->lang_comboBox->currentText();
}
void game_settings::init_file_management()
{
//     dict_path = ui->path_file_edit->text();
    if ( dict_path.isEmpty())
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
void game_settings::update_list_words_combox(int state, QStringList  list)
{
    if ( state == File)
    {
        QStringList l;
        QString s="";
//        tree.get_allWords(s,l,tree.root);

        ui->file_qcombox->clear();
        ui->file_qcombox->insertItems(0,list);
        l.clear();
    }
    else if (state == Tree ){
        ui->list_words_tree_combox->clear();
        qDebug()<<list;
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



void game_settings::on_lang_comboBox_currentTextChanged(const  QString &arg1)
{
    emit update_dict_language(arg1);
}

