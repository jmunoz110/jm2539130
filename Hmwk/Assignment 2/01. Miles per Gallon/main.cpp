// Jonathan Munoz
// Miles per Gallon

#include <iostream>
using namespace std;

int main()
{
	float gallons, miles, MPG;
	
	cout << "Enter the number of gallons of gas the car can hold: ";
	cin >> gallons;
	
	cout << "Enter the number of miles it can be driven on a full tank: ";
	cin >> miles;
	
	MPG = miles / gallons;
	
	cout << "Number of miles that may be driven per gallon of gas: " << MPG;
	
	return 0;
}