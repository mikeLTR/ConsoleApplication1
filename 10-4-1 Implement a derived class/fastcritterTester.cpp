#include <iostream>
#include <sstream>
using namespace std;

#include "critter.h"

/**
   A FastCritter moves twice as fast as a regular critter.
*/

class FastCritter:private Critter /* Your code goes here */
{
public:
	void move(int steps);
	string get_history();


private:
    int position;
    vector <string> history;
};


string FastCritter::get_history()
{
    ostringstream out;
    out << "[";
    if (history.size() > 0)
    {
        out << history[0];
        for (int i = 1; i < history.size(); i++)
        {
            out << ", " << history[i];
        }
    }
    out << "]";
    return out.str();
}

void FastCritter::move(int steps)
{
    position = position + steps;
    ostringstream out;
    out << "move to " << position;
    add_history(out.str());
}
/* Your code goes here */
int main()
{
	FastCritter speedy;
	speedy.move(10);
	cout << speedy.get_history() << endl;
	cout << "Expected: [move to 20]\n" << endl;
	speedy.move(-1);
	cout << speedy.get_history() << endl;
	cout << "Expected: [move to 20, move to 18]" << endl;

	return 0;
}