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

void Key_board::enable_keyboard(bool x)
{

    ui->pushButton_A->setEnabled(x);
    ui->pushButton_B->setEnabled(x);
    ui->pushButton_C->setEnabled(x);
    ui->pushButton_D->setEnabled(x);
    ui->pushButton_E->setEnabled(x);
    ui->pushButton_F->setEnabled(x);
    ui->pushButton_G->setEnabled(x);
    ui->pushButton_H->setEnabled(x);
    ui->pushButton_I->setEnabled(x);
    ui->pushButton_J->setEnabled(x);
    ui->pushButton_K->setEnabled(x);
    ui->pushButton_L->setEnabled(x);
    ui->pushButton_M->setEnabled(x);
    ui->pushButton_N->setEnabled(x);
    ui->pushButton_O->setEnabled(x);
    ui->pushButton_P->setEnabled(x);
    ui->pushButton_Q->setEnabled(x);
    ui->pushButton_R->setEnabled(x);
    ui->pushButton_S->setEnabled(x);
    ui->pushButton_T->setEnabled(x);
    ui->pushButton_U->setEnabled(x);
    ui->pushButton_V->setEnabled(x);
    ui->pushButton_W->setEnabled(x);
    ui->pushButton_X->setEnabled(x);
    ui->pushButton_Y->setEnabled(x);
    ui->pushButton_Z->setEnabled(x);

}

void Key_board::disable_key(QChar key)
{
    switch (key.unicode()) {
    case 'a':
        ui->pushButton_A->setEnabled(false);
        break;
    case 'b':
        ui->pushButton_B->setEnabled(false);
        break;
    case 'c':
        ui->pushButton_C->setEnabled(false);
        break;
    case 'd':
        ui->pushButton_D->setEnabled(false);
        break;
    case 'e':
        ui->pushButton_E->setEnabled(false);
        break;
    case 'f':
        ui->pushButton_F->setEnabled(false);
        break;
    case 'g':
        ui->pushButton_G->setEnabled(false);
        break;
    case 'h':
        ui->pushButton_H->setEnabled(false);
        break;
    case 'i':
        ui->pushButton_I->setEnabled(false);
        break;
    case 'j':
        ui->pushButton_J->setEnabled(false);
        break;
    case 'k':
        ui->pushButton_K->setEnabled(false);
        break;
    case 'l':
        ui->pushButton_L->setEnabled(false);
        break;
    case 'm':
        ui->pushButton_M->setEnabled(false);
        break;
    case 'n':
        ui->pushButton_N->setEnabled(false);
        break;
    case 'o':
        ui->pushButton_O->setEnabled(false);
        break;
    case 'p':
        ui->pushButton_P->setEnabled(false);
        break;
    case 'q':
        ui->pushButton_Q->setEnabled(false);
        break;
    case 'r':
        ui->pushButton_R->setEnabled(false);
        break;
    case 's':
        ui->pushButton_S->setEnabled(false);
        break;
    case 't':
        ui->pushButton_T->setEnabled(false);
        break;
    case 'u':
        ui->pushButton_U->setEnabled(false);
        break;
    case 'v':
        ui->pushButton_V->setEnabled(false);
        break;
    case 'w':
        ui->pushButton_W->setEnabled(false);
        break;
    case 'x':
        ui->pushButton_X->setEnabled(false);
        break;
    case 'y':
        ui->pushButton_Y->setEnabled(false);
        break;
    case 'z':
        ui->pushButton_Z->setEnabled(false);
        break;
    default:
        // Code to execute if key does not match any of the alphabet letters
        break;
    }

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
    if ( !charv.isNull())
    {

    ui->lineEdit->clear();
    emit sendKeyboardInput(charv);
    }
}
