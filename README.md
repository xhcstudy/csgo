# csgo
基于智能家居修改的csgo互动视频类游戏

技术栈：C++编程、linux编程、Socket网络编程、QT、语音识别

演示视频地址：https://www.bilibili.com/video/BV1QZ4y1a7v5?share_source=copy_web

为什么要做这个项目：学校实习时跟着老师手把手做了一个智能家居项目，觉得有点无聊，在该项目上改进自己做了这个项目；

一、与智能家居项目的不同：

1、在通用的登录模块上添加了记住密码的功能；

2、智能家居中的智能影院功能被移植到了登录之后的“完美时刻”，并修改了智能影院功能的bug，包括进度条暂停之后仍在向前、按下暂停之后图标没有改变等等问题；

3、去除了温湿度传感器和烟雾传感器（利用的dirver模拟GY39和smoke），改成了互动视频类游戏，在改进为互动视频类游戏时学会了剪视频、音频等技能。

二、语音识别模块

在该项目中运用语音识别模块能够完成steam登录、输入账户名、密码、打开游戏、控制视频播放器、进行互动视频选择等一系列操作

使用的科大讯飞的语音识别库，能够修改x86\bin\cmd.bnf文件修改语音识别的内容和传的id，其实质是将识别到的语音文字转化成id进行处理，对id的处理代码在newer6818\voicectl.c文件下

该项目是CS架构项目，运用了网络编程的知识，启动服务器需要在x86\bin下运行asr_record_demo，客户端需要在newer6818下运行voicectl并且后面需要带上要连接的ip地址，完成这俩个操作之后就运行了语音识别模块

三、qt

ui设计图片素材文件在qt\cs1_6\pic下，视频素材有点大没有上传，素材一般通过label显示，包括图片和视频，代码主要采用的都是通过按键跳转page实现，下面主要介绍自己碰到的一些问题

1、因为我是第一次使用qt，很多操作都是现学，然后很多的操作并不是特别熟练，要实现自己想要的功能就有时候会遇到一些困难，例如我在实现记住密码功能的时候，老师只告诉了我们怎么实现登录的一个界面，并没有记住密码功能，我是自己寻找到了一个check box 模块，并得知了是运行的时候点击那个控件就会传过去一个信号，然后写槽函数的时候就在这个信号上下功夫，然后定义了三个全局变量，check1来记录进入槽函数的次数，remUser记录输入的账户名，remPassword记录输入的密码，每次进入槽函数check1++，当check1==2的时候，将check1置为0并且将remUser和remPassword改为空字符串，最后配合打开登录界面的按钮和密码框的槽函数实现了记住密码功能；
![image](https://user-images.githubusercontent.com/99958269/178135484-bd46775e-287a-481b-99d8-cf9e2b9110f9.png)
![image](https://user-images.githubusercontent.com/99958269/178135493-d230ede6-3ee3-4226-86b4-2cf3f2a6a968.png)




2、播放视频是使用的mplay，QString args=QString("mplayer -slave -quiet -x 800 -y 600 -wid %1 %2").arg(ui->labelcsgoexe->winId()).arg(playID)，playID是一个字符串，是自己想要播放视频的文件路径，然后我们想要通过进度条记录播放视频的进度，采用了一个定时器，不断读取mplay的信息（因为里面会包含视频已经播放的百分比），然后我们会将读取到的信息处理，处理函数是timer_out，将mplay的信息存放在str中，然后只要str中contains“ANS_PERCENT_POSITION”（因为记录百分比的格式是"ANS_PERCENT_POSITION = %d\n"），就用字符串链表分割函数split进行处理，通过两次分割会得到当前进度的百分比，例如“10”，然后通过toInt函数将其转化成整形即可；
![image](https://user-images.githubusercontent.com/99958269/177993161-babab6a9-20df-430c-923e-8c38cad55f43.png)


3、我们是通过mplay->stop()来实现的暂停按钮功能，然后我们还用到了定时器，之前我们按下暂停按钮之后进度条仍会继续走，这与现象不符，所以我们需要在Pause函数中加入一个变量记录进入槽函数的次数，因为暂停和继续播放都是同一个槽函数实现（只是不同次数进入槽函数功能和图标会发生改变），与check1相同，第一次进入的时候还要将定时器timer->stop();第二次进入则需要更改button的样式并且让定时器开启timer->start(500);
![image](https://user-images.githubusercontent.com/99958269/177993100-43f6d564-5d28-4489-9897-1d49019b05dd.png)

