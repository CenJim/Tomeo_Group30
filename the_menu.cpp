#include "the_menu.h"

TheMenu::TheMenu()
{
    fileMenu = new FileMenu("&File(F)    ");
    videoMenu = new VideoMenu("&Video(V)    ");
    audioMenu = new AudioMenu("&Audio(A)    ");
    toolsMenu = new ToolsMenu("&Tools(T)    ");
    helpMenu = new HelpMenu("&Help(H)    ");

    this->addMenu(fileMenu);
    this->addMenu(videoMenu);
    this->addMenu(audioMenu);
    this->addMenu(toolsMenu);
    this->addMenu(helpMenu);

    //changed by XiujingLi
    makeConnections();
}

//changed by XiujingLi
void TheMenu::makeConnections(){
    connect(videoMenu,SIGNAL(fastForward_triggered1_5()),this,SIGNAL(fastForward_is_triggered1_5()));
    connect(videoMenu,SIGNAL(fastForward_triggered1_75()),this,SIGNAL(fastForward_is_triggered1_75()));
    connect(videoMenu,SIGNAL(fastForward_triggered2()),this,SIGNAL(fastForward_is_triggered2()));
    connect(videoMenu,SIGNAL(slowMotion_triggered0_75()),this,SIGNAL(slowMotion_is_triggered0_75()));
    connect(videoMenu,SIGNAL(slowMotion_triggered0_5()),this,SIGNAL(slowMotion_is_triggered0_5()));
    connect(videoMenu,SIGNAL(slowMotion_triggered0_1()),this,SIGNAL(slowMotion_is_triggered0_1()));
    connect(videoMenu,SIGNAL(normalSpeed_triggered()),this,SIGNAL(normalSpeed_is_triggered()));
}
