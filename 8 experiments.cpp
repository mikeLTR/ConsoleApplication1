#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main()
{
	ofstream my_great_file;
	my_great_file.open("c:\\My Documents\\Programming\\Big C++\\Lessons\\test.txt");
	if (my_great_file.fail())
	{
		cout << "File access error" << endl;
		my_great_file.close();
		return 1;
	}
	else
	{
		int name = 1234;
		string my_string = "test 2";
		my_great_file << name << endl << my_string;
		// cin >> name >> my_string;
		if (! my_great_file.fail())
		{
			my_great_file.close();
			cout << "all is fine" << endl;
			return 0;
		}
		else
		{
			cout << "formation fail" << endl;
			return 2;
		}

	}
}