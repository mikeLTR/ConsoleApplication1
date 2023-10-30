#include <string>
#include <cctype>
#include <iostream>
#include <sstream>
using namespace std;

/**
   Cleans a string containing an integer and converts it.
   @param number a string containing an integer and possibly extraneous
      characters
   @return the value of the number inside the string
*/
int clean(string number)
{
    int searched_number = 0;
    string next_word;
    istringstream next;
    string searched_string;
    int i = 0;
    // while (next >> next_word)
    //{
        while (isdigit(next_word[i]))
        {
            number = to_string(searched_number);
            searched_string = number;
            i++;
        }
    //}
        stoi(searched_string);
        return (searched_number);
}

int main()
{
    string str;
    cin >> str;

    cout << clean(str);

    return 0;
}