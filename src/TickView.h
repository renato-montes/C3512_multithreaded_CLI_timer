#ifndef TICKVIEW_H
#define TICKVIEW_H
#include <iostream>
#include "Timer.h"
#include "TimerView.h"

class TickView: public TimerView {
public:
    TickView(Timer *timer): TimerView(timer) {}
    virtual void display(std::ostream& os) const; //shows a tick per second
};
#endif

