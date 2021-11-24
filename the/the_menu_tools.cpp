#include "the_menu_tools.h"
ToolsMenu::ToolsMenu(const QString &title):QMenu(title) {
    // Tools
    metadataAction = new QAction("&Meta data");
    contacttheuploaderAction = new QAction("&Contant the upload");
    viewAction = new QAction("&View");
    subtitlesAction = new QAction("&Subtitles");
    autoclipgenerationAction = new QAction("&Auto clip generation");
    editthevideoAction = new QAction("&Edit the video");

    this->addAction(metadataAction);
    this->addSeparator();
    this->addAction(contacttheuploaderAction);
    this->addSeparator();

    // View
    this->addAction(viewAction);
    fullscreenAction = new QAction("&Full screen");
    maximizeAction = new QAction("&Maximize");
    minimizeAction = new QAction("&Minimize");
    reducesizeAction = new QAction("&Reduce size");
    enlargesize = new QAction("&Enlarge size");

    viewMenu->addAction(fullscreenAction);
    viewMenu->addAction(maximizeAction);
    viewMenu->addAction(minimizeAction);
    viewMenu->addAction(reducesizeAction);
    viewMenu->addAction(enlargesize);

    viewAction->setMenu(viewMenu);
    this->addMenu(viewMenu);

    this->addSeparator();

    // View
    this->addAction(subtitlesAction);
    uploadtranscriptAction = new QAction("&Upload transcript");
    edittranscriptAction = new QAction("&Edit transcript");
    hideshowAction = new QAction("&Hide/Show subtitles");

    subtitlesMenu->addAction(uploadtranscriptAction);
    subtitlesMenu->addAction(edittranscriptAction);
    subtitlesMenu->addAction(hideshowAction);

    subtitlesAction->setMenu(subtitlesMenu);
    this->addMenu(subtitlesMenu);

    this->addSeparator();
    this->addAction(autoclipgenerationAction);
    this->addAction(editthevideoAction);
}
