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
}
