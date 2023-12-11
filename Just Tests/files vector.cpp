#include <fstream>
#include<iomanip>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector <string*> pathStringStart;
	string name = "TestX";
	string suffix;
	ofstream fileStream;
	string fileWithPathX = "c:\\My Documents\\Programming\\Big C++\\Lessons\\Just Tests\\test";
	string fullPath;
	
	/*
	for (int i = 0; i < 2; i++);
	{
		//string (suffix + to_string(i);
		//suffix = to_string(i);
		
		//filesStart.push_back(&fullPath);
		// pathStringStart[i] = &fullPath;
	}
	*/

	if (fileStream.fail())
	{
		cout << "Houston, we have some problem with a file!" << endl;
	}
	// cout << *filesStart[0];
	
	else
	{
		for (int i=0; i < 2; i++)
		{
		suffix = to_string(i);
		fullPath = fileWithPathX + suffix + ".txt";
		fileStream.open(fullPath, ios::out | ios::app);
		fileStream << name << endl;
		cout << "All cool!" << endl;
		fileStream.close();
		}
	}

	
	return 0;
	 
}