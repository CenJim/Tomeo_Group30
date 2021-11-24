#ifndef THE_MENU_H
#define THE_MENU_H

#include <QMenuBar>
#include <QMenu>
#include <Qt>
#include "the_menu_file.h"
#include "the_menu_video.h"
#include "the_menu_audio.h"
#include "the_menu_tools.h"
#include "the_menu_help.h"
class TheMenu : public QMenuBar
{
private:
    FileMenu *fileMenu;
    VideoMenu *videoMenu;
    AudioMenu *audioMenu;
    ToolsMenu *toolsMenu;
    HelpMenu *helpMenu;
public:
    TheMenu();
};

#endif
