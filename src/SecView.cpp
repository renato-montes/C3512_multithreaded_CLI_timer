#include <iostream>
#include "SecView.h"
using namespace std;

/**
 * Author: Renato Montes
 */

/* Display view of total number of seconds. */
void SecView::display(std::ostream& os) const {
    os << timer_->get() << endl;
}

