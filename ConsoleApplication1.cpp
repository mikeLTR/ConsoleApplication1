/* 
# include <iostream>
# include <iomanip>
using namespace::std;
int main()
{
	double wallWidth = 0;
	double wallHeaight = 0;
	double windowsWidth = 2;
	int windowsHeight = 3;
	int windowsNumber = 0;
	double paintArea = 0;

		cout << "Enter Wall Width: ";
		cin >> wallWidth;

		cout << "Enter Wall Height: ";
		cin >> wallHeaight;

		cout << "Enter Windows Number:";
		cin >> windowsNumber;


	paintArea = wallWidth * wallHeaight - (windowsNumber * (windowsHeight * windowsWidth))/33;
	cout << "Paint area is: " << setw(6) << fixed << setprecision(8) << paintArea << endl;
	cout << fixed << setprecision(10) << setw (5) << wallHeaight << endl;
	cout << 12.123456789 << endl;
	cout << fixed << setprecision(3) << 1234.12344566 << endl;
	cout << ":" << setw(12) << 12 << endl;
	cout << ":" << setw(12) << 12343 << endl;
	cout << ":" << setw(2) << 12 << endl;
	cout << setw(6) << ":" << 12;
	return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Unit Price: " << endl;
	double price;
	cin >> price;

	cout << "Quantity        Price" << endl;
	int quantity = 1;
	cout << setw(8) << quantity << setw(13) << quantity * price << endl;
	quantity = 10;
	cout << setw(8) << quantity << setw(13) << quantity * price << endl;
	quantity = 100;
	cout << setw(8) << quantity << setw(13) << quantity * price << endl;
 }
 

//Activity 2.10.1 Ballon Valua

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double pi = 3.14159265358979323846;
	double baloonDiameter;
	// double baloonRadius;
	double volum1;
	double volum2;
	double volum3;
	double growth1;
	double growth2;


	cout << "Enter Baloon Diameter: ";
	cin >> baloonDiameter;

	volum1 = pi * baloonDiameter * baloonDiameter * baloonDiameter / 6.0;
	baloonDiameter = baloonDiameter + 2.0;
	volum2 = pi * baloonDiameter * baloonDiameter * baloonDiameter / 6.0;
	growth1 = volum2 - volum1;
	cout << "Baloon Growth 1 is: " << setw (3) << growth1 << endl;

	baloonDiameter = baloonDiameter + 7.0;
	volum3 = pi * baloonDiameter * baloonDiameter * baloonDiameter / 6.0;
	growth2 = volum3 - volum2;
	cout << "baloon Growth 2 is: " << setw (3) << growth2 << endl;

	return 0;
}

*/

// Activity 2.11
/*
#include <iostream>
#include <iomanip>

using namespace std;
// this code calculate the change value in per 1 USD coin and 0.25 cents (quaters) after getiing a product out of vending machine


int main()

{
	const double l1 = 10.0;
	const double l2 = 10.0;
	const double dY = 20.0;
	const double dX = 4.0;
	const double speedS1 = 6.0;
	const double speedS2 = 2.3;
	double travelTime1, travelTime2;

	travelTime1 = l1 / speedS1 + ((sqrt(pow((dY - l1), 2) + pow(dX, 2))) / speedS2);
	travelTime2 = (dX / speedS1) + dY / speedS2;
	cout << "Travel Time 1-st way is: " << setw(10) << setprecision(2) << travelTime1 << endl;
	cout << "Travel Time 2-d way is: " << setw(10) << setprecision(2) << travelTime2;

	return 0;

}
*/

// Activity 2.12.1
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Please, inpit the product price in USD with 0.25 range: ";
	double productPriceUSD; //the price of product in USD per 25 cents
	cin >> productPriceUSD;
	
	cout << "Please, insert 1 dollar bills: ";
	int insertedBills; //inserted money in USD per 25 cents;
	cin >> insertedBills;
	

	// calculating a change in cents
	int changeCents;
	changeCents = (insertedBills * 100) - (productPriceUSD * 100);
	cout << "Cents in Change is: " << changeCents << endl;

	// calculate number of 1 USD bills to change
	int billsToChange;
	billsToChange = ((insertedBills * 100) - (productPriceUSD * 100)) / 100;
	cout << "1 USD Bills to change is:  " << billsToChange << endl;
	
	// calculate number of 25 cents change
	double changeUSD;
	int centsAmountToChange;
	int centCoinsToChange;

	centsAmountToChange = changeCents % 100; //calculate reminder
	centCoinsToChange = centsAmountToChange / 25; //calculate number of 25c coins
	cout << "Number of 25c in the change you are getting is: " << centCoinsToChange;
	return 0;
	
}
*/

//Activity 2.14.3
/*
#include <iostream>
#include <string>

using namespace std;
int main()
{
	cout << "Please, enter your full name: ";
	string firstName;
	string lastName;

	cin >> firstName;
	cin >> lastName;

	cout << endl;
	cout << firstName << " " << lastName << endl;
	cout << lastName << "," << " " << firstName;
	return 0;
}
*/

//Activity 2.14.5
/*
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
	cout << "Please, Enter your full name, as example, John Smith: ";
	string nameFirst;
	string nameLast;
	string nameFirstLetter;
	cin >> nameFirst >> nameLast;
	nameFirstLetter = nameFirst.substr(0, 1) + ".";
	cout << nameFirstLetter << nameLast;
	return 0;
}
*/

//Activity 3.1.3
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Original price: " << endl;
	double price;
	cin >> price;
	double discounted_price;

	if (price <= 10)
	{
		discounted_price = price - 3.14;
	}
	else
	{
		discounted_price = price;
		discounted_price --;
	}

	cout << "Discounted price: " << fixed << setprecision(2) << discounted_price << endl;
	return 0;
}
*/

// Activity 3.2 Special IF condition
/*
# include <iomanip>
# include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	number >= 10 ? number ++: number -- ;
	cout << number;
}
*/

/*
# include <iomanip>
# include <iostream>

using namespace std;

int main()
{
	double a = sqrt(5);
	const double EPS = 1E-14;
	double inSquare = a * a;
	if (abs(inSquare - 5) > EPS)
	{
		cout << "Ok " << setprecision(16) << endl;
		cout << inSquare << "   " << setprecision(16) << a * a;
	}
	else
	{
		cout << "Not Ok " << setprecision(16) << "   " << inSquare << setprecision(16) << a * a;
	}
	return 0;
}
*/

//Activity 3.8.1
/*

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	cout << "Width: ";
	int width;
	cin >> width;

	cout << "Height: ";
	int height;
	cin >> height;

	if (width == height)
	{
		cout << "it's a square!";
	}

	else if (width > height)
	{
		cout << "Landscape!";
	}
	else if (width < height)
		cout << "Portrait!";
	return 0;
}
*/

//Activity 3.9
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int switchVariable;
	int varOut = 0;
	cin >> switchVariable;

	switch(switchVariable)
	{
	default:  varOut = 5; break;
	case 1: varOut = 10; break;
	case 2: varOut = 20; break;
	case 3: varOut = 30; break;
	}
	cout << varOut;
	return 0;

}
