#include <iostream>
using namespace std;

/**
   Finds the next occurrence of an element in an array.
   @param values an array of values
   @param searched_value the value to search for
   @param start the position at which to start the search
   @return the position of the first match at position >= start,
   or -1 if the element was not found
*/

int find_next(int values[], int size, int searched_value, int start)
{
	for (int i = start; i < size; i++)
	{
		if (values[i] == searched_value)
		{
			return i;
		}

	}
	return -1;
}

int main()
{
	int a[] = { 3, 1, 4, 1, 5, 9, 2, 6 };
	int found_at = find_next(a, 8, 1, 2);
	cout << "find_next({ 3, 1, 4, 1, 5, 9, 2, 6 }, 8, 1, 2)" << endl;
	cout << "Found at: " << found_at << endl;
	cout << endl;
	cout << "find_next({ 3, 1, 4, 1, 5, 9, 2, 6 }, 8, 7, 3)" << endl;
	found_at = find_next(a, 8, 7, 3);
	cout << "Found at: " << found_at << endl;

	return 0;
}