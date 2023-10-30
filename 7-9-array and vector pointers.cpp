#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int*> raws;
	for (int i = 0; i < 10; i++)
	{
		int* raw = new int[i + 1];
		raws.push_back(raw);
		for (int j = 0; j <= i; j++)
		{
			raws[i][j] = 0;
		}
	}

	// print out board t oconsole

	for (int i = 0; i < raws.size(); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << raws[i][j] << " ";
		}
		cout << endl;
	}
	while (raws.size() > 0)
	{
		delete[] raws[raws.size() - 1];
		raws.pop_back();
	}

	return 0;
}