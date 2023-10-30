#include <iomanip>
#include <string>
#include <iostream>
#include <fstream>


using namespace std;
int main()
{
	ifstream my_in_file;
	my_in_file.open("8-2-1-in.txt");
	ofstream my_out_file;
	my_out_file.open("8-2-1-out.txt");

	string country;
	int population;
	
	getline(my_in_file, country);
	my_in_file >> population;
	my_out_file << country << " " << population;

	/*
	string character;
	getline(my_in_file, character);
	my_out_file << endl;

	getline(my_in_file, character);
	my_out_file << endl;

	getline(my_in_file, country);
	my_in_file >> population;
	my_out_file << country << " " << population;

	// getline(my_in_file, country);
	// my_in_file >> population;
	// my_out_file << country << " " << population;
	*/

	my_in_file.close();
	my_out_file.close();


}