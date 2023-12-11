#include <fstream>
#include<iomanip>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

/*
	A File class with technic to create, read and write files 
*/ 

class File
{
public:

	/*
	Construct a new file object
	*/
	File();
	
	/*
	Get file full path and name
	*/
	string get_path_name();

	/*
	creating new file
	@param file_name to create new file
	
	*/
	int create_file(string file_name);
	
private:
	/*
	file path without file name and extention
	*/
	string fullPathAndName;

};

File::File()
{
};

 int File :: create_file (string file_name)
{
	 fullPathAndName = file_name;
	 fstream new_file;
	 new_file.open(fullPathAndName, ios::out);
	 if (!new_file)
	 {
		 cout << "File creationg error!" << endl;
		 new_file.close();
		 return -1;
	 }
	 cout << "File is created!" << endl;
	 new_file.close();
	 return 0;
}
 string File::get_path_name()
 {
	 return fullPathAndName;
 };

//--------------------------------------------------------------------------------------------------------
 /*
 Declare the class TestFile to work with a tecs files
 */
 class TextFile : public File
 {
 public:
	 /*
	 Creating constructor of class TextClass object
	 */
	 TextFile(string file);

	 /*
	 to write a text file
	 @param data_write is a data t owrite to a text file
	 @param file_name the name of the file to trite in
	 */
	 int write_file(string file_name_write, string data_write);

	 /*
	 to read from a text file
	 @param data_read is a data to write to a text file
	 @param file_name is a name of file to write in
	 @return return a data string from a text file

	*/

	 string read_file(string file_name);
 private:

 };

 TextFile::TextFile(string file)
 {
	 create_file(file);
 }

 int TextFile::write_file(string file_name_write, string data_write)
 {
	 ofstream stream_write;
	 string full_path = file_name_write;
	 stream_write.write(fn, ios::out | ios::app);
		 if (!stream_write)
		 {
			 cout << "Error Text File Write Operation" << endl;
			 return -1;
		 }
		 cout << "All write" << endl;
		 stream_write.close();
		 return 0;
 }

 string TextFile::read_file(string file_name)
 {
	 string all_text;
	 ifstream stream_read;
	 stream_read.open("file_name", ios::in);
	 if (!stream_read)
	 {
		 cout << "Error Text File Read Operation" << endl;
	 }
	 while (stream_read.good())
	 {
		 stream_read >> all_text;
	 }
	 return all_text;
 }

 void main()
 {
	 string pathA = "c:\\My Documents\\Programming\\Big C++\\Lessons\\OOFileIO\\files\\fileA.txt";
	 
	 /*
	 string pathB = "c:\\My Documents\\Programming\\Big C++\\Lessons\\OOFileIO\\files\\fileB.txt";
	 string pathC = "c:\\My Documents\\Programming\\Big C++\\Lessons\\OOFileIO\\files\\fileC.txt";
	 string pathD = "c:\\My Documents\\Programming\\Big C++\\Lessons\\OOFileIO\\files\\fileD.txt";
	 string pathE = "c:\\My Documents\\Programming\\Big C++\\Lessons\\OOFileIO\\files\\fileE.txt";
	 */

	 vector <TextFile*> file;
	 file.push_back(new TextFile(pathA));
	 
	 /*file.push_back(new TextFile(pathB));
	 file.push_back(new TextFile(pathC));
	 file.push_back(new TextFile(pathD));
	 file.push_back(new TextFile(pathE));
	 */
	 cout << file.size() << endl;

	 cout << "The pathes of the files are: " << endl;
	 for (int i = 0; i < file.size(); i++)
	 {
		 cout << (*file[i]).get_path_name() << endl;
		 file[i]->write_file(pathA, "pathA");
	 }
 }