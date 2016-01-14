// Jonathan Munoz
// 10. Celsius to Fahrenheit

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float Celsius, Fahrenheit;
	
	cout << "This program converts Celsius temperatures to Fahrenheit temperatures." << endl;
	cout << "Enter a Celsius temperature: ";
	cin >> Celsius;
	
	Fahrenheit = 9.0 / 5 * Celsius + 32;
	
	cout << fixed << setprecision(1) << endl << Celsius << " " << static_cast<char>(248);
	cout << "C is equivalent to " << Fahrenheit << " " << static_cast<char>(248) << "F." << endl;
	
	return 0;
}