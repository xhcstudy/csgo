#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <unistd.h>
#include <QDebug>
#include <QNetworkDatagram>
#include <QString>

int check1 = 0;
QString playID="";
QString remUser="";
QString remPassword="";
int flag = 0;

int n = 0;//解决暂停时进度条没有停止

int m = 0;//（未解决）尝试解决多次点击play重新播放问题和点击两次会暂停杀死mplay

int n1 = 0;//静音图标切换指示

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->page);
    //创建对象 udp
    udp = new QUdpSocket(this);
    //绑定本地网络地址
    udp->bind(QHostAddress::LocalHost, 10010);
    //设置链接信号与槽
    connect(udp,SIGNAL(readyRead()),this,SLOT(datarecv()));
    //设置播放器
    mplay = new QProcess(this);
    connect(mplay,SIGNAL(started()),this,SLOT(mplay_start()));
    connect(mplay,SIGNAL(finished()),this,SLOT(mplay_finish()));

    //创建对象 timer
     timer = new QTimer(this);
     connect(timer,SIGNAL(timeout()),this,SLOT(timer_out()));

}

void MainWindow::Skip(int i, QWidget * yemian)
{
    sleep(i);
    ui->stackedWidget->setCurrentWidget(yemian);
    mplay->kill();
}

//mplay开始时打开定时器
void MainWindow::mplay_start()
{
    timer->start(500);
}

//mplay结束时停止定时器
void MainWindow::mplay_finish()
{
    timer->stop();
    ui->progressBar_2->setValue(100);
}

void MainWindow::timer_out()
{
    QString str;
    QStringList arg;

    mplay->write("get_percent_pos\n");

    str = mplay->readAll();

    if(str.contains("ANS_PERCENT_POSITION"))
    {
        arg = str.split("=");
        str = arg.at(1);
        arg = str.split("\n");
        str = arg.at(0);
        ui->progressBar_2->setValue(str.toInt());
    }
}

