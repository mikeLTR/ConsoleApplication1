// zyDE 4.17.3: montecarlo.cpp
/**
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    const int TRIES = 10000;

    srand(time(0));

    int hits = 0;
    for (int i = 1; i <= TRIES; i++)
    {
        double r = rand() * 1.0 / RAND_MAX; // Between 0 and 1
        double x = -1 + 2 * r; // Between -1 and 1
        r = rand() * 1.0 / RAND_MAX;
        double y = -1 + 2 * r;
        if (x * x + y * y <= 1) { hits++; }
    }
    double pi_estimate = 4.0 * hits / TRIES;
    cout << "Estimate for pi: " << pi_estimate << endl;
    return 0;
}
*/

//Challenge Activity 5.3.1

#include <iostream>
#include <cmath>
using namespace std;

/**
   Computes the area of a triangle.
   @param x1 the x-coordinate of the first corner
   @param y1 the y-coordinate of the first corner
   @param x2 the x-coordinate of the second corner
   @param y2 the y-coordinate of the second corner
   @param x3 the x-coordinate of the third corner
   @param y3 the y-coordinate of the third corner
   @return the area of the triangle
*/

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{

    /* Determine new coordinates with x1, y1 are shifting to 0; */


    x2 = x2 - x1;
    y2 = y2 - y1;
    x3 = y3 - y1;
    y3 = y3 - y1;

    double triangleArea;
    // calculate area
    triangleArea = abs(x2 * y2 - x3 * y3) / 2;
    // Calculating new triangle area with coordinates x1 = 0 and y1 = 0
    return triangleArea;



}

int main()
{
    double x1 = 1;
    double y1 = 1;
    double x2 = 6;
    double y2 = 8;
    double x3 = 10;
    double y3 = 12;

    /**
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    */

    cout << area(x1, y1, x2, y2, x3, y3) << endl;

    return 0;
}