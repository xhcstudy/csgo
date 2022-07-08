/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *steam;
    QWidget *page_2;
    QWidget *widget;
    QLabel *labelsteam;
    QLineEdit *editUser;
    QLineEdit *editPWD;
    QLabel *labelUser;
    QLabel *labelPWD;
    QCheckBox *checkBox;
    QPushButton *btnLogin;
    QPushButton *btnExit;
    QLabel *STEAMtxt;
    QWidget *page_3;
    QWidget *widget_2;
    QPushButton *btnStart;
    QPushButton *btnReturnSteam;
    QPushButton *btnperfecttime;
    QPushButton *btnMiniSteam;
    QWidget *page_4;
    QLabel *labelcsopenvideo;
    QWidget *page_steam_Mini;
    QPushButton *steamMini;
    QPushButton *steamMini_2;
    QWidget *page_video_Mini;
    QPushButton *videoMini;
    QPushButton *videoMini_steam;
    QWidget *page_5;
    QLabel *Video;
    QWidget *VideoBackG;
    QPushButton *btnPlayMute;
    QPushButton *btnPlayQuit;
    QPushButton *btnPause;
    QProgressBar *progressBar_2;
    QPushButton *btnPlaySeek1;
    QPushButton *btnPlayVol2;
    QPushButton *btnPlaySeek2;
    QPushButton *btnPlayVol1;
    QPushButton *btnPlayOpen;
    QPushButton *btnPlay;
    QLabel *labelVideoTitle;
    QPushButton *btnPlayMini;
    QWidget *page_6;
    QPushButton *btncsgostart;
    QPushButton *btncsgoquit;
    QWidget *page_7;
    QLabel *labelcsgoexe;
    QWidget *page_8;
    QPushButton *btnchoseT;
    QPushButton *btnchoseCT;
    QPushButton *btnquit;
    QWidget *page_9;
    QPushButton *btnchoseA;
    QPushButton *btnchoseB;
    QWidget *page_10;
    QLabel *labelgoA;
    QWidget *page_11;
    QLabel *labelgoB;
    QWidget *page_12;
    QPushButton *btnchosehole;
    QPushButton *btnchoseAbag;
    QWidget *page_13;
    QLabel *labelchoseAbag;
    QWidget *page_14;
    QLabel *labelchosehole;
    QWidget *page_15;
    QPushButton *btnchosekeepgun;
    QPushButton *btnchosebackA;
    QWidget *page_16;
    QLabel *labelchosebackA;
    QWidget *page_17;
    QLabel *labelchosekeepgun;
    QWidget *page_18;
    QPushButton *btnchosebanana;
    QPushButton *btnchoseside;
    QWidget *page_19;
    QLabel *labelbanana;
    QWidget *page_20;
    QLabel *labelside;
    QWidget *page_21;
    QPushButton *btnchoseattackA;
    QPushButton *btnchoseattackB;
    QWidget *page_22;
    QPushButton *btnchoseattackB_3;
    QPushButton *btnchoseattackA_2;
    QWidget *page_23;
    QLabel *labelattackA;
    QWidget *page_24;
    QLabel *labelattackB;
    QWidget *page_round2CTwin;
    QLabel *labelCTwin;
    QPushButton *btnCTwin;
    QWidget *page_round2Twin;
    QLabel *labelTwin;
    QPushButton *btnTwin;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget#page\n"
"{\n"
"	border-image: url(:/pic/\346\241\214\351\235\242.jpg);}\n"
"QWidget#page_2\n"
"{\n"
"	border-image: url(:/pic/\346\241\214\351\235\242.jpg);}\n"
"QWidget#page_3\n"
"{\n"
"	border-image: url(:/pic/\346\241\214\351\235\242.jpg);}\n"
"QWidget#page_4\n"
"{\n"
"	border-image: url(:/pic/\350\277\233\345\205\245cs.jpg);}\n"
"QWidget#page_5\n"
"{\n"
"	border-image: url(:/pic/\346\241\214\351\235\242.jpg);}\n"
"QWidget#page_steam_Mini\n"
"{\n"
"	border-image: url(:/pic/\346\241\214\351\235\242.jpg);}\n"
"QWidget#page_video_Mini\n"
"{\n"
"	border-image: url(:/pic/\346\241\214\351\235\242.jpg);}\n"
"QWidget#page_6\n"
"{\n"
"	border-image: url(:/pic/csgo\347\225\214\351\235\242.jpg);}\n"
"QWidget#page_8\n"
"{\n"
"	border-image: url(:/pic/ct or t.jpg);}\n"
"QWidget#page_9\n"
"{\n"
"	border-image: url(:/pic/chose1_CT.jpg);}\n"
"QWidget#page_7\n"
"{\n"
"background-color: rgb(0, 0, 0);}\n"
"QWidget#page_10\n"
"{\n"
"background-color: rgb(0, 0, 0);}\n"
"QWidget#page_11\n"
"{\n"
"background-color: rgb(0,"
                        " 0, 0);}\n"
