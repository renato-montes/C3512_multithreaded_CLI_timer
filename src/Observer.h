#ifndef OBSERVER_H
#define OBSERVER_H
#include "Subject.h"

class Subject;

/* Abstract base class for observers. */
class Observer {
public:
    virtual ~Observer() {}
    virtual void update(Subject *) = 0;
protected:
    Observer() {}
};
#endif

