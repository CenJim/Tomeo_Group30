#ifndef THE_MENU_HELP_H
#define THE_MENU_HELP_H

#include <QMenu>

class HelpMenu : public QMenu {
private:
    QAction* helpAction;
    QAction* moreinformation;
    QAction* guideAction;
    QAction* registerAction;
public:
    HelpMenu(const QString &title);

};
#endif // THE_MENU_HELP_H
