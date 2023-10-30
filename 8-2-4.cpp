#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    string vowels = "aeiou";
    int counters[] = { 0, 0, 0, 0, 0 };

    // cout << "Input file: " << endl;
    // string input_file_name;
    // cin >> input_file_name;

    ifstream proc_file;
    proc_file.open("in0.txt");
    char letter;
    char search_character;

    for (int i = 0; i < sizeof(counters); i++)
    {
        search_character == vowels[i];
        while (proc_file.get(letter))
        {
            if (letter == vowels[i])
            {
                counters[i]++;
            }
        }
    }
        for (int i = 0; i < vowels.length(); i++)
        {
            cout << vowels[i] << ": " << counters[i] << endl;
        }

        return 0;
    }