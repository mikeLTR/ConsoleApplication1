#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

void process(string name, int grade)
{
	cout << name << " " << grade << endl;
}

int main()
{
	string one_string;
	string place;

	ifstream in_stream;
	in_stream.open("8-6-1 users.txt");

	int grade = 0;
	string next;
	string name;

	string line;
	while (getline(in_stream, line))
	{
		istringstream string_in;
		string_in.str(line);
		string_in >> name;
		while (string_in >> next)
		{
			if (isdigit(next[0]))
			{
				grade = stoi(next);
			}
			else
			{
				name = name + " " + next;
			}
		}
		process(name, grade);
	}
	return 0;
}
