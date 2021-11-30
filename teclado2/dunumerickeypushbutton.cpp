#include "dunumerickeypushbutton.h"

DuNumericKeyPushButton::DuNumericKeyPushButton(QWidget *parent)
    :QPushButton(parent)
{
    setMinimumSize(100, 100);
    setMaximumSize(100, 100);

    connect(this, &DuNumericKeyPushButton::clicked, [&]() {
         emit keyWasClicked(text());
    });

}
