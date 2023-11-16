#include <iostream>
using namespace std;

#include "critter.h"

/**
   A sloth eats and sleeps.
*/
class Sloth : public Critter
{
public:
    Sloth();
    /* Your code goes here */
    void act();
private:

    /* Your code goes here */
    int steps;
};

Sloth::Sloth()
{
    steps = 0;
}

void Sloth::act()
{
    if (/* Your code goes here */)
    {
        add_history("eat");
        /* Your code goes here */
    }
    else
    {
        add_history("sleep");
        /* Your code goes here */
    }
}

int main()
{
    Sloth sloth;
    sloth.act();
    cout << sloth.get_history() << endl;
    cout << "Expected: [eat]\n" << endl;
    sloth.act();
    cout << sloth.get_history() << endl;
    cout << "Expected: [eat, sleep]\n" << endl;
    sloth.act();
    cout << sloth.get_history() << endl;
    cout << "Expected: [eat, sleep, eat]\n" << endl;
    sloth.act();
    cout << sloth.get_history() << endl;
    cout << "Expected: [eat, sleep, eat, sleep]" << endl;

    return 0;
}