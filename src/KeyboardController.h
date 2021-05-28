#ifndef KEYBOARDCONTROLLER_H
#define KEYBOARDCONTROLLER_H
#include <atomic>
#include "Subject.h"
#include "Observer.h"

/* Holder of input command interface. */
class KeyboardController: public Subject {
public:
    void start();            //start the loop to get user commands
    char getCommand() const; //return the "command"

    virtual void subscribe(Observer *obs); //subscribe an observer
    virtual void unsubscribe(Observer *obs); //unsubscribe an observer
    virtual void notify(); //ask each subscribed observer to update itself
private:
    std::atomic<char> command_; //store the "command" the user enters
};
#endif

