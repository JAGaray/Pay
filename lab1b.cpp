/*
	Author: Julian Garay
	Course: 136
	Instructor: Priyanka Samanta
	Assignment: Lab 1

	This program takes an input of time from a user and outputs a message based on the time. 
*/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{

	int 	hours_Sunset,
		mins_Sunset;
	
	time_t t;
	struct tm *now;
	t = time(0);	//get current time
	now = localtime(&t);	//adjust for local timezone
	int hour = now->tm_hour; //retrieve current hour
	int min = now->tm_min; //retrieve current minute

	cout << "Enter the hours of today's sunset time (12-24): ";
	cin >>  hours_Sunset;
	cout << "Enter the minutes of today's sunset time (0-59): ";
	cin >> mins_Sunset;
	
	cout << "The time is " << hour<< ":" << min << endl;
	
	if (12 > hour)
	{	
	cout << "Good morning, Priyanka" << endl;
	}
	else if (hour > 12 && hour < hours_Sunset) 
	{
	cout << "Good afternoon, Priyanka" << endl;
	}		
	else if (hour > hours_Sunset)
	{
	cout << "Good evening, Priyanka" << endl;
	}

return 0;
}
