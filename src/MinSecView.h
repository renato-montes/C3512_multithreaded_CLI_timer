#ifndef MINSECVIEW_H
#define MINSECVIEW_H
#include <iostream>
#include "Timer.h"
#include "TimerView.h"

/* View of minutes and seconds. */
class MinSecView: public TimerView {
public:
    MinSecView(Timer *timer): TimerView(timer) {}
    virtual void display(std::ostream& os) const; //show minutes and seconds
};
#endif

