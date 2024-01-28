/********************************************************************************
** Form generated from reading UI file 'play_music.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_MUSIC_H
#define UI_PLAY_MUSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_play_music
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSlider *Slider_progress;
    QLabel *volume_label;
    QSlider *Slider_Volume;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *play_music)
    {
        if (play_music->objectName().isEmpty())
            play_music->setObjectName(QString::fromUtf8("play_music"));
        play_music->resize(536, 134);
        verticalLayout = new QVBoxLayout(play_music);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(play_music);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        Slider_progress = new QSlider(play_music);
        Slider_progress->setObjectName(QString::fromUtf8("Slider_progress"));
        Slider_progress->setOrientation(Qt::Horizontal);

        formLayout->setWidget(0, QFormLayout::FieldRole, Slider_progress);

        volume_label = new QLabel(play_music);
        volume_label->setObjectName(QString::fromUtf8("volume_label"));
        volume_label->setMinimumSize(QSize(80, 0));

        formLayout->setWidget(1, QFormLayout::LabelRole, volume_label);

        Slider_Volume = new QSlider(play_music);
        Slider_Volume->setObjectName(QString::fromUtf8("Slider_Volume"));
        Slider_Volume->setValue(99);
        Slider_Volume->setOrientation(Qt::Horizontal);

        formLayout->setWidget(1, QFormLayout::FieldRole, Slider_Volume);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(play_music);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(play_music);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(play_music);

        QMetaObject::connectSlotsByName(play_music);
    } // setupUi

    void retranslateUi(QWidget *play_music)
    {
        play_music->setWindowTitle(QCoreApplication::translate("play_music", "Form", nullptr));
        label->setText(QCoreApplication::translate("play_music", "Progress", nullptr));
        volume_label->setText(QCoreApplication::translate("play_music", "Volume    x", nullptr));
        pushButton->setText(QCoreApplication::translate("play_music", "Play", nullptr));
        pushButton_2->setText(QCoreApplication::translate("play_music", "Pause", nullptr));
    } // retranslateUi

};

namespace Ui {
    class play_music: public Ui_play_music {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_MUSIC_H