void MainWindow::datarecv()
{
      while (udp->hasPendingDatagrams())
      {

          QNetworkDatagram datagram = udp->receiveDatagram();
          qDebug()<<datagram.data()<<endl;
          if(datagram.data()=="open steam")// 打开steam 1
          {
              ui->steam->clicked();
          }
          if(datagram.data()=="close steam")//关闭steam 2
          {
              ui->btnReturnSteam->clicked();
          }
          if(datagram.data()=="open csgo")//打开游戏 3
          {
              ui->btnStart->clicked();
          }
          if(datagram.data()=="steam ID")//输入帐号 4
          {
              sleep(1);
              ui->editUser->setText("root");
          }
          if(datagram.data()=="steam PWD")//输入密码 5
          {
              sleep(1);
              ui->editPWD->setText("123456");
          }
          if(datagram.data()=="open perfect time")//打开完美时刻 6
          {
              sleep(1);
              ui->btnperfecttime->clicked();
          }
          if(datagram.data()=="Mini perfect time")//最小化视频 7
          {
              sleep(1);
              ui->btnPlayMini->clicked();
          }
          if(datagram.data()=="Quit perfect time")//退出完美时刻 8
          {
              sleep(1);
              ui->btnPlayQuit->clicked();
          }
          if(datagram.data()=="video start")//继续播放 9
          {
              sleep(1);
              ui->btnPause->clicked();
          }
          if(datagram.data()=="video pause")//暂停 10
          {
              sleep(1);
              ui->btnPause->clicked();
          }
          if(datagram.data()=="open video file")//打开视频文件 11
          {
              sleep(1);
              ui->btnPlayOpen->clicked();
          }
          if(datagram.data()=="play perfect time")//play 12
          {
              sleep(1);
              ui->btnPlay->clicked();
          }
          if(datagram.data()=="video mute")//静音 13
          {
              sleep(1);
              ui->btnPlayMute->clicked();
          }
          if(datagram.data()=="video recover voice")//恢复音量 14
          {
              sleep(1);
              ui->btnPlayMute->clicked();
          }
          if(datagram.data()=="video voice louder")//声音大点 15
          {
              sleep(1);
              ui->btnPlayVol1->clicked();
          }
          if(datagram.data()=="video voice lower")//声音小点 16
          {
              sleep(1);
              ui->btnPlayVol2->clicked();
          }
          if(datagram.data()=="video seek1")//视频快进 17
          {
              sleep(1);
              ui->btnPlaySeek1->clicked();
          }
          if(datagram.data()=="video seek2")//视频倒带 18
          {
              sleep(1);
              ui->btnPlaySeek2->clicked();
          }
          if(datagram.data()=="steam login")//登录steam 19
          {
              sleep(1);
              ui->btnLogin->clicked();
          }
          if(datagram.data()=="steam quit")//取消登录 20
          {
              sleep(1);
              ui->btnExit->clicked();
          }
          if(datagram.data()=="login game")//进入游戏 21
          {
              sleep(1);
              ui->btncsgostart->clicked();
          }
          if(datagram.data()=="chose counter strike")//选择反恐精英 22
          {
              sleep(1);
              ui->btnchoseCT->clicked();
          }
          if(datagram.data()=="chose terrorist")//选择恐怖分子 23
          {
              sleep(1);
              ui->btnchoseT->clicked();
          }
          if(datagram.data()=="go point a")//防守A点 24
          {
              sleep(1);
              ui->btnchoseA->clicked();
          }
          if(datagram.data()=="go point b")//防守B点 25
          {
              sleep(1);
              ui->btnchoseB->clicked();
          }
          if(datagram.data()=="protect bag point")//守包点 26
          {
              sleep(1);
              ui->btnchoseAbag->clicked();
          }
          if(datagram.data()=="protect big hole")//守大坑 27
          {
              sleep(1);
              ui->btnchosehole->clicked();
          }
          if(datagram.data()=="go back a")//回防 28
          {
              sleep(1);
              ui->btnchosebackA->clicked();
          }
          if(datagram.data()=="keep gun")//保枪 29
          {
              sleep(1);
              ui->btnchosekeepgun->clicked();
          }
          if(datagram.data()=="btn csgoquit")//退出CS 30
          {
              sleep(1);
              ui->btncsgoquit->clicked();
          }
          if(datagram.data()=="btn quit")//退出游戏 31
          {
              sleep(1);
              ui->btnquit->clicked();
          }
          if(datagram.data()=="attack banana")//抢香蕉道 32
          {
              sleep(1);
              ui->btnchosebanana->clicked();
          }
          if(datagram.data()=="attack side")//守侧道 33
          {
              sleep(1);
              ui->btnchoseside->clicked();
          }
          if(datagram.data()=="attack point A")//进攻A点 34
          {
              sleep(1);
              ui->btnchoseattackA->clicked();
          }
          if(datagram.data()=="attack point B")//进攻B点 35
          {
              sleep(1);
              ui->btnchoseattackB->clicked();
          }
      }
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_steam_clicked()
{
    ui->editUser->setText(remUser);
    ui->editPWD->setText(remPassword);
    ui->stackedWidget->setCurrentWidget(ui->page_2);
    if(ui->editPWD->text()=="")
    {
        ui->btnLogin->setEnabled(false);
    }
}

void MainWindow::on_checkBox_clicked(bool)
{
    check1++;

    if(check1 == 2)
    {
        remUser="";
        remPassword="";
        check1 = 0;
    }
}

void MainWindow::on_btnExit_clicked()
{   //重新返回页面解锁按键
    ui->editUser->setEnabled(true);
    ui->editPWD->setEnabled(true);
    ui->btnLogin->setEnabled(true);
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWindow::on_btnLogin_clicked()
{
        static int n = 0;
        //获取输入框中输入的用户名和密码
        QString User = ui->editUser->text();
        QString Password = ui->editPWD->text();

        //判断用户名和密码是否正确
        if(User == "root" && Password == "123456")
        {
            ui->stackedWidget->setCurrentWidget(ui->page_3);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("user or password is wrong.");
            msgBox.exec();
            n++;
            if(n >= 3)
            {
                ui->editUser->setEnabled(false);
                ui->editPWD->setEnabled(false);
                ui->btnLogin->setEnabled(false);
            }
        }

}

void MainWindow::on_btnStart_clicked()
{
       ui->stackedWidget->setCurrentWidget(ui->page_4);
       playID="/mnt/hgfs/share/mp4/csopenvideo.mp4";
       QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelcsopenvideo->winId()).arg(playID);
       mplay->start(args);
       Skip(7,ui->page_6);
}

void MainWindow::on_btnReturnSteam_clicked()
{
    ui->editUser->setText(remUser);
    ui->editPWD->setText(remPassword);
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWindow::on_editPWD_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->editPWD->text()=="")
    {
        ui->btnLogin->setEnabled(false);
    }
    if(ui->editPWD->text()!="")
    {
        ui->btnLogin->setEnabled(true);
    }
    if(ui->editUser->text()!="" && ui->editPWD->text()!="" && check1 == 1)
    {
       flag = 1;
       if(flag)
       {
           remUser= ui->editUser->text();
           if(ui->editPWD->text()=="123456")
           {
               remPassword= ui->editPWD->text();
           }
       }
    }
}

