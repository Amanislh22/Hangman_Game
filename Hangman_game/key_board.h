#ifndef KEY_BOARD_H
#define KEY_BOARD_H

#include <QWidget>

namespace Ui {
class Key_board;
}

class Key_board : public QWidget
{
    Q_OBJECT

public:
    explicit Key_board(QWidget *parent = nullptr);
    ~Key_board();

private slots:


    void on_pushButton_A_clicked();
    void on_pushButton_B_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_D_clicked();

    void on_pushButton_E_clicked();
    void on_pushButton_F_clicked();

    void on_pushButton_G_clicked();

    void on_pushButton_H_clicked();

    void on_pushButton_I_clicked();

    void on_pushButton_J_clicked();

    void on_pushButton_K_clicked();
    void on_pushButton_L_clicked();

    void on_pushButton_M_clicked();

    void on_pushButton_N_clicked();

    void on_pushButton_O_clicked();

    void on_pushButton_P_clicked();

    void on_pushButton_Q_clicked();
    void on_pushButton_R_clicked();

    void on_pushButton_S_clicked();

    void on_pushButton_T_clicked();

    void on_pushButton_U_clicked();

    void on_pushButton_V_clicked();

    void on_pushButton_W_clicked();

    void on_pushButton_X_clicked();
    void on_pushButton_Y_clicked();
    void on_pushButton_Z_clicked();

    void on_pushButton_Enter_clicked();



private:
    Ui::Key_board *ui;
};

#endif // KEY_BOARD_H
