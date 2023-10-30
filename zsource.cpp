
// #include <string>
// #include <iomanip>



using namespace std;

#include "zheader.h"

Cube::Cube(float cLength)
{
	cubeLength = cLength;
}
float Cube::perimeter(float side)
{
	float cubePerimeter = 0;
	cubePerimeter = side * 8;
	return cubePerimeter;
}
float Cube::volume(float side)
{
	float cubeVolume = side * side * side;
	return cubeVolume;
}

float Cube::cicleLength(float length)
{
	float cLength = length / 2 * 2 * pi;
	return cLength;
}