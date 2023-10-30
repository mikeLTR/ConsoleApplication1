#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a[2][2] = { 5,10, 15,20 };
	int x = 0;
	x = a[0][0]++;
	cout << x;
	
	cout << endl;

	x = a[0][0];

	cout << x;

};