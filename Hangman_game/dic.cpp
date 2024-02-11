//
// Created by amani on 13/01/24.
//
#include <cstdlib>
#include "dic.h"
#include <QRandomGenerator>
Dictionary::Dictionary(){

}
void Dictionary::set_dic_path(QString path)
{
    path_dic= path ;
}
void Dictionary::set_res_path(QString path)
{
    path_res= path;
}
void Dictionary::sortFile( ) {

    char command[256];

    // Convert QString to const char* for use in the sort command
    const char* out = qPrintable(path_res);
    const char* in = qPrintable(path_dic);
    qDebug()<< "n" <<path_dic<< "b"<<path_res;

    qDebug()<<out <<in;
    snprintf(command, sizeof(command), "sort -o %s %s", out, in);

    // Use the system function to execute the sort command
    int result = system(command);

    // Check the result of the system call
    if (result == 0) {
        printf("Sorting successful.\n");
    } else {
        fprintf(stderr, "Sorting failed.\n");
    }

}
int  Dictionary::get_number_lines(){

    num_lines=0;
    QFile file(path_res);
    if (!file.open(QIODevice::ReadOnly))
        {
        qDebug() << "Failed to open file for reading:" << file.errorString();
        file.close();
        return 0;
        }
    QTextStream in(&file);

    while (!in.atEnd()) {
        in.readLine();
        num_lines ++;
    }
//    qDebug()<< "max _lines "<<num_lines;    // Close the file
    file.close();

    return 0;
}
int Dictionary::get_random_line() {
    if (num_lines <= 0) {
        qDebug()<<"no max lines ";
        // Handle the case where num_lines is not properly initialized or is zero
        return -1; // Or any other appropriate error code
    }

    int num;
    bool state = false;
    do {
        num = QRandomGenerator::global()->bounded(min, num_lines + 1);
        if (!prevwords.contains(num)) {
//            qDebug() << "rand" << num;
            state = true;
            prevwords.append(num);
            return num;
        }
    } while (!state);

    return num;
}
QString Dictionary::get_word(int l , bool state )
{

    QString word;
    int line;
    get_number_lines();
    if ( l <= num_lines && l !=0 && state  )
    {
        line = l ;
    }
    else
        line =get_random_line();
    QFile file(path_res);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for reading:" << file.errorString();
        file.close();
        return QString();
    }

    // Create a QTextStream object
    QTextStream in(&file);
    int it=1;
    // Read and output the file content line by line
    while (!in.atEnd()) {
        word = in.readLine();
        if (   it == line  )
        {
            qDebug() << line<<word;
            return word ;
        }
        it++;
    }

    // Close the file
    file.close();

    return QString();
}

void Dictionary::readFile(QStringList& list) {
    QFile file(path_res);
    // Open the file in read-only mode
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for reading:" << file.errorString();
        file.close();
        return ;
    }

    // Create a QTextStream object
    QTextStream in(&file);

    // Read and output the file content line by line
    while (!in.atEnd()) {
        QString line = in.readLine();
        list.append(line);
//        qDebug() << line;
    }

    // Close the file
    file.close();
    return ;
}
void Dictionary::writeFile(QStringList &lines)
{
    // Create a QFile object
    QFile file(path_res);

    // Open the file in write-only mode
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Failed to open file for writing:" << file.errorString();
        file.close();
        return;
    }

    // Create a QTextStream object
    QTextStream out(&file);

    // Write lines to the file
    for ( QString& line : lines) {
        out << line << "\n";
    }
    file.close();

}
