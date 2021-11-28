#include "the_button_voice.h"
VoiceButton::VoiceButton(const QString &text):QPushButton(text) {
    this->setFlat(true);
    this->setMinimumSize(30,30);
    this->setMaximumSize(30,30);
    this->setIconSize(QSize(30,30));;
    this->setIcon(QIcon(":/maximize-size.svg"));
}
