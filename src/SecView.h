#ifndef SECVIEW_H
#define SECVIEW_H
#include <iostream>
#include "Timer.h"
#include "TimerView.h"

/* View of total seconds. */
class SecView: public TimerView {
public:
    SecView(Timer *timer): TimerView(timer) {}
    virtual void display(std::ostream& os) const; //show total seconds
};
#endif

