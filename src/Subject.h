#ifndef SUBJECT_H
#define SUBJECT_H
#include <list>
#include "Observer.h"

class Observer;

/* Subject of observation: passes input commands. */
class Subject {
public:
    virtual ~Subject() {}
    virtual void subscribe(Observer *obs); //subscribe an observer
    virtual void unsubscribe(Observer *obs); //unsubscribe an observer
    virtual void notify(); //ask each subscribed observer to update itself
protected:
    Subject() {}
private:
    std::list<Observer *> observers_; //list of observers
};
#endif

