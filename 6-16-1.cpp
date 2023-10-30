#include <iomanip>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <vector <int> > myVector = { { 0, 1, 2, 3, 4 }, {-1, -2, -3, -4, -5} };
	int raw = myVector.size();
	int colomn = myVector[0].size();
	cout << raw << " " << colomn << " " << myVector[0][0];
	
	return 0;
}