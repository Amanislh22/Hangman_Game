/********************************************************************************
** Form generated from reading UI file 'key_board.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEY_BOARD_H
#define UI_KEY_BOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Key_board
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *pushButton_J;
    QPushButton *pushButton_S;
    QPushButton *pushButton_W;
    QPushButton *pushButton_DEL;
    QPushButton *pushButton_Y;
    QPushButton *pushButton_T;
    QPushButton *pushButton_G;
    QPushButton *pushButton_L;
    QPushButton *pushButton_O;
    QPushButton *pushButton_V;
    QPushButton *pushButton_K;
    QPushButton *pushButton_B;
    QPushButton *pushButton_A;
    QPushButton *pushButton_R;
    QPushButton *pushButton_I;
    QPushButton *pushButton_Enter;
    QPushButton *pushButton_Q;
    QPushButton *pushButton_U;
    QPushButton *pushButton_D;
    QPushButton *pushButton_E;
    QPushButton *pushButton_Z;
    QPushButton *pushButton_F;
    QPushButton *pushButton_M;
    QPushButton *pushButton_C;
    QPushButton *pushButton_H;
    QPushButton *pushButton_N;
    QPushButton *pushButton_P;
    QPushButton *pushButton_X;

    void setupUi(QWidget *Key_board)
    {
        if (Key_board->objectName().isEmpty())
            Key_board->setObjectName(QString::fromUtf8("Key_board"));
        Key_board->resize(490, 400);
        Key_board->setMinimumSize(QSize(490, 400));
        Key_board->setMaximumSize(QSize(490, 400));
        verticalLayout = new QVBoxLayout(Key_board);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(Key_board);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMaximumSize(QSize(16777215, 90));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 0));
        lineEdit->setMaximumSize(QSize(80, 80));
        lineEdit->setMaxLength(1);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setClearButtonEnabled(false);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(Key_board);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_J = new QPushButton(frame);
        pushButton_J->setObjectName(QString::fromUtf8("pushButton_J"));
        pushButton_J->setMinimumSize(QSize(50, 30));
        pushButton_J->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_J, 2, 4, 1, 1);

        pushButton_S = new QPushButton(frame);
        pushButton_S->setObjectName(QString::fromUtf8("pushButton_S"));
        pushButton_S->setMinimumSize(QSize(50, 30));
        pushButton_S->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_S, 4, 1, 1, 1);

        pushButton_W = new QPushButton(frame);
        pushButton_W->setObjectName(QString::fromUtf8("pushButton_W"));
        pushButton_W->setMinimumSize(QSize(50, 30));
        pushButton_W->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_W, 4, 6, 1, 1);

        pushButton_DEL = new QPushButton(frame);
        pushButton_DEL->setObjectName(QString::fromUtf8("pushButton_DEL"));
        pushButton_DEL->setMinimumSize(QSize(50, 30));
        pushButton_DEL->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(pushButton_DEL, 0, 8, 1, 1);

        pushButton_Y = new QPushButton(frame);
        pushButton_Y->setObjectName(QString::fromUtf8("pushButton_Y"));
        pushButton_Y->setMinimumSize(QSize(50, 30));
        pushButton_Y->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_Y, 5, 3, 1, 1);

        pushButton_T = new QPushButton(frame);
        pushButton_T->setObjectName(QString::fromUtf8("pushButton_T"));
        pushButton_T->setMinimumSize(QSize(50, 30));
        pushButton_T->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_T, 4, 2, 1, 1);

        pushButton_G = new QPushButton(frame);
        pushButton_G->setObjectName(QString::fromUtf8("pushButton_G"));
        pushButton_G->setMinimumSize(QSize(50, 30));
        pushButton_G->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_G, 2, 1, 1, 1);

        pushButton_L = new QPushButton(frame);
        pushButton_L->setObjectName(QString::fromUtf8("pushButton_L"));
        pushButton_L->setMinimumSize(QSize(50, 30));
        pushButton_L->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_L, 2, 7, 1, 1);

        pushButton_O = new QPushButton(frame);
        pushButton_O->setObjectName(QString::fromUtf8("pushButton_O"));
        pushButton_O->setMinimumSize(QSize(50, 30));
        pushButton_O->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_O, 3, 3, 1, 1);

        pushButton_V = new QPushButton(frame);
        pushButton_V->setObjectName(QString::fromUtf8("pushButton_V"));
        pushButton_V->setMinimumSize(QSize(50, 30));
        pushButton_V->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_V, 4, 4, 1, 2);

        pushButton_K = new QPushButton(frame);
        pushButton_K->setObjectName(QString::fromUtf8("pushButton_K"));
        pushButton_K->setMinimumSize(QSize(50, 30));
        pushButton_K->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_K, 2, 5, 1, 2);

        pushButton_B = new QPushButton(frame);
        pushButton_B->setObjectName(QString::fromUtf8("pushButton_B"));
        pushButton_B->setMinimumSize(QSize(50, 30));
        pushButton_B->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_B, 1, 2, 1, 1);

        pushButton_A = new QPushButton(frame);
        pushButton_A->setObjectName(QString::fromUtf8("pushButton_A"));
        pushButton_A->setMinimumSize(QSize(50, 30));
        pushButton_A->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_A, 1, 1, 1, 1);

        pushButton_R = new QPushButton(frame);
        pushButton_R->setObjectName(QString::fromUtf8("pushButton_R"));
        pushButton_R->setMinimumSize(QSize(50, 30));
        pushButton_R->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_R, 3, 7, 1, 1);

        pushButton_I = new QPushButton(frame);
        pushButton_I->setObjectName(QString::fromUtf8("pushButton_I"));
        pushButton_I->setMinimumSize(QSize(50, 30));
        pushButton_I->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_I, 2, 3, 1, 1);

        pushButton_Enter = new QPushButton(frame);
        pushButton_Enter->setObjectName(QString::fromUtf8("pushButton_Enter"));
        pushButton_Enter->setMinimumSize(QSize(50, 30));
        pushButton_Enter->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(pushButton_Enter, 0, 0, 1, 1);

        pushButton_Q = new QPushButton(frame);
        pushButton_Q->setObjectName(QString::fromUtf8("pushButton_Q"));
        pushButton_Q->setMinimumSize(QSize(50, 30));
        pushButton_Q->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_Q, 3, 5, 1, 2);

        pushButton_U = new QPushButton(frame);
        pushButton_U->setObjectName(QString::fromUtf8("pushButton_U"));
        pushButton_U->setMinimumSize(QSize(50, 30));
        pushButton_U->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_U, 4, 3, 1, 1);

        pushButton_D = new QPushButton(frame);
        pushButton_D->setObjectName(QString::fromUtf8("pushButton_D"));
        pushButton_D->setMinimumSize(QSize(50, 30));
        pushButton_D->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_D, 1, 4, 1, 1);

        pushButton_E = new QPushButton(frame);
        pushButton_E->setObjectName(QString::fromUtf8("pushButton_E"));
        pushButton_E->setMinimumSize(QSize(50, 30));
        pushButton_E->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_E, 1, 5, 1, 2);

        pushButton_Z = new QPushButton(frame);
        pushButton_Z->setObjectName(QString::fromUtf8("pushButton_Z"));
        pushButton_Z->setMinimumSize(QSize(50, 30));
        pushButton_Z->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_Z, 5, 4, 1, 2);

        pushButton_F = new QPushButton(frame);
        pushButton_F->setObjectName(QString::fromUtf8("pushButton_F"));
        pushButton_F->setMinimumSize(QSize(50, 30));
        pushButton_F->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_F, 1, 7, 1, 1);

        pushButton_M = new QPushButton(frame);
        pushButton_M->setObjectName(QString::fromUtf8("pushButton_M"));
        pushButton_M->setMinimumSize(QSize(50, 30));
        pushButton_M->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_M, 3, 1, 1, 1);

        pushButton_C = new QPushButton(frame);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setMinimumSize(QSize(50, 30));
        pushButton_C->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_C, 1, 3, 1, 1);

        pushButton_H = new QPushButton(frame);
        pushButton_H->setObjectName(QString::fromUtf8("pushButton_H"));
        pushButton_H->setMinimumSize(QSize(50, 30));
        pushButton_H->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_H, 2, 2, 1, 1);

        pushButton_N = new QPushButton(frame);
        pushButton_N->setObjectName(QString::fromUtf8("pushButton_N"));
        pushButton_N->setMinimumSize(QSize(50, 30));
        pushButton_N->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_N, 3, 2, 1, 1);

        pushButton_P = new QPushButton(frame);
        pushButton_P->setObjectName(QString::fromUtf8("pushButton_P"));
        pushButton_P->setMinimumSize(QSize(50, 30));
        pushButton_P->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_P, 3, 4, 1, 1);

        pushButton_X = new QPushButton(frame);
        pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
        pushButton_X->setMinimumSize(QSize(50, 30));
        pushButton_X->setMaximumSize(QSize(50, 30));

        gridLayout->addWidget(pushButton_X, 4, 7, 1, 1);


        verticalLayout->addWidget(frame);


        retranslateUi(Key_board);
        QObject::connect(pushButton_DEL, &QPushButton::clicked, lineEdit, qOverload<>(&QLineEdit::clear));

        QMetaObject::connectSlotsByName(Key_board);
    } // setupUi

    void retranslateUi(QWidget *Key_board)
    {
        Key_board->setWindowTitle(QCoreApplication::translate("Key_board", "Form", nullptr));
        pushButton_J->setText(QCoreApplication::translate("Key_board", "J", nullptr));
        pushButton_S->setText(QCoreApplication::translate("Key_board", "S", nullptr));
        pushButton_W->setText(QCoreApplication::translate("Key_board", "W", nullptr));
        pushButton_DEL->setText(QCoreApplication::translate("Key_board", "Del", nullptr));
        pushButton_Y->setText(QCoreApplication::translate("Key_board", "Y", nullptr));
        pushButton_T->setText(QCoreApplication::translate("Key_board", "T", nullptr));
        pushButton_G->setText(QCoreApplication::translate("Key_board", "G", nullptr));
        pushButton_L->setText(QCoreApplication::translate("Key_board", "L", nullptr));
        pushButton_O->setText(QCoreApplication::translate("Key_board", "O", nullptr));
        pushButton_V->setText(QCoreApplication::translate("Key_board", "V", nullptr));
        pushButton_K->setText(QCoreApplication::translate("Key_board", "K", nullptr));
        pushButton_B->setText(QCoreApplication::translate("Key_board", "B", nullptr));
        pushButton_A->setText(QCoreApplication::translate("Key_board", "A", nullptr));
        pushButton_R->setText(QCoreApplication::translate("Key_board", "R", nullptr));
        pushButton_I->setText(QCoreApplication::translate("Key_board", "I", nullptr));
        pushButton_Enter->setText(QCoreApplication::translate("Key_board", "Enter", nullptr));
        pushButton_Q->setText(QCoreApplication::translate("Key_board", "Q", nullptr));
        pushButton_U->setText(QCoreApplication::translate("Key_board", "U", nullptr));
        pushButton_D->setText(QCoreApplication::translate("Key_board", "D", nullptr));
        pushButton_E->setText(QCoreApplication::translate("Key_board", "E", nullptr));
        pushButton_Z->setText(QCoreApplication::translate("Key_board", "Z", nullptr));
        pushButton_F->setText(QCoreApplication::translate("Key_board", "F", nullptr));
        pushButton_M->setText(QCoreApplication::translate("Key_board", "M", nullptr));
        pushButton_C->setText(QCoreApplication::translate("Key_board", "C", nullptr));
        pushButton_H->setText(QCoreApplication::translate("Key_board", "H", nullptr));
        pushButton_N->setText(QCoreApplication::translate("Key_board", "N", nullptr));
        pushButton_P->setText(QCoreApplication::translate("Key_board", "P", nullptr));
        pushButton_X->setText(QCoreApplication::translate("Key_board", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Key_board: public Ui_Key_board {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEY_BOARD_H
