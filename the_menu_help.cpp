#include "the_menu_help.h"
HelpMenu::HelpMenu(const QString &title):QMenu(title) {
    helpAction = new QAction("&Help");
    moreinformation = new QAction("&More information");
    guideAction = new QAction("&Guide");
    registerAction = new QAction("&Register");

    this->addAction(helpAction);
    this->addSeparator();
    this->addAction(moreinformation);
    this->addSeparator();
    this->addAction(guideAction);
    this->addSeparator();
    this->addAction(registerAction);
}

