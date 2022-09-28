// Kai Miller
// Date: 8 - 31 - 22
// Program Title: Earnings
// Program Description: A program that will determine how much an employee earned in a given time period.

#include <iostream>
#include <string>


using namespace std;

// Named constants

int main()
{

	// Variable declaration
	string name;
	double payrate;
	double hours;
	double earnings;

	//Program title and description for the user
	cout << "Earnings" << endl;
	cout << "A program that will determine how much an employee earned in a given time period." << endl;

	// User input
	cout << "Enter your first and last name." << endl;
	cin >> name;
	cout << "Enter your payrate." << endl;
	cin >> payrate;
	cout << "Enter the amount of hours worked." << endl;
	cin >> hours;

	// Calculations
	earnings = payrate * hours;

	// Output to the screen
		//Name: 
	cout << "Name: " << name << endl;
		//Payrate: $
	cout << "Payrate: $" << payrate << endl;
		//Hours worked :
	cout << "Hours worked: " << hours << endl;
		//Earnings: $
	cout << "Earnings: $" << earnings << endl;
	return 0;

}
