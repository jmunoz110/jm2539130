// Jonathan Munoz
// 01/20/16
// 20. Freezing and Boiling Points

// 
#include <iostream>
#include <iomanip>
using namespace std;

// independent if statements and relational operators are used to determine
// which substances will boil and freeze at the specified temperature
int main()
{
        // one variable declaration
	float temp;
        
        // output and input
	cout << "Enter a temperature in degrees Fahrenheit: ";
	cin >> temp;
        
        // manipulating the output 
	cout << fixed << setprecision(1) << endl;
        
        // if statements
        // Ethyl alcohol
	if (temp <= -173)
		cout << "Ethyl alcohol will freeze at this temperature.\n";
	if (temp >= 172)
		cout << "Ethyl alcohol will boil at this temperature.\n";
        // Mercury
	if (temp <= -38)
		cout << "Mercury will freeze at this temperature.\n";
	if (temp >= 676)
		cout << "Mercury will boil at this temperature.\n";
        // Oxygen
        if (temp <= -362)
		cout << "Oxygen will freeze at this temperature.\n";
	if (temp >= -306)
		cout << "Oxygen will boil at this temperature.\n";
        // Water
	if (temp <= 32)
		cout << "Water will freeze at this temperature.\n";
	if (temp >= 212)
		cout << "Water will boil at this temperature.\n";
	
        // the program has ended
	return 0;
}