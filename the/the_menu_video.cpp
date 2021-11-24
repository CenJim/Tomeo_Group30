#include "the_menu_video.h"

VideoMenu::VideoMenu(const QString &title):QMenu(title) {
    // Video
    sortmediaAction = new QAction("&Sort media");
    filtermediaAction = new QAction("&Filter media");
    fastforwardAction = new QAction("&Fast forward");
    slowmotionAction = new QAction("&Slow motion");
    loopAction = new QAction("&Loop");
    exportvideoonlyAction = new QAction("&Export video only");
    exportvideoandaudioAction = new QAction("&Export video and audio");
    savevideoAction = new QAction("&Save video");
    savevideoasAction = new QAction("&Save video as");
    duplicatevideoAction = new QAction("&Duplicate video");

    this->addAction(sortmediaAction);
    this->addAction(filtermediaAction);
    this->addSeparator();
    this->addAction(fastforwardAction);
    this->addAction(slowmotionAction);
    this->addAction(loopAction);
    this->addSeparator();
    this->addAction(exportvideoonlyAction);
    this->addAction(exportvideoandaudioAction);
    this->addAction(savevideoAction);
    this->addAction(savevideoasAction);
    this->addAction(duplicatevideoAction);
}
