#include "the_button_pause.h"
PauseButton::PauseButton(const QString &text):QPushButton(text) {
    this->setFlat(true);
    this->setMinimumSize(60,60);
    this->setMaximumSize(60,60);
    this->setIconSize(QSize(50,50));;
    this->setIcon(QIcon(":/next.svg"));
}
