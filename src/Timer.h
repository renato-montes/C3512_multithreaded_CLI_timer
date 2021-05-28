#ifndef TIMER_H
#define TIMER_H
#include <atomic>
#include "Subject.h"
#include "Observer.h"

/* Timer holding seconds and timer actions. */
class Timer: public Subject, public Observer {
public:
    Timer();
    void          start();
    void          stop();
    void          reset();
    unsigned long get() const;

    Timer(const Timer&) = delete;
    Timer& operator=(const Timer&) = delete;

    virtual void subscribe(Observer *obs); //subscribe an observer
    virtual void unsubscribe(Observer *obs); //unsubscribe an observer
    virtual void notify(); //ask each subscribed observer to update itself

    virtual void update(Subject *);
private:
    std::atomic<unsigned long> sec_;     //number of seconds elapsed
    std::atomic<bool>          ticking_; //is timer ticking or not?
    void run();                          //function executed by thread
    
};
#endif

