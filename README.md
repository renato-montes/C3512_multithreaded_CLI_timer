Timer
=====

A multithreaded command-line timer, given as an assignment for BCIT's COMP 3512 (Object-Oriented Programming in C++).

Once the program is run, the commands are `s` (start), `h` (halt, stop), `r` (reset) and `x` for quitting.

There are four threads: one that takes the commands, and three others that display the timer counts in their own format (an asterisk, total seconds, and minutes and seconds).

![GIF animation showing the user starting, halting and restarting the multithreaded timer](/readme-img/Timer-animation.png)
