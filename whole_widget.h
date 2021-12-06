#ifndef WHOLE_WIDGET_H
#define WHOLE_WIDGET_H

#include <QWidget>
#include "initial_window.h"
#include "full_screen.h"
#include "minimum_screen.h"
#include <QFileDialog>
#include "the_button.h"
#include "signinout_title.h"

extern ThePlayer *player;

class whole_widget:public QWidget
{
    Q_OBJECT
public:
    whole_widget();
    QVideoWidget *videoWidget = new QVideoWidget;
    void makeConnections();
    SignInOutTitle* signinout = new SignInOutTitle("");

private:
    initial_window *initialWidget = new initial_window();
    full_screen *fullscreenWidget = new full_screen();
    // Edited by Shruti Naik
    minimum_screen *minimumScreenWidget = new minimum_screen();

    //std::vector<TheButton*> buttons;
public slots:
    void initialShow();
    void fullwindowShow();
    void setPlayer();
    void openFile();
    void save();

    // Edited by Shruti Naik
    void minimumWindowShow();

    void closeAll();
};

#endif // WHOLE_WIDGET_H
