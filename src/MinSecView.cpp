#include <iomanip>
#include <iostream>
#include "MinSecView.h"
using namespace std;

/**
 * Author: Renato Montes
 */

/* Display view of minutes and seconds. */
void MinSecView::display(std::ostream& os) const {
    os << timer_->get() / 60 << ':' 
       << setfill('0') << setw(2) << timer_->get() % 60 << endl;
}