void MainWindow::on_editPWD_returnPressed()
{
    ui->btnLogin->clicked();
}



void MainWindow::on_btnperfecttime_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_5);
    ui->progressBar_2->setValue(0);
}

void MainWindow::on_btnPlay_clicked()
{
     ui->btnPause->setStyleSheet("QWidget#btnPause{"
                               "background-color: rgb(255, 255, 255);}"
                           "QWidget#btnPause:hover{"
                               "background-color: rgb(51, 153, 255);}"
                              "QWidget#btnPause{"
                           "border-image: url(:/pic/icons8-暂停-100.png);}");
     QString args=QString("mplayer -slave -quiet -x 700 -y 500 -wid %1 %2").arg(ui->Video->winId()).arg(playID);
     if(m == 1)
     {
         mplay->start(args);
     }
     else
     {
         mplay->kill();
         mplay->start(args);
     }
}



void MainWindow::on_btnPlayOpen_clicked()
{
    m++;

    playID = QFileDialog::getOpenFileName(this,tr("open video"), "/mnt/hgfs/share/mp4", tr("Video Files (*.mp4 *.mpg *.wvm)"));
    qDebug()<<playID<<endl;
    ui->labelVideoTitle->setText(playID);
    ui->labelVideoTitle->setStyleSheet("QWidget#labelVideoTitle{background-color: rgb(61 ,60 ,55);color: rgb(255 ,255 ,255)}");

}

void MainWindow::on_btnPlayMute_clicked()
{
    n1++;
    mplay->write("mute\n");
    if(n1==1)
    {
        ui->btnPlayMute->setStyleSheet("QWidget#btnPlayMute{"
                                       "background-color: rgb(255, 255, 255);}"
                                       "QWidget#btnPlayMute:hover{"
                                       "background-color: rgb(51, 153, 255);}"
                                       "QWidget#btnPlayMute{"
                                       "border-image: url(:/pic/icons8-静音-100.png);}");
    }
    else
    {
        ui->btnPlayMute->setStyleSheet("QWidget#btnPlayMute{"
                                       "background-color: rgb(255, 255, 255);}"
                                       "QWidget#btnPlayMute:hover{"
                                       "background-color: rgb(51, 153, 255);}"
                                       "QWidget#btnPlayMute{"
                                       "border-image: url(:/pic/icons8-高音量-100.png);}");
        n1=0;
    }
}

void MainWindow::on_btnPlayQuit_clicked()
{
    mplay->kill();
    ui->stackedWidget->setCurrentWidget(ui->page_3);
    ui->progressBar_2->setValue(0);
}


void MainWindow::on_btnPlayVol1_clicked()
{
    mplay->write("volume 5\n");
}

void MainWindow::on_btnPlayVol2_clicked()
{
    mplay->write("volume -5\n");
}

void MainWindow::on_btnPlaySeek2_clicked()
{
    mplay->write("seek -2\n");
}


void MainWindow::on_btnPause_clicked()
{
    n++;

    if(n == 1)
    {
        timer->stop();
        ui->btnPause->setStyleSheet("QWidget#btnPause{"
                                    "background-color: rgb(255, 255, 255);}"
                                "QWidget#btnPause:hover{"
                                    "background-color: rgb(51, 153, 255);}"
                                   "QWidget#btnPause{"
                                "border-image: url(:/pic/icons8-播放-100.png);}");
    }
    else
    {
        timer->start(500);
        n = 0;
        ui->btnPause->setStyleSheet("QWidget#btnPause{"
                                    "background-color: rgb(255, 255, 255);}"
                                "QWidget#btnPause:hover{"
                                    "background-color: rgb(51, 153, 255);}"
                                   "QWidget#btnPause{"
                                "border-image: url(:/pic/icons8-暂停-100.png);}");
    }
    mplay->write("pause\n");
}



