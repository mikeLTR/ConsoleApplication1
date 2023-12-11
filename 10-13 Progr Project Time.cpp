#define _CRT_SECURE_NO_WARNINGS
#include <iomanip>
#include <iostream>
#include <ctime>
#include <vector>
#include <string>

using namespace std;
// define class Time to generate and provide local time
class Time
{
public:
	// Enpty constructor
	Time();
	
	// @return return the minutes as string
	virtual string get_hours() const;

	//@return minutes
	string get_minutes() const;

private:
	// int hours; //the local hours to return 
	// int minutes; //le local minutes to return
};

// Member Functions Declaration

Time::Time()
{
}

string Time::get_hours() const
{
	time_t current_time = time(0);
	tm* local_time = localtime(&current_time);
	int hours = local_time->tm_hour;
	string hours_string = to_string(hours);
	return hours_string;
}

string Time::get_minutes() const
{
	time_t current_time = time(0);
	tm* local_time = localtime(&current_time);
	int minutes = local_time->tm_min;
	string minutes_string = to_string(minutes);
	return minutes_string;

}

// Derived Class WorldClock

class WorldClock :private Time
{
public:

};


int main()
{

return 0;
}