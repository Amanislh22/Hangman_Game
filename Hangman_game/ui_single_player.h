/********************************************************************************
** Form generated from reading UI file 'single_player.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLE_PLAYER_H
#define UI_SINGLE_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_single_player
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QFrame *frame_2;

    void setupUi(QWidget *single_player)
    {
        if (single_player->objectName().isEmpty())
            single_player->setObjectName(QString::fromUtf8("single_player"));
        single_player->resize(654, 496);
        single_player->setMinimumSize(QSize(654, 496));
        single_player->setMaximumSize(QSize(654, 496));
        horizontalLayout = new QHBoxLayout(single_player);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(single_player);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(single_player);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(160, 0));
        frame_2->setMaximumSize(QSize(160, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame_2);


        retranslateUi(single_player);

        QMetaObject::connectSlotsByName(single_player);
    } // setupUi

    void retranslateUi(QWidget *single_player)
    {
        single_player->setWindowTitle(QCoreApplication::translate("single_player", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class single_player: public Ui_single_player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLE_PLAYER_H