void MainWindow::on_btnPlaySeek1_clicked()
{
    mplay->write("seek 2\n");
}

void MainWindow::on_btnMiniSteam_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_steam_Mini);
}

void MainWindow::on_steamMini_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

void MainWindow::on_steamMini_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

void MainWindow::on_btnPlayMini_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_video_Mini);
}

void MainWindow::on_videoMini_steam_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

void MainWindow::on_videoMini_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_5);
}

void MainWindow::on_btncsgostart_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_7);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/加载界面inf.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelcsgoexe->winId()).arg(playID);
    mplay->start(args);
    Skip(23,ui->page_8);
}

void MainWindow::on_btnchoseCT_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_9);
}

void MainWindow::on_btnchoseA_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_10);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround2/goA.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelgoA->winId()).arg(playID);
    mplay->start(args);
    Skip(23,ui->page_12);
}

void MainWindow::on_btnchoseB_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_11);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround2/goB.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelgoB->winId()).arg(playID);
    mplay->start(args);
    Skip(30,ui->page_15);
}


void MainWindow::on_btnchoseAbag_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_13);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround2/守A包点.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelchoseAbag->winId()).arg(playID);
    mplay->start(args);
    Skip(36,ui->page_round2Twin);
}

void MainWindow::on_btnchosehole_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_14);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround2/守大坑.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelchosehole->winId()).arg(playID);
    mplay->start(args);
    Skip(36,ui->page_round2Twin);
}

void MainWindow::on_btnchosebackA_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_16);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround2/回防.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelchosebackA->winId()).arg(playID);
    mplay->start(args);
    Skip(11,ui->page_round2Twin);
}

void MainWindow::on_btnchosekeepgun_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_17);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround2/保枪.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelchosekeepgun->winId()).arg(playID);
    mplay->start(args);
    Skip(18,ui->page_round2Twin);
}

void MainWindow::on_btnTwin_clicked()
{
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/Twin.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelTwin->winId()).arg(playID);
    mplay->start(args);
    Skip(9,ui->page_8);
}

void MainWindow::on_btnCTwin_clicked()
{
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/CTwin.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelCTwin->winId()).arg(playID);
    mplay->start(args);
    Skip(13,ui->page_8);
}

void MainWindow::on_btnchoseT_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_18);
}

void MainWindow::on_btnchosebanana_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_19);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround1/抢香蕉道.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelbanana->winId()).arg(playID);
    mplay->start(args);
    Skip(26,ui->page_21);
}

void MainWindow::on_btnchoseside_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_20);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround1/控侧道.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelside->winId()).arg(playID);
    mplay->start(args);
    Skip(18,ui->page_22);
}

void MainWindow::on_btnchoseattackA_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_23);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround1/进攻A点.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelattackA->winId()).arg(playID);
    mplay->start(args);
    Skip(60,ui->page_round2Twin);
}

void MainWindow::on_btnchoseattackB_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_24);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround1/进攻B点.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelattackB->winId()).arg(playID);
    mplay->start(args);
    Skip(30,ui->page_round2Twin);
}

void MainWindow::on_btnchoseattackA_2_clicked()
{
    ui->btnchoseattackA->clicked();
    /*ui->stackedWidget->setCurrentWidget(ui->page_23);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround1/进攻A点.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelattackA->winId()).arg(playID);
    mplay->start(args);
    Skip(60,ui->page_round2Twin);*/
}

void MainWindow::on_btnchoseattackB_3_clicked()
{
    ui->btnchoseattackB->clicked();
    /*ui->stackedWidget->setCurrentWidget(ui->page_24);
    mplay->kill();
    playID="/mnt/hgfs/share/mp4/infround1/进攻B点.mp4";
    QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelattackB->winId()).arg(playID);
    mplay->start(args);
    Skip(30,ui->page_round2Twin);*/
}

void MainWindow::on_btnquit_clicked()
{
    sleep(1);
    ui->stackedWidget->setCurrentWidget(ui->page_6);
}

void MainWindow::on_btncsgoquit_clicked()
{
    sleep(1);
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}


