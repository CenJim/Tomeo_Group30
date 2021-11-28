#include "the_button_print.h"
PrintButton::PrintButton(const QString &text):QPushButton(text) {
    this->setFlat(true);
    this->setMinimumSize(40,30);
    this->setMaximumSize(40,30);
    this->setIconSize(QSize(30,30));;
    this->setIcon(QIcon(":/print-alt.svg"));
}
