#ifndef THE_MENU_TOOLS_H
#define THE_MENU_TOOLS_H

#include <QMenu>

class ToolsMenu : public QMenu {
private:
    QAction* metadataAction;
    QAction* contacttheuploaderAction;
    QAction* viewAction;
    QAction* subtitlesAction;
    QAction* autoclipgenerationAction;
    QAction* editthevideoAction;
    // Tools View
    QAction* fullscreenAction;
    QAction* maximizeAction;
    QAction* minimizeAction;
    QAction* reducesizeAction;
    QAction* enlargesize;
    // Tools Subtitles
    QAction* uploadtranscriptAction;
    QAction* edittranscriptAction;
    QAction* hideshowAction;

    QMenu *viewMenu = new QMenu;
    QMenu *subtitlesMenu = new QMenu;
public:
    ToolsMenu(const QString &title);
};

#endif // THE_MENU_TOOLS_H
