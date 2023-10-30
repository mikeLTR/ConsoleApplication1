#include <iostream>
#include "zheader.h"


using namespace std;



int main()
{
	Cube cube1(5);
	Cube cube2(10);
	cout << cube1.perimeter(10) << endl;
	cout << cube2.volume(12.5) << endl;
	cout << cube2.perimeter(10) << endl;
	cout << cube1.volume(12.5) << endl;

	Cube* cube4_pointer = new Cube(18);
	cout << cube4_pointer->volume(20) << endl;

	cout << cube4_pointer->perimeter(5);

	// delete cube4_pointer;

	Cube* newObject_pointer = new Cube (16);
	cout << newObject_pointer->cicleLength(10) << endl;
	return 0;
}


