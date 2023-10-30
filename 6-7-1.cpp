
#include <iostream>
#include <iomanip>

using namespace std;

/**
	Reads a seaquensw of floating point numbers.
	@param inputs an array containing number
	@param capacity	the capacity of thats array
	@returne the number of inputs stored in thats array

*/

int read_inputs(double inputs[], int capacity)
{
	int current_size = 0;
	cout << "Please, enter value, Q for queet:" << endl;
	bool more = true;
	while (more)
	{
		double input;
		cin >> input;
		if (cin.fail())
		{
			more = false;
		}
		else if (current_size < capacity)
		{
			inputs[current_size] = input;
			current_size++;
		}
	}
	return current_size;
}

/**
	Multiple all elements of the array by a factor
	@param values a partially filled array
	@param size the number of the elements in values
	@param the value with wich each element multiply
*/

void multiply(double values[], int size, double factor)
{
	for (int i = 0; i < size; i++)
	{
		values[i] = values[i] * factor;
	}
}

/**
	Prints all elements of a vector separated by comma
	@param values a partially filled array
	@param size the number of elements in vales
*/
void print(double values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i > 0) { cout << ", "; }
		cout << values[i];
	}
	cout << endl;
}

int main()
{
	const int CAPACITY = 1000;
	double values[CAPACITY];
	int size = read_inputs(values, CAPACITY);
	multiply(values, size, 2);
	print(values, size);

	return 0;
}

