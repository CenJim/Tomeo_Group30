#include "the_menu_file.h"

FileMenu::FileMenu(const QString &title):QMenu(title) {

    openfileAction = new QAction("&Open file ");
    openmediaAction = new QAction("&Open media ");
    openfolderAction = new QAction("&Open folder ");
    closefileAction = new QAction("&Close file ");
    closemediaAction = new QAction("&Close media");
    closeallAction = new QAction("&Close all");
    saveAction = new QAction("&Sace ");
    saveasAction = new QAction("&Save as ");
    exportAction = new QAction("&Export media");
    shareAction = new QAction("&Share");
    exitAction = new QAction("&Exit ");
    quitAction = new QAction("&Quit Tomeo");

    this->addAction(openfileAction);
    this->addAction(openmediaAction);
    this->addAction(openfolderAction);
    this->addSeparator();
    this->addAction(closefileAction);
    this->addAction(closemediaAction);
    this->addAction(closeallAction);
    this->addSeparator();
    this->addAction(saveAction);
    this->addAction(saveasAction);
    this->addSeparator();
    this->addAction(exportAction);
    this->addAction(shareAction);
    this->addSeparator();
    this->addAction(exitAction);
    this->addAction(quitAction);
}