"QWidget#page_12\n"
"{\n"
"border-image: url(:/pic/choseA.jpg);}\n"
"QWidget#page_15\n"
"{\n"
"border-image: url(:/pic/choseB.jpg);}\n"
"QWidget#page_round2CTwin\n"
"{\n"
"border-image: url(:/pic/CTwin.jpg);}\n"
"QWidget#page_round2Twin\n"
"{\n"
"border-image: url(:/pic/Twin.jpg);}\n"
"QWidget#page_round2CTwin\n"
"{background-color: rgb(0, 0, 0);}\n"
"QWidget#page_18\n"
"{\n"
"border-image: url(:/pic/chose2_T.jpg);}\n"
"QWidget#page_21\n"
"{\n"
"border-image: url(:/pic/banana.jpg);}\n"
"QWidget#page_22\n"
"{\n"
"border-image: url(:/pic/side.jpg);}\n"
"\n"
""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        steam = new QPushButton(page);
        steam->setObjectName(QStringLiteral("steam"));
        steam->setGeometry(QRect(90, 10, 61, 51));
        steam->setStyleSheet(QLatin1String("QWidget#steam:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0));}"));
        steam->setFlat(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        widget = new QWidget(page_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(220, 120, 361, 301));
        widget->setCursor(QCursor(Qt::ArrowCursor));
        widget->setStyleSheet(QLatin1String("QWidget#widget\n"
"{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.386598 rgba(30, 30, 32, 255), stop:1 rgba(81, 82, 90, 255));\n"
"}"));
        labelsteam = new QLabel(widget);
        labelsteam->setObjectName(QStringLiteral("labelsteam"));
        labelsteam->setGeometry(QRect(10, 20, 101, 91));
        labelsteam->setStyleSheet(QLatin1String("QWidget#labelsteam\n"
"{\n"
"	border-image: url(:/pic/steam_icon.png);}"));
        editUser = new QLineEdit(widget);
        editUser->setObjectName(QStringLiteral("editUser"));
        editUser->setGeometry(QRect(150, 120, 113, 25));
        editPWD = new QLineEdit(widget);
        editPWD->setObjectName(QStringLiteral("editPWD"));
        editPWD->setGeometry(QRect(150, 160, 113, 25));
        editPWD->setEchoMode(QLineEdit::Password);
        labelUser = new QLabel(widget);
        labelUser->setObjectName(QStringLiteral("labelUser"));
        labelUser->setGeometry(QRect(70, 120, 67, 17));
        labelUser->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        labelPWD = new QLabel(widget);
        labelPWD->setObjectName(QStringLiteral("labelPWD"));
        labelPWD->setGeometry(QRect(70, 160, 67, 17));
        labelPWD->setStyleSheet(QLatin1String("\n"
"color: rgb(238, 238, 236);"));
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(130, 200, 92, 23));
        checkBox->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"alternate-background-color: rgb(238, 238, 236);"));
        btnLogin = new QPushButton(widget);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(80, 240, 89, 25));
        btnLogin->setCursor(QCursor(Qt::PointingHandCursor));
        btnLogin->setMouseTracking(false);
        btnLogin->setAutoFillBackground(false);
        btnLogin->setStyleSheet(QLatin1String("background-color: rgb(58, 63, 71);\n"
"color: rgb(238, 238, 236);"));
        btnExit = new QPushButton(widget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(190, 240, 89, 25));
        btnExit->setCursor(QCursor(Qt::PointingHandCursor));
        btnExit->setStyleSheet(QLatin1String("background-color: rgb(58, 63, 71);\n"
"color: rgb(238, 238, 236);"));
        STEAMtxt = new QLabel(widget);
        STEAMtxt->setObjectName(QStringLiteral("STEAMtxt"));
        STEAMtxt->setGeometry(QRect(120, 30, 131, 51));
        STEAMtxt->setStyleSheet(QLatin1String("font: 75 24pt \"Waree\";\n"
"color: rgb(238, 238, 236);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        widget_2 = new QWidget(page_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(40, 70, 721, 421));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	border-image: url(:/pic/steam\345\272\223.jpg);}"));
        btnStart = new QPushButton(widget_2);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(100, 80, 111, 151));
        btnStart->setStyleSheet(QString::fromUtf8("QWidget#btnStart\n"
"{\n"
"	\n"
"border-image: url(:/pic/\345\274\200\345\247\213csgo.jpg);}"));
        btnReturnSteam = new QPushButton(widget_2);
        btnReturnSteam->setObjectName(QStringLiteral("btnReturnSteam"));
        btnReturnSteam->setGeometry(QRect(700, 0, 20, 20));
        btnReturnSteam->setStyleSheet(QLatin1String("QWidget#btnReturnSteam{\n"
"border-image: url(:/pic/icons8-steamquit-100.png);}"));
        btnperfecttime = new QPushButton(widget_2);
        btnperfecttime->setObjectName(QStringLiteral("btnperfecttime"));
        btnperfecttime->setGeometry(QRect(220, 80, 111, 151));
        btnperfecttime->setStyleSheet(QLatin1String("QWidget#btnperfecttime{\n"
"border-image: url(:/pic/videoPT.png);}"));
        btnMiniSteam = new QPushButton(widget_2);
        btnMiniSteam->setObjectName(QStringLiteral("btnMiniSteam"));
        btnMiniSteam->setGeometry(QRect(678, 0, 20, 20));
        btnMiniSteam->setStyleSheet(QString::fromUtf8("QWidget#btnMiniSteam{\n"
"border-image: url(:/pic/icons8-steam\346\234\200\345\260\217\345\214\226-100.png);}"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        labelcsopenvideo = new QLabel(page_4);
        labelcsopenvideo->setObjectName(QStringLiteral("labelcsopenvideo"));
        labelcsopenvideo->setGeometry(QRect(0, 0, 800, 600));
        labelcsopenvideo->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_4);
        page_steam_Mini = new QWidget();
        page_steam_Mini->setObjectName(QStringLiteral("page_steam_Mini"));
        steamMini = new QPushButton(page_steam_Mini);
        steamMini->setObjectName(QStringLiteral("steamMini"));
        steamMini->setGeometry(QRect(155, 564, 30, 30));
        steamMini->setStyleSheet(QLatin1String("QWidget#steamMini\n"
"{\n"
"	\n"
"border-image: url(:/pic/icons8-steam-100.png);}\n"
"QWidget#steamMini:hover{\n"
"	\n"
"	background-color: rgb(230,230,230);}"));
        steamMini->setFlat(true);
        steamMini_2 = new QPushButton(page_steam_Mini);
        steamMini_2->setObjectName(QStringLiteral("steamMini_2"));
        steamMini_2->setGeometry(QRect(90, 10, 51, 41));
        steamMini_2->setStyleSheet(QLatin1String("QWidget#steamMini\n"
"{\n"
"	\n"
"border-image: url(:/pic/icons8-steam-100.png);}"));
        steamMini_2->setFlat(true);
        stackedWidget->addWidget(page_steam_Mini);
        page_video_Mini = new QWidget();
        page_video_Mini->setObjectName(QStringLiteral("page_video_Mini"));
        videoMini = new QPushButton(page_video_Mini);
        videoMini->setObjectName(QStringLiteral("videoMini"));
        videoMini->setGeometry(QRect(155, 562, 35, 35));
        videoMini->setStyleSheet(QString::fromUtf8("QWidget#videoMini\n"
"{\n"
"	\n"
"border-image: url(:/pic/icons8-\345\256\214\347\276\216\346\227\266\345\210\273-100.png);}\n"
"QWidget#videoMini:hover{\n"
"	\n"
"	background-color: rgb(230,230,230);}"));
        videoMini->setFlat(true);
        videoMini_steam = new QPushButton(page_video_Mini);
        videoMini_steam->setObjectName(QStringLiteral("videoMini_steam"));
        videoMini_steam->setGeometry(QRect(210, 565, 30, 30));
        videoMini_steam->setStyleSheet(QLatin1String("QWidget#videoMini_steam\n"
"{\n"
"	\n"
"border-image: url(:/pic/icons8-steam-100.png);}\n"
"QWidget#videoMini_steam:hover{\n"
"	\n"
"	background-color: rgb(230,230,230);}"));
        videoMini_steam->setFlat(true);
        stackedWidget->addWidget(page_video_Mini);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        Video = new QLabel(page_5);
        Video->setObjectName(QStringLiteral("Video"));
        Video->setGeometry(QRect(50, 25, 700, 500));
        Video->setStyleSheet(QLatin1String("QWidget#Video\n"
"{\n"
"	background-color: rgb(0, 0, 0);}"));
        Video->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        VideoBackG = new QWidget(page_5);
        VideoBackG->setObjectName(QStringLiteral("VideoBackG"));
        VideoBackG->setGeometry(QRect(50, 0, 700, 600));
        VideoBackG->setStyleSheet(QLatin1String("QWidget#VideoBackG\n"
"{\n"
"	background-color: rgb(255, 255, 255);}"));
        btnPlayMute = new QPushButton(VideoBackG);
        btnPlayMute->setObjectName(QStringLiteral("btnPlayMute"));
        btnPlayMute->setGeometry(QRect(10, 560, 30, 30));
        btnPlayMute->setStyleSheet(QString::fromUtf8("QWidget#btnPlayMute{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QWidget#btnPlayMute:hover{\n"
"	\n"
"	background-color: rgb(51, 153, 255);\n"
"}\n"
"QWidget#btnPlayMute{\n"
"border-image: url(:/pic/icons8-\351\253\230\351\237\263\351\207\217-100.png);}"));
        btnPlayQuit = new QPushButton(VideoBackG);
        btnPlayQuit->setObjectName(QStringLiteral("btnPlayQuit"));
        btnPlayQuit->setGeometry(QRect(675, 3, 20, 20));
        btnPlayQuit->setStyleSheet(QString::fromUtf8("QWidget#btnPlayQuit\n"
"{\n"
"	border-image: url(:/pic/icons8-\344\271\230-100.png);}"));
        btnPause = new QPushButton(VideoBackG);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        btnPause->setGeometry(QRect(320, 560, 30, 30));
        btnPause->setStyleSheet(QString::fromUtf8("QWidget#btnPause{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QWidget#btnPause:hover{\n"
"	\n"
"	background-color: rgb(51, 153, 255);\n"
"}\n"
"QWidget#btnPause{\n"
"border-image: url(:/pic/icons8-\346\222\255\346\224\276-100.png);}"));
        progressBar_2 = new QProgressBar(VideoBackG);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(130, 530, 521, 25));
        progressBar_2->setValue(0);
        btnPlaySeek1 = new QPushButton(VideoBackG);
        btnPlaySeek1->setObjectName(QStringLiteral("btnPlaySeek1"));
        btnPlaySeek1->setGeometry(QRect(380, 560, 30, 30));
        btnPlaySeek1->setStyleSheet(QString::fromUtf8("QWidget#btnPlaySeek1{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QWidget#btnPlaySeek1:hover{\n"
"	\n"
"	background-color: rgb(51, 153, 255);\n"
"}\n"
"QWidget#btnPlaySeek1{\n"
"border-image: url(:/pic/icons8-\345\277\253\350\277\233-100.png);}"));
        btnPlayVol2 = new QPushButton(VideoBackG);
        btnPlayVol2->setObjectName(QStringLiteral("btnPlayVol2"));
        btnPlayVol2->setGeometry(QRect(50, 560, 30, 30));
        btnPlayVol2->setStyleSheet(QString::fromUtf8("QWidget#btnPlayVol2{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QWidget#btnPlayVol2:hover{\n"
"	\n"
"	background-color: rgb(51, 153, 255);\n"
"}\n"
"QWidget#btnPlayVol2{\n"
"border-image: url(:/pic/icons8-\345\207\217\346\263\225-100.png);}"));
        btnPlaySeek2 = new QPushButton(VideoBackG);
        btnPlaySeek2->setObjectName(QStringLiteral("btnPlaySeek2"));
        btnPlaySeek2->setGeometry(QRect(260, 560, 30, 30));
        btnPlaySeek2->setStyleSheet(QString::fromUtf8("QWidget#btnPlaySeek2{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QWidget#btnPlaySeek2:hover{\n"
"	\n"
"	background-color: rgb(51, 153, 255);\n"
"}\n"
"QWidget#btnPlaySeek2{\n"
"border-image: url(:/pic/icons8-\345\200\222\345\270\246-100.png);}"));
        btnPlayVol1 = new QPushButton(VideoBackG);
        btnPlayVol1->setObjectName(QStringLiteral("btnPlayVol1"));
        btnPlayVol1->setGeometry(QRect(90, 560, 30, 30));
        btnPlayVol1->setStyleSheet(QString::fromUtf8("QWidget#btnPlayVol1{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QWidget#btnPlayVol1:hover{\n"
"	\n"
"	background-color: rgb(51, 153, 255);\n"
"}\n"
"QWidget#btnPlayVol1{\n"
"border-image: url(:/pic/icons8-\345\212\240\346\263\225-100.png);}"));
        btnPlayOpen = new QPushButton(VideoBackG);
        btnPlayOpen->setObjectName(QStringLiteral("btnPlayOpen"));
        btnPlayOpen->setGeometry(QRect(590, 560, 89, 30));
        btnPlay = new QPushButton(VideoBackG);
        btnPlay->setObjectName(QStringLiteral("btnPlay"));
        btnPlay->setGeometry(QRect(20, 530, 89, 25));
        labelVideoTitle = new QLabel(VideoBackG);
        labelVideoTitle->setObjectName(QStringLiteral("labelVideoTitle"));
        labelVideoTitle->setGeometry(QRect(0, 0, 700, 25));
        labelVideoTitle->setStyleSheet(QLatin1String("QWidget#labelVideoTitle\n"
"{\n"
"	background-color: rgb(61 ,60 ,55);\n"
"color: rgb(255, 255, 255);}"));
        labelVideoTitle->setAlignment(Qt::AlignCenter);
        btnPlayMini = new QPushButton(VideoBackG);
        btnPlayMini->setObjectName(QStringLiteral("btnPlayMini"));
        btnPlayMini->setGeometry(QRect(650, 4, 18, 18));
        btnPlayMini->setStyleSheet(QString::fromUtf8("QWidget#btnPlayMini\n"
"{\n"
"	border-image: url(:/pic/icons8-video\346\234\200\345\260\217\345\214\226-100.png);}"));
        labelVideoTitle->raise();
        btnPlayMute->raise();
        btnPause->raise();
        progressBar_2->raise();
        btnPlaySeek1->raise();
        btnPlayVol2->raise();
        btnPlaySeek2->raise();
        btnPlayVol1->raise();
        btnPlayOpen->raise();
        btnPlay->raise();
        btnPlayQuit->raise();
        btnPlayMini->raise();
        stackedWidget->addWidget(page_5);
        VideoBackG->raise();
        Video->raise();
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        btncsgostart = new QPushButton(page_6);
        btncsgostart->setObjectName(QStringLiteral("btncsgostart"));
        btncsgostart->setGeometry(QRect(667, 560, 116, 29));
        btncsgostart->setStyleSheet(QLatin1String("QWidget#btncsgostart:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0));}"));
        btncsgostart->setFlat(true);
        btncsgoquit = new QPushButton(page_6);
        btncsgoquit->setObjectName(QStringLiteral("btncsgoquit"));
        btncsgoquit->setGeometry(QRect(6, 555, 41, 41));
        btncsgoquit->setStyleSheet(QString::fromUtf8("QWidget#btncsgoquit:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0));}\n"
"QWidget#btncsgoquit\n"
"{\n"
"	border-image: url(:/pic/\347\224\265\346\272\220.jpg);}"));
        btncsgoquit->setFlat(true);
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        labelcsgoexe = new QLabel(page_7);
        labelcsgoexe->setObjectName(QStringLiteral("labelcsgoexe"));
        labelcsgoexe->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        btnchoseT = new QPushButton(page_8);
        btnchoseT->setObjectName(QStringLiteral("btnchoseT"));
        btnchoseT->setGeometry(QRect(180, 110, 191, 411));
        btnchoseT->setStyleSheet(QLatin1String("QWidget#btnchoseT:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0));}"));
        btnchoseT->setFlat(true);
        btnchoseCT = new QPushButton(page_8);
        btnchoseCT->setObjectName(QStringLiteral("btnchoseCT"));
        btnchoseCT->setGeometry(QRect(420, 100, 221, 431));
        btnchoseCT->setStyleSheet(QLatin1String("QWidget#btnchoseCT:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0));}"));
        btnchoseCT->setFlat(true);
        btnquit = new QPushButton(page_8);
        btnquit->setObjectName(QStringLiteral("btnquit"));
        btnquit->setGeometry(QRect(0, 550, 50, 50));
        btnquit->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/icons8-\345\205\263\351\227\255-100.png);\n"
