#ifndef THE_MENU_VIDEO_H
#define THE_MENU_VIDEO_H

#include <QMenu>

class VideoMenu : public QMenu {
private:
    QAction* sortmediaAction;
    QAction* filtermediaAction;
    QAction* fastforwardAction;
    QAction* slowmotionAction;
    QAction* loopAction;
    QAction* exportvideoonlyAction;
    QAction* exportvideoandaudioAction;
    QAction* savevideoAction;
    QAction* savevideoasAction;
    QAction* duplicatevideoAction;

public:
    VideoMenu(const QString &title);
};

#endif // THE_MENU_VIDEO_H
