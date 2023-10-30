#include <iostream>
using namespace std;

int* find(int values[], int size, int target)
{
	int* p = values;
	while (p != values + size)
	{
		if (*p == target)
		{
			return p;
		}
		p++;
	}
	return nullptr;
}

int main()
{
	int values[] = { 0, 1, 4, 9, 16, 25, 36, 49, 64, 81 };
	int size = sizeof(values) / sizeof(values[0]);

	int target;
	cin >> target;

	int* targetPtr = find(values, size, target);
	if (targetPtr == nullptr)
	{
		cout << "Value not found." << endl;
	}
	else
	{
		int index = targetPtr - values;
		cout << "Value " << "target << exist in the " << "array at index " << index << "." << endl;
	}
	return 0;
}