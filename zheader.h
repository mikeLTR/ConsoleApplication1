// #pragma once

#ifndef ZHEADER_H
#define ZHEADER_H

static const double pi = 3.14159;

#include <iostream>
#include <string>

using namespace std;

class Cube
{
public:
	Cube(float cLength);
	float perimeter(float side);
	float volume(float side);
	float cicleLength(float length);

private:
	float cubeLength;

};
#endif