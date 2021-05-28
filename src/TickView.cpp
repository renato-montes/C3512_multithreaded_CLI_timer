#include <iostream>
#include "TickView.h"
using namespace std;

/**
 * Author: Renato Montes
 */

/* Shows a tick (asterisk) for every second. */
void TickView::display(std::ostream& os) const {
    os << '*' << endl;
}

