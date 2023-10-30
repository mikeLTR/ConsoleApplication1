#include <iomanip>
#include <iostream>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream my_file_in;
	my_file_in.open("8-2-2-in.txt");
	ofstream my_file_out;
	my_file_out.open("8-2-2-out.txt");

	string word;
	string previous_word;
	while (my_file_in >> word)
	{
		if (word != previous_word)
		{
			my_file_out << word << " ";
			previous_word = word;
		}
	}
	my_file_in.close();
	my_file_out.close();
	return 0;
}
