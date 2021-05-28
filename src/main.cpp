#include "KeyboardController.h"
#include "MinSecView.h"
#include "SecView.h"
#include "TickView.h"
#include "Timer.h"

/**
 * Author: Renato Montes
 */

/* Main function: program entry point. */
int main() {
    Timer t;

    KeyboardController kc;
    kc.subscribe(&t);

    TickView tickv(&t);
    SecView secv(&t);
    MinSecView minsecv(&t);
    t.subscribe(&tickv);
    t.subscribe(&secv);
    t.subscribe(&minsecv);

    kc.start();    
}

