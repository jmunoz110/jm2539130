// Jonathan Munoz
// 10. Celsius to Fahrenheit

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float Cels, Fahr;
	
	cout << "This program converts Celsius temperatures to Fahrenheit temperatures." << endl;
	cout << "Enter a Celsius temperature: ";
	cin >> Cels;
	
	Fahr = 9.0 / 5 * Cels + 32;
	
	cout << fixed << setprecision(1) << endl << Cels << " " << static_cast<char>(248);
	cout << "C is equivalent to " << Fahr << " " << static_cast<char>(248) << "F." << endl;
	
	return 0;
}