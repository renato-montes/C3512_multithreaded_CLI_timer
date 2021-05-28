#include <algorithm>
#include "Subject.h"
using namespace std;

/**
 * Author: Renato Montes
 */

/* Subscribe an observer. */
void Subject::subscribe(Observer *obs) {
    observers_.push_back(obs);
}

/* Release a subscribed observer. */
void Subject::unsubscribe(Observer *obs) {
    observers_.erase(remove(observers_.begin(), observers_.end(), obs),
                     observers_.end());
}

/* Notify subscribers of an update. */
void Subject::notify() {
    for (auto po: observers_) {
        po->update(this);
    }
}

