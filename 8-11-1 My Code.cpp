/** This app swith a two integer nimbers are on a position 0 and 11 beatween each others using binar access to a file 
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int first_letter = 0;
	int second_letter = 0;
	string fileName = "";
	
	cout << "Please, input file name: ";
	cin >> fileName;

	fstream dataFileStream;
	dataFileStream.open(fileName.c_str(), ios::in | ios::out | ios::binary);
	
	dataFileStream.seekg(0);
	first_letter = dataFileStream.get();
	
	dataFileStream.seekg(2);
	second_letter = dataFileStream.get();

	dataFileStream.close();

	dataFileStream.open(fileName.c_str(), ios::in | ios::out | ios::binary);
	
	dataFileStream.seekp(0);
	dataFileStream.put(second_letter);

	dataFileStream.seekp(2);
	dataFileStream.put(first_letter);

	dataFileStream.close();
	return 0;

}