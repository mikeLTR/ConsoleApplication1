// Array sorting code
#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	const int ARRAY_SIZE = 10;
	double a[ARRAY_SIZE];
	int array_s = 0;
	double input_value;
	
	while (cin >> input_value || array_s == ARRAY_SIZE)
	{
		a[array_s] = input_value;
		array_s ++;

	}
	
	sort(a, a + array_s);

	for (int i = 0; i < array_s; i++)
{
			if (i == (array_s - 1))
	{
		cout << a[i];
	}
			else
	{
		cout << a[i] << "  ";

	}
}

	return 0;
}
