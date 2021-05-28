#ifndef TIMERVIEW_H
#define TIMERVIEW_H
#include <iostream>
#include "Observer.h"
#include "Subject.h"
#include "Timer.h"

/* Base class for timer displayed views. */
class TimerView: public Observer {
public:
    TimerView(Timer *timer);
    virtual void update(Subject *s); //from Observer class
    virtual void display(std::ostream& os) const = 0;
protected:
    Timer *timer_;
};
#endif

