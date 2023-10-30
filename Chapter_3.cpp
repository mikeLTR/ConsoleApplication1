//Activity 3.10.1
/*
# include <iostream>
# include <iomanip>

using namespace std;
int main()
{
    int hour;
    string suffix;
    cin >> hour;
    cin >> suffix;
    string time = "evening";
    if (suffix == "pm")
        if (hour < 6)
            time = "afternoon";
        else
            time = "morning";
    cout << "Good " + time << endl;
    return 0;
}
*/

//Activity 3 nestet IF (pension calculating)
#include <iostream>
#include <iomanip>
#include <string>

/*
using namespace std;
int main()
{
    const int MALE_PENSION_AGE = 65;
    const int FEMALE_PENSION_AGE = 60;
    const int FEMALE_RATE = 90;
    const int MALE_RATE = 100;
    const int OLD_WORKER = 10;
    const int YUNG_WORKER = 5;

    cout << "Please, enter your gender, (m/f): ";
    string gender;
    cin >> gender;

    cout << "Please, enter you age, (years):";
    int age;
    cin >> age;

    int dutyYears;
    double pensionRate;
    dutyYears = MALE_PENSION_AGE - age;

    if (gender == "m")
    {
        if (dutyYears <= 20)
        {
            pensionRate = dutyYears * MALE_RATE * YUNG_WORKER;
        }
        else
        {
            pensionRate = dutyYears * MALE_RATE * OLD_WORKER;
        }
    }
    else
    {
        if (dutyYears <= 20)
        {
            pensionRate = dutyYears * FEMALE_RATE * YUNG_WORKER;
        }
        else
        {
            pensionRate = dutyYears * FEMALE_PENSION_AGE * OLD_WORKER;
        }
        
    }

    cout << "You are a ";
    cout << gender << " ,";
    cout << "and your pension is a " << cout.precision(2) << fixed << pensionRate << " " << "USD.";
    return 0;
}
*/

// Activity 3.16.5

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    cout << "Enter first integer number: ";
    //ask user to enter int firstNumber
    int numberOne = 0;
    cin >> numberOne;
    if (cin.fail())
    {
        cout << "This is not a number";
        return 1;
     }
   
   
     cout << "Enter second integer number: ";
     //ask user to input second number
     int numberTwo = 0;
     cin >> numberTwo;

     if (cin.fail()) // check if first number is correctly inputed
      {
         cout << "Second number is wrong. Quit";
         return 1;
      }
     else
         // if first number is correct, then input second number
     {
         int product = 0;
         product = numberOne + numberTwo;
         cout << "The product of the two numbers is a: " << product << endl;

         if (! (numberOne > 10) || ! (numberTwo > 10))
             // check if both numbeers are NOT greater than 10 (less then 10);
         {
             cout << "Both numbers is < 10 !";
             return 0;
         }
         else 
         {
             cout << "Both numbers are not > 10";
         }
      }
         return 0;
     }

