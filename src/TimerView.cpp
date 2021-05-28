#include <iostream>
#include "TimerView.h"
using namespace std;

/**
 * Author: Renato Montes
 */

TimerView::TimerView(Timer *timer): timer_(timer) {}

/* Displays timer count in its own format. */
void TimerView::update(Subject *s) {
    if (s == timer_)
        display(cout);
}

