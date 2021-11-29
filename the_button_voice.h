#ifndef THE_BUTTON_VOICE_H
#define THE_BUTTON_VOICE_H

#include <QPushButton>

class VoiceButton : public QPushButton {
    Q_OBJECT
public:
    VoiceButton(const QString &text);
//changed by XiujingLi
    void makeConnections();

//changed bu XiujingLi
signals:
    void voiceButton_pushed();
};

#endif // THE_BUTTON_VOICE_H
