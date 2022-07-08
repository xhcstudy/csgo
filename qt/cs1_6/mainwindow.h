#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QProcess>
#include <QTime>
#include <QFileDialog>
#include <QTimer>
#include <QPixmap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Skip(int i, QWidget * yemian);

private slots:
    void on_steam_clicked();
    void datarecv();
    void on_checkBox_clicked(bool);

    void on_btnExit_clicked();

    void on_btnLogin_clicked();

    void on_btnStart_clicked();

    void on_btnReturnSteam_clicked();

    void on_editPWD_cursorPositionChanged(int arg1, int arg2);

    void on_editPWD_returnPressed();

    void on_btnperfecttime_clicked();

    void on_btnPlay_clicked();

    void on_btnPlayOpen_clicked();

    void on_btnPlayMute_clicked();

    void on_btnPlayQuit_clicked();

    void on_btnPlayVol1_clicked();

    void on_btnPlayVol2_clicked();

    void on_btnPlaySeek1_clicked();

    void on_btnPlaySeek2_clicked();

    void timer_out();

    void mplay_start();

    void mplay_finish();

    void on_btnPause_clicked();

    void on_btnMiniSteam_clicked();

    void on_steamMini_clicked();

    void on_steamMini_2_clicked();

    void on_btnPlayMini_clicked();

    void on_videoMini_steam_clicked();

    void on_videoMini_clicked();

    void on_btncsgostart_clicked();

    void on_btnchoseCT_clicked();

    void on_btnchoseA_clicked();

    void on_btnchoseB_clicked();

    void on_btnchoseAbag_clicked();

    void on_btnchosehole_clicked();

    void on_btnchosebackA_clicked();

    void on_btnchosekeepgun_clicked();

    void on_btnTwin_clicked();

    void on_btnCTwin_clicked();

    void on_btnchoseT_clicked();

    void on_btnchosebanana_clicked();

    void on_btnchoseside_clicked();

    void on_btnchoseattackA_clicked();

    void on_btnchoseattackB_clicked();

    void on_btnchoseattackA_2_clicked();

    void on_btnchoseattackB_3_clicked();

    void on_btnquit_clicked();

    void on_btncsgoquit_clicked();



private:
    Ui::MainWindow *ui;
    QUdpSocket *udp;
    QProcess *mplay;
    QTimer *timer;
};

#endif // MAINWINDOW_H
