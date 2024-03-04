//
// Created by 孟博文 on 2024/3/2.
//

#include "Keys.h"

void initKeys(void) {
    pinMode(UP_BUTTON_PIN, INPUT);
    pinMode(DOWN_BUTTON_PIN, INPUT);
    pinMode(LEFT_BUTTON_PIN, INPUT);
    pinMode(RIGHT_BUTTON_PIN, INPUT);
    pinMode(ENTER_BUTTON_PIN, INPUT);
}

int getKeyValue(void) {
    if (digitalRead(UP_BUTTON_PIN)) {
        delay(5);
        if (digitalRead(UP_BUTTON_PIN)) {
            return 1;
        }
    } else if (digitalRead(DOWN_BUTTON_PIN)) {
        delay(5);
        if (digitalRead(DOWN_BUTTON_PIN)) {
            return 2;
        }
    } else if (digitalRead(LEFT_BUTTON_PIN)) {
        delay(5);
        if (digitalRead(LEFT_BUTTON_PIN)) {
            return 3;
        }
    } else if (digitalRead(RIGHT_BUTTON_PIN)) {
        delay(5);
        if (digitalRead(RIGHT_BUTTON_PIN)) {
            return 4;
        }
    } else if (digitalRead(ENTER_BUTTON_PIN)) {
        delay(5);
        if (digitalRead(ENTER_BUTTON_PIN)) {
            return 5;
        }
    }
    return 0;
}

//
//
//