"QWidget#btnquit:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0));}"));
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        btnchoseA = new QPushButton(page_9);
        btnchoseA->setObjectName(QStringLiteral("btnchoseA"));
        btnchoseA->setGeometry(QRect(150, 470, 160, 80));
        btnchoseA->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        btnchoseB = new QPushButton(page_9);
        btnchoseB->setObjectName(QStringLiteral("btnchoseB"));
        btnchoseB->setGeometry(QRect(430, 470, 160, 80));
        btnchoseB->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        stackedWidget->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        labelgoA = new QLabel(page_10);
        labelgoA->setObjectName(QStringLiteral("labelgoA"));
        labelgoA->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        labelgoB = new QLabel(page_11);
        labelgoB->setObjectName(QStringLiteral("labelgoB"));
        labelgoB->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        btnchosehole = new QPushButton(page_12);
        btnchosehole->setObjectName(QStringLiteral("btnchosehole"));
        btnchosehole->setGeometry(QRect(430, 470, 160, 80));
        btnchosehole->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        btnchoseAbag = new QPushButton(page_12);
        btnchoseAbag->setObjectName(QStringLiteral("btnchoseAbag"));
        btnchoseAbag->setGeometry(QRect(150, 470, 160, 80));
        btnchoseAbag->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        stackedWidget->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        labelchoseAbag = new QLabel(page_13);
        labelchoseAbag->setObjectName(QStringLiteral("labelchoseAbag"));
        labelchoseAbag->setGeometry(QRect(0, 0, 800, 600));
        labelchoseAbag->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName(QStringLiteral("page_14"));
        labelchosehole = new QLabel(page_14);
        labelchosehole->setObjectName(QStringLiteral("labelchosehole"));
        labelchosehole->setGeometry(QRect(0, 0, 800, 600));
        labelchosehole->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_14);
        page_15 = new QWidget();
        page_15->setObjectName(QStringLiteral("page_15"));
        btnchosekeepgun = new QPushButton(page_15);
        btnchosekeepgun->setObjectName(QStringLiteral("btnchosekeepgun"));
        btnchosekeepgun->setGeometry(QRect(430, 470, 160, 80));
        btnchosekeepgun->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        btnchosebackA = new QPushButton(page_15);
        btnchosebackA->setObjectName(QStringLiteral("btnchosebackA"));
        btnchosebackA->setGeometry(QRect(150, 470, 160, 80));
        btnchosebackA->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        stackedWidget->addWidget(page_15);
        page_16 = new QWidget();
        page_16->setObjectName(QStringLiteral("page_16"));
        labelchosebackA = new QLabel(page_16);
        labelchosebackA->setObjectName(QStringLiteral("labelchosebackA"));
        labelchosebackA->setGeometry(QRect(0, 0, 800, 600));
        labelchosebackA->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_16);
        page_17 = new QWidget();
        page_17->setObjectName(QStringLiteral("page_17"));
        labelchosekeepgun = new QLabel(page_17);
        labelchosekeepgun->setObjectName(QStringLiteral("labelchosekeepgun"));
        labelchosekeepgun->setGeometry(QRect(0, 0, 800, 600));
        labelchosekeepgun->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_17);
        page_18 = new QWidget();
        page_18->setObjectName(QStringLiteral("page_18"));
        btnchosebanana = new QPushButton(page_18);
        btnchosebanana->setObjectName(QStringLiteral("btnchosebanana"));
        btnchosebanana->setGeometry(QRect(150, 470, 160, 80));
        btnchosebanana->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 21pt \"Ubuntu\";"));
        btnchoseside = new QPushButton(page_18);
        btnchoseside->setObjectName(QStringLiteral("btnchoseside"));
        btnchoseside->setGeometry(QRect(430, 470, 160, 80));
        btnchoseside->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        stackedWidget->addWidget(page_18);
        page_19 = new QWidget();
        page_19->setObjectName(QStringLiteral("page_19"));
        labelbanana = new QLabel(page_19);
        labelbanana->setObjectName(QStringLiteral("labelbanana"));
        labelbanana->setGeometry(QRect(0, 0, 800, 600));
        labelbanana->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_19);
        page_20 = new QWidget();
        page_20->setObjectName(QStringLiteral("page_20"));
        labelside = new QLabel(page_20);
        labelside->setObjectName(QStringLiteral("labelside"));
        labelside->setGeometry(QRect(0, 0, 800, 600));
        labelside->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_20);
        page_21 = new QWidget();
        page_21->setObjectName(QStringLiteral("page_21"));
        btnchoseattackA = new QPushButton(page_21);
        btnchoseattackA->setObjectName(QStringLiteral("btnchoseattackA"));
        btnchoseattackA->setGeometry(QRect(150, 470, 160, 80));
        btnchoseattackA->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        btnchoseattackB = new QPushButton(page_21);
        btnchoseattackB->setObjectName(QStringLiteral("btnchoseattackB"));
        btnchoseattackB->setGeometry(QRect(430, 470, 160, 80));
        btnchoseattackB->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        stackedWidget->addWidget(page_21);
        page_22 = new QWidget();
        page_22->setObjectName(QStringLiteral("page_22"));
        btnchoseattackB_3 = new QPushButton(page_22);
        btnchoseattackB_3->setObjectName(QStringLiteral("btnchoseattackB_3"));
        btnchoseattackB_3->setGeometry(QRect(430, 470, 160, 80));
        btnchoseattackB_3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        btnchoseattackA_2 = new QPushButton(page_22);
        btnchoseattackA_2->setObjectName(QStringLiteral("btnchoseattackA_2"));
        btnchoseattackA_2->setGeometry(QRect(150, 470, 160, 80));
        btnchoseattackA_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"Ubuntu\";"));
        stackedWidget->addWidget(page_22);
        page_23 = new QWidget();
        page_23->setObjectName(QStringLiteral("page_23"));
        labelattackA = new QLabel(page_23);
        labelattackA->setObjectName(QStringLiteral("labelattackA"));
        labelattackA->setGeometry(QRect(0, 0, 800, 600));
        labelattackA->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_23);
        page_24 = new QWidget();
        page_24->setObjectName(QStringLiteral("page_24"));
        labelattackB = new QLabel(page_24);
        labelattackB->setObjectName(QStringLiteral("labelattackB"));
        labelattackB->setGeometry(QRect(0, 0, 800, 600));
        labelattackB->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_24);
        page_round2CTwin = new QWidget();
        page_round2CTwin->setObjectName(QStringLiteral("page_round2CTwin"));
        labelCTwin = new QLabel(page_round2CTwin);
        labelCTwin->setObjectName(QStringLiteral("labelCTwin"));
        labelCTwin->setGeometry(QRect(0, 0, 800, 600));
        labelCTwin->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        btnCTwin = new QPushButton(page_round2CTwin);
        btnCTwin->setObjectName(QStringLiteral("btnCTwin"));
        btnCTwin->setGeometry(QRect(0, 0, 800, 600));
        btnCTwin->setStyleSheet(QStringLiteral("border-image: url(:/pic/CTwin.jpg);"));
        btnCTwin->setFlat(false);
        stackedWidget->addWidget(page_round2CTwin);
        page_round2Twin = new QWidget();
        page_round2Twin->setObjectName(QStringLiteral("page_round2Twin"));
        labelTwin = new QLabel(page_round2Twin);
        labelTwin->setObjectName(QStringLiteral("labelTwin"));
        labelTwin->setGeometry(QRect(0, 0, 800, 600));
        labelTwin->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        btnTwin = new QPushButton(page_round2Twin);
        btnTwin->setObjectName(QStringLiteral("btnTwin"));
        btnTwin->setGeometry(QRect(0, 0, 800, 600));
        btnTwin->setStyleSheet(QStringLiteral("border-image: url(:/pic/Twin.jpg);"));
        btnTwin->setFlat(false);
        stackedWidget->addWidget(page_round2Twin);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(7);
        btnCTwin->setDefault(false);
        btnTwin->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        steam->setText(QString());
        labelsteam->setText(QString());
        labelUser->setText(QApplication::translate("MainWindow", "\350\264\246\346\210\267\345\220\215\347\247\260", Q_NULLPTR));
        labelPWD->setText(QApplication::translate("MainWindow", "        \345\257\206\347\240\201", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        btnExit->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", Q_NULLPTR));
        STEAMtxt->setText(QApplication::translate("MainWindow", "STEAM", Q_NULLPTR));
        btnStart->setText(QString());
        btnReturnSteam->setText(QString());
        btnperfecttime->setText(QString());
        btnMiniSteam->setText(QString());
        labelcsopenvideo->setText(QString());
        steamMini->setText(QString());
        steamMini_2->setText(QString());
        videoMini->setText(QString());
        videoMini_steam->setText(QString());
        Video->setText(QString());
        btnPlayMute->setText(QString());
        btnPlayQuit->setText(QString());
        btnPause->setText(QString());
        btnPlaySeek1->setText(QString());
        btnPlayVol2->setText(QString());
        btnPlaySeek2->setText(QString());
        btnPlayVol1->setText(QString());
        btnPlayOpen->setText(QApplication::translate("MainWindow", "open...", Q_NULLPTR));
        btnPlay->setText(QApplication::translate("MainWindow", "play", Q_NULLPTR));
        labelVideoTitle->setText(QString());
        btnPlayMini->setText(QString());
        btncsgostart->setText(QString());
        btncsgoquit->setText(QString());
        labelcsgoexe->setText(QString());
        btnchoseT->setText(QString());
        btnchoseCT->setText(QString());
        btnquit->setText(QString());
        btnchoseA->setText(QApplication::translate("MainWindow", "A. \351\230\262\345\256\210A\347\202\271", Q_NULLPTR));
        btnchoseB->setText(QApplication::translate("MainWindow", "B.\351\230\262\345\256\210B\347\202\271", Q_NULLPTR));
        labelgoA->setText(QString());
        labelgoB->setText(QString());
        btnchosehole->setText(QApplication::translate("MainWindow", "B.\345\256\210\345\244\247\345\235\221", Q_NULLPTR));
        btnchoseAbag->setText(QApplication::translate("MainWindow", "A. \345\256\210\345\214\205\347\202\271", Q_NULLPTR));
        labelchoseAbag->setText(QString());
        labelchosehole->setText(QString());
        btnchosekeepgun->setText(QApplication::translate("MainWindow", "B.\344\277\235\346\236\252", Q_NULLPTR));
        btnchosebackA->setText(QApplication::translate("MainWindow", "A. \345\233\236\351\230\262", Q_NULLPTR));
        labelchosebackA->setText(QString());
        labelchosekeepgun->setText(QString());
        btnchosebanana->setText(QApplication::translate("MainWindow", "A. \346\212\242\351\246\231\350\225\211\351\201\223", Q_NULLPTR));
        btnchoseside->setText(QApplication::translate("MainWindow", "B.\346\216\247\344\276\247\351\201\223", Q_NULLPTR));
        labelbanana->setText(QString());
        labelside->setText(QString());
        btnchoseattackA->setText(QApplication::translate("MainWindow", "A. \350\277\233\346\224\273A\347\202\271", Q_NULLPTR));
        btnchoseattackB->setText(QApplication::translate("MainWindow", "B.\350\277\233\346\224\273B\347\202\271", Q_NULLPTR));
        btnchoseattackB_3->setText(QApplication::translate("MainWindow", "B.\350\277\233\346\224\273B\347\202\271", Q_NULLPTR));
        btnchoseattackA_2->setText(QApplication::translate("MainWindow", "A. \350\277\233\346\224\273A\347\202\271", Q_NULLPTR));
        labelattackA->setText(QString());
        labelattackB->setText(QString());
        labelCTwin->setText(QString());
        btnCTwin->setText(QString());
        labelTwin->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        btnTwin->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
