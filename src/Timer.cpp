#include <chrono>
#include <thread>
#include "KeyboardController.h"
#include "Timer.h"
using namespace std;

/**
 * Author: Renato Montes
 */

Timer::Timer(): sec_(0), ticking_(false) {
    thread t(&Timer::run, this);
    t.detach();
}

/* Marks variable to start or continue ticking. */
void Timer::start() {
    ticking_ = true;
}

/* Marks variable to stop ticking. */
void Timer::stop() {
    ticking_ = false;
}

/* Resets second count to zero. */
void Timer::reset() {
    sec_ = 0;
}

/* Get total second conut. */
unsigned long Timer::get() const {
    return sec_;
}

/* Subscribe an observer. */
void Timer::subscribe(Observer *obs) {
    Subject::subscribe(obs);
}

/* Unsubscribe an observer. */
void Timer::unsubscribe(Observer *obs) {
    Subject::unsubscribe(obs);
}

/* Alert observers of an update. */
void Timer::notify() {
    Subject::notify();
}

/* Direct an input command to an action. */
void Timer::update(Subject *subj) {
    char command = dynamic_cast<KeyboardController*>(subj)->getCommand();
    switch (command) {
    case 's':
        start();
        break;
    case 'h':
        stop();
        break;
    case 'r':
        reset();
        break;
    default:
        break;
    }
}

/* Makes the timer tick every second. */
void Timer::run() {
    while(true) {
        this_thread::sleep_for(chrono::seconds(1));
        if (ticking_) {
            sec_++;
            notify();
        }
    }
}

