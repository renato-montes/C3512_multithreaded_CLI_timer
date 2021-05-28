#include <iostream>
#include <string>
#include "KeyboardController.h"
using namespace std;

/**
 * Author: Renato Montes
 */

/* Start the loop to get user commands. */
void KeyboardController::start() {
    string line;
    while (getline(cin, line)) {
        size_t pos = line.find_first_not_of(" \t");
        if (line.at(pos) == 's') {
            command_ = 's';
            notify();
        } else if (line.at(pos) == 'h') {
            command_ = 'h';
            notify();
        } else if (line.at(pos) == 'r') {
            command_ = 'r';
            notify();
        } else if (line.at(pos) == 'x')
            return;
    }
}

/* Return the "command". */
char KeyboardController::getCommand() const {
    return command_;
}

/* Subscribe an observer. */
void KeyboardController::subscribe(Observer *obs) {
     Subject::subscribe(obs);
}

/* Unsubscribe an observer. */
void KeyboardController::unsubscribe(Observer *obs) {
     Subject::unsubscribe(obs);
}

/* Ask each subscribed observer to update. */
void KeyboardController::notify() {
    Subject::notify();
}

