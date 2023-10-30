#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int const SIZE = 10;
	int* array_pointer[SIZE];

	for (int i =0; i < SIZE; i++)
	{
		array_pointer[i] = new int[5];
	}
	for (int j = 0; j < 5; j++)
	{
		array_pointer[2][j] = 5;
	}
	return (0);
}