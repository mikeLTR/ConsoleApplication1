#include <iostream>
#include <string>
using namespace std;

/**
   A simulated traffic light.
*/
class TrafficLight
{
public:
    /**
       Constructs a green traffic light.
    */
    TrafficLight();

    /**
       Constructs a traffic light.
       @param initial_color the initial color "green", "yellow", or "red"
    */
    TrafficLight(string initial_color);

    /**
       Moves this traffic light to the next color.
    */
    void next();

    /**
       Returns the current color of this traffic light.
       @return the current color
    */
    string get_color() const;

    /**
       Counts how often this traffic light has been red.
       @return the number of times this traffic light has been red
    */
    int get_reds() const;

private:
    string color;
    int reds;
};

TrafficLight::TrafficLight()
{
    color = "green";
    reds = 0;
    /* Your code goes here */
}

TrafficLight::TrafficLight(string initial_color)
{
    color = initial_color;
    /* Your code goes here */
}

void TrafficLight::next()
{
    if (color == "green")
    {
        color = "yellow";
    }
        else if (color == "yellow")
        {
            color = "red";
            reds = reds + 1;
            
        }
            else 
            { 
                color = "green";
            }

    /* Your code goes here */
}

string TrafficLight::get_color() const
{
    return color;
    /* Your code goes here */
}

int TrafficLight::get_reds() const
{
    return reds;
    /* Your code goes here */
}

int main()
{
    TrafficLight tl1;
    cout << tl1.get_color() << endl;
    cout << "Expected: green" << endl;
    cout << tl1.get_reds() << endl;
    cout << "Expected: 0\n" << endl;
    tl1.next();
    cout << tl1.get_color() << endl;
    cout << "Expected: yellow" << endl;
    cout << tl1.get_reds() << endl;
    cout << "Expected: 0\n" << endl;
    tl1.next();
    cout << tl1.get_color() << endl;
    cout << "Expected: red" << endl;
    cout << tl1.get_reds() << endl;
    cout << "Expected: 1\n" << endl;
    tl1.next();
    cout << tl1.get_color() << endl;
    cout << "Expected: green" << endl;
    cout << tl1.get_reds() << endl;
    cout << "Expected: 1\n" << endl;

    TrafficLight tl2("red");
    cout << tl2.get_color() << endl;
    cout << "Expected: red" << endl;
    cout << tl2.get_reds() << endl;
    cout << "Expected: 1\n" << endl;
    tl2.next();
    cout << tl2.get_color() << endl;
    cout << "Expected: green" << endl;
    cout << tl2.get_reds() << endl;
    cout << "Expected: 1\n" << endl;
    tl2.next();
    tl2.next();
    cout << tl2.get_color() << endl;
    cout << "Expected: red" << endl;
    cout << tl2.get_reds() << endl;
    cout << "Expected: 2" << endl;

    return 0;
}