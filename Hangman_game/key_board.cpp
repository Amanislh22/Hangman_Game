#include "key_board.h"
#include "ui_key_board.h"
#include <QFont>
Key_board::Key_board(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Key_board)
{
    ui->setupUi(this);
    QFont font;
    font.setPointSize(17);
    ui->lineEdit->setFont(font);
}

Key_board::~Key_board()
{
    delete ui;
}




void Key_board::on_pushButton_A_clicked()
{
    ui->lineEdit->setText("a");
}

void Key_board::on_pushButton_B_clicked()
{
 ui->lineEdit->setText("b");
}

void Key_board::on_pushButton_C_clicked()
{
 ui->lineEdit->setText("c");
}

void Key_board::on_pushButton_D_clicked()
{
 ui->lineEdit->setText("d");
}

void Key_board::on_pushButton_E_clicked()
{
 ui->lineEdit->setText("e");
}

void Key_board::on_pushButton_F_clicked()
{
 ui->lineEdit->setText("f");
}

void Key_board::on_pushButton_G_clicked()
{
 ui->lineEdit->setText("g");
}

void Key_board::on_pushButton_H_clicked()
{
    ui->lineEdit->setText("h");
}

void Key_board::on_pushButton_I_clicked()
{
    ui->lineEdit->setText("i");
}

void Key_board::on_pushButton_J_clicked()
{
    ui->lineEdit->setText("j");
}

void Key_board::on_pushButton_K_clicked()
{
    ui->lineEdit->setText("k");
}

void Key_board::on_pushButton_L_clicked()
{
    ui->lineEdit->setText("l");
}

void Key_board::on_pushButton_M_clicked()
{
    ui->lineEdit->setText("m");
}

void Key_board::on_pushButton_N_clicked()
{
    ui->lineEdit->setText("n");
}

void Key_board::on_pushButton_O_clicked()
{
    ui->lineEdit->setText("o");
}

void Key_board::on_pushButton_P_clicked()
{
    ui->lineEdit->setText("p");
}

void Key_board::on_pushButton_Q_clicked()
{
    ui->lineEdit->setText("q");
}

void Key_board::on_pushButton_R_clicked()
{
    ui->lineEdit->setText("r");
}

void Key_board::on_pushButton_S_clicked()
{
    ui->lineEdit->setText("s");
}

void Key_board::on_pushButton_T_clicked()
{
    ui->lineEdit->setText("t");
}

void Key_board::on_pushButton_U_clicked()
{
    ui->lineEdit->setText("u");
}

void Key_board::on_pushButton_V_clicked()
{
    ui->lineEdit->setText("v");
}

void Key_board::on_pushButton_W_clicked()
{
    ui->lineEdit->setText("w");
}

void Key_board::on_pushButton_X_clicked()
{
    ui->lineEdit->setText("x");
}

void Key_board::on_pushButton_Y_clicked()
{
    ui->lineEdit->setText("y");
}

void Key_board::on_pushButton_Z_clicked()
{
    ui->lineEdit->setText("z");
}
 void Key_board::on_pushButton_Enter_clicked()
{
    QString charv= ui->lineEdit->text();
    qDebug()<<charv;
 }
