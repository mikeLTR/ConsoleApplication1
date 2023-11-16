#include <string>
#include <vector>
#include <sstream>
using namespace std;

#include "critter.h"

Critter::Critter()
{
    position = 0;
}
string Critter::get_history() const
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
void Critter::add_history(string event)
{
    history.push_back(event);
}
int Critter::get_position() const
{
    return position;
}
void Critter::move(int steps)
{
    position = position + steps;
    ostringstream out;
    out << "move to " << position;
    add_history(out.str());
}
void Critter::act() { }