#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> A[10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			A[i].push_back(0);
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < A[i].size(); j++)
		{
			cout << A[i].at(j);
		}
		cout << endl;

}
}
