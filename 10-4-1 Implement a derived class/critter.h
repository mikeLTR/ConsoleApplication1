#ifndef CRITTER_H
#define CRITTER_H

#include <string>
#include <vector>
using namespace std;

/**
   A simulated critter.
*/
class Critter
{
public:
    /**
       Constructs a critter at position 0 with blank history.
    */
    Critter();

    /**
       Gets the history of this critter.
       @return the history
    */
    string get_history() const;

    /**
       Adds to the history of this critter.
       @param event the event to add to the history
    */
    void add_history(string event);

    /**
       Gets the position of this critter.
       @return the position
    */
    int get_position() const;

    /**
       Moves this critter.
       @param steps the number of steps by which to move.
    */
    void move(int steps);

    /**
       The action of this critter in one step of the simulation.
    */
    void act();

private:
    int position;
    vector<string> history;
};

#endif