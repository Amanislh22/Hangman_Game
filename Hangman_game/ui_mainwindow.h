/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Mute_btn;
    QLabel *volume_label_main;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *minimize_btn;
    QPushButton *maximize_tn;
    QPushButton *exit_btn;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Home_page_btn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *settings_page_btn;
    QSpacerItem *verticalSpacer;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_7;
    QStackedWidget *stackedWidget;
    QWidget *game_apge;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_4;
    QFrame *frame_14;
    QGridLayout *gridLayout;
    QPushButton *single_plyer_btn;
    QLabel *label_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *multi_player_btn;
    QFrame *frame_15;
    QWidget *Game_single_player_mode;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame_16;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_21;
    QFrame *frame_20;
    QVBoxLayout *verticalLayout_15;
    QWidget *widget_keyboard;
    QVBoxLayout *verticalLayout_14;
    QFrame *frame_22;
    QFrame *frame_17;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_18;
    QHBoxLayout *horizontalLayout_8;
    QLabel *image_label;
    QFrame *frame_19;
    QWidget *settingspage;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_3;
    QPushButton *game_settings;
    QSpacerItem *verticalSpacer_5;
    QPushButton *volume_settings;
    QSpacerItem *verticalSpacer_4;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_9;
    QStackedWidget *stackedWidget_2;
    QWidget *Game_settings;
    QWidget *Volume_settings;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        MainWindow->setMinimumSize(QSize(1200, 800));
        MainWindow->setMaximumSize(QSize(1200, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMaximumSize(QSize(170, 16777215));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Mute_btn = new QPushButton(frame_4);
        Mute_btn->setObjectName(QString::fromUtf8("Mute_btn"));
        Mute_btn->setMaximumSize(QSize(60, 40));

        horizontalLayout_2->addWidget(Mute_btn);

        volume_label_main = new QLabel(frame_4);
        volume_label_main->setObjectName(QString::fromUtf8("volume_label_main"));
        volume_label_main->setMinimumSize(QSize(100, 0));
        volume_label_main->setMaximumSize(QSize(100, 16777215));
        volume_label_main->setStyleSheet(QString::fromUtf8(""));
        volume_label_main->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(volume_label_main);


        horizontalLayout->addWidget(frame_4);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::Box);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);


        horizontalLayout->addWidget(frame_5);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMaximumSize(QSize(130, 16777215));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(frame_6);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        minimize_btn = new QPushButton(frame_6);
        minimize_btn->setObjectName(QString::fromUtf8("minimize_btn"));
        minimize_btn->setMaximumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(minimize_btn);

        maximize_tn = new QPushButton(frame_6);
        maximize_tn->setObjectName(QString::fromUtf8("maximize_tn"));
        maximize_tn->setMaximumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(maximize_tn);

        exit_btn = new QPushButton(frame_6);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setMaximumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(exit_btn);


        horizontalLayout->addWidget(frame_6);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        frame_7 = new QFrame(frame_2);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMaximumSize(QSize(100, 16777215));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_7);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_9 = new QFrame(frame_7);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setMinimumSize(QSize(0, 40));
        frame_9->setMaximumSize(QSize(16777215, 40));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Plain);
        verticalLayout_6 = new QVBoxLayout(frame_9);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);


        verticalLayout_4->addWidget(frame_9);

        frame_10 = new QFrame(frame_7);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::Box);
        frame_10->setFrameShadow(QFrame::Plain);
        verticalLayout_5 = new QVBoxLayout(frame_10);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 5, 0, 0);
        Home_page_btn = new QPushButton(frame_10);
        Home_page_btn->setObjectName(QString::fromUtf8("Home_page_btn"));
        Home_page_btn->setMinimumSize(QSize(0, 30));
        Home_page_btn->setMaximumSize(QSize(98, 30));

        verticalLayout_5->addWidget(Home_page_btn);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        settings_page_btn = new QPushButton(frame_10);
        settings_page_btn->setObjectName(QString::fromUtf8("settings_page_btn"));
        settings_page_btn->setMinimumSize(QSize(98, 30));
        settings_page_btn->setMaximumSize(QSize(96, 30));

        verticalLayout_5->addWidget(settings_page_btn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        verticalLayout_4->addWidget(frame_10);


        horizontalLayout_4->addWidget(frame_7);

        frame_8 = new QFrame(frame_2);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setMaximumSize(QSize(16777215, 16777215));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_8);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(frame_8);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        game_apge = new QWidget();
        game_apge->setObjectName(QString::fromUtf8("game_apge"));
        verticalLayout_10 = new QVBoxLayout(game_apge);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        frame_13 = new QFrame(game_apge);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setMaximumSize(QSize(16777215, 70));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_13);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_4 = new QLabel(frame_13);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_11->addWidget(label_4);


        verticalLayout_10->addWidget(frame_13);

        frame_14 = new QFrame(game_apge);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_14);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        single_plyer_btn = new QPushButton(frame_14);
        single_plyer_btn->setObjectName(QString::fromUtf8("single_plyer_btn"));
        single_plyer_btn->setMinimumSize(QSize(150, 0));
        single_plyer_btn->setMaximumSize(QSize(150, 30));

        gridLayout->addWidget(single_plyer_btn, 0, 2, 1, 1);

        label_6 = new QLabel(frame_14);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_5 = new QLabel(frame_14);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(label_5, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        multi_player_btn = new QPushButton(frame_14);
        multi_player_btn->setObjectName(QString::fromUtf8("multi_player_btn"));
        multi_player_btn->setMaximumSize(QSize(150, 30));

        gridLayout->addWidget(multi_player_btn, 3, 2, 1, 1);


        verticalLayout_10->addWidget(frame_14);

        frame_15 = new QFrame(game_apge);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);

        verticalLayout_10->addWidget(frame_15);

        stackedWidget->addWidget(game_apge);
        Game_single_player_mode = new QWidget();
        Game_single_player_mode->setObjectName(QString::fromUtf8("Game_single_player_mode"));
        horizontalLayout_7 = new QHBoxLayout(Game_single_player_mode);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        frame_16 = new QFrame(Game_single_player_mode);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(frame_16);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        frame_21 = new QFrame(frame_16);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setMinimumSize(QSize(0, 50));
        frame_21->setMaximumSize(QSize(16777215, 50));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);

        verticalLayout_13->addWidget(frame_21);

        frame_20 = new QFrame(frame_16);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        frame_20->setMaximumSize(QSize(16777215, 100));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_20);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));

        verticalLayout_13->addWidget(frame_20);

        widget_keyboard = new QWidget(frame_16);
        widget_keyboard->setObjectName(QString::fromUtf8("widget_keyboard"));
        verticalLayout_14 = new QVBoxLayout(widget_keyboard);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));

        verticalLayout_13->addWidget(widget_keyboard);

        frame_22 = new QFrame(frame_16);
        frame_22->setObjectName(QString::fromUtf8("frame_22"));
        frame_22->setMaximumSize(QSize(16777215, 50));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);

        verticalLayout_13->addWidget(frame_22);


        horizontalLayout_7->addWidget(frame_16);

        frame_17 = new QFrame(Game_single_player_mode);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setMinimumSize(QSize(400, 0));
        frame_17->setMaximumSize(QSize(400, 16777215));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_17);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        frame_18 = new QFrame(frame_17);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_18);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        image_label = new QLabel(frame_18);
        image_label->setObjectName(QString::fromUtf8("image_label"));

        horizontalLayout_8->addWidget(image_label);


        verticalLayout_12->addWidget(frame_18);

        frame_19 = new QFrame(frame_17);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);

        verticalLayout_12->addWidget(frame_19);


        horizontalLayout_7->addWidget(frame_17);

        stackedWidget->addWidget(Game_single_player_mode);
        settingspage = new QWidget();
        settingspage->setObjectName(QString::fromUtf8("settingspage"));
        horizontalLayout_5 = new QHBoxLayout(settingspage);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        frame_11 = new QFrame(settingspage);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setMaximumSize(QSize(110, 16777215));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_11);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_3);

        game_settings = new QPushButton(frame_11);
        game_settings->setObjectName(QString::fromUtf8("game_settings"));
        game_settings->setMinimumSize(QSize(108, 30));
        game_settings->setMaximumSize(QSize(108, 30));

        verticalLayout_8->addWidget(game_settings);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_5);

        volume_settings = new QPushButton(frame_11);
        volume_settings->setObjectName(QString::fromUtf8("volume_settings"));
        volume_settings->setMinimumSize(QSize(108, 30));

        verticalLayout_8->addWidget(volume_settings);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);


        horizontalLayout_5->addWidget(frame_11);

        frame_12 = new QFrame(settingspage);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_12);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        stackedWidget_2 = new QStackedWidget(frame_12);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        Game_settings = new QWidget();
        Game_settings->setObjectName(QString::fromUtf8("Game_settings"));
        stackedWidget_2->addWidget(Game_settings);
        Volume_settings = new QWidget();
        Volume_settings->setObjectName(QString::fromUtf8("Volume_settings"));
        horizontalLayout_6 = new QHBoxLayout(Volume_settings);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        stackedWidget_2->addWidget(Volume_settings);

        verticalLayout_9->addWidget(stackedWidget_2);


        horizontalLayout_5->addWidget(frame_12);

        stackedWidget->addWidget(settingspage);

        verticalLayout_7->addWidget(stackedWidget);


        horizontalLayout_4->addWidget(frame_8);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMaximumSize(QSize(16777215, 16777215));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::Box);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(frame_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Mute_btn->setText(QCoreApplication::translate("MainWindow", "MUTE ", nullptr));
        volume_label_main->setText(QCoreApplication::translate("MainWindow", "Volume X", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Hangman Game</span></p></body></html>", nullptr));
        minimize_btn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        maximize_tn->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        exit_btn->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Menu</span></p></body></html>", nullptr));
        Home_page_btn->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        settings_page_btn->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">PLAY</span></p></body></html>", nullptr));
        single_plyer_btn->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Multi Player Mode </span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Single Player Mode </span></p></body></html>", nullptr));
        multi_player_btn->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        image_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><img src=\":/new/images_hangman/0.jpg\"/></p></body></html>", nullptr));
        game_settings->setText(QCoreApplication::translate("MainWindow", "Game Settings", nullptr));
        volume_settings->setText(QCoreApplication::translate("MainWindow", "Volume Settings ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Porject @github/Amanislh22/Hangman_Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
