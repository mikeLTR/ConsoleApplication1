#include <iostream>
using namespace std;

class Car
{
public:
	Car();
	double get_odometer() const;
	void drive(double miles);

private:
	double odometer;
};

double Car :: get_odometer() const
{
	return odometer;
}
void Car::drive(double miles)
{
	odometer = odometer + miles;
}
Car::Car()
{
	odometer = 0;
}
int main()
{
	Car car;
	cout << "Odometer before trippp: ";
	cout << car.get_odometer() << endl;

	double miles;
	while (cin >> miles)
	{
		car.drive(miles);
		cout << "odometer afterrr" << miles << "miles: ";
		cout << car.get_odometer() << endl;
	}
	return 0;
}