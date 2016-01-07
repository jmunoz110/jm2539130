#include <iostream>
using namespace std;

int main()
{
	const float lvlrise = 1.5f;     // The ocean's level rising at a rate of  1.5 mm/y
	float olvl_5, olvl_7, olvl_10;
	
	olvl_5 = lvlrise * 5;           // Ocean level in 5 years
	olvl_7 = lvlrise * 7;           // Ocean level in 7 years
	olvl_10 = lvlrise * 10;         // Ocean level in 10 years
	
	cout << "In 5 years, the ocean's level wil be " << olvl_5 << " millimeters";
        cout << endl << "higher than the current level." << endl;
        
	cout << endl << "In 7 years, the ocean's level wil be " << olvl_7 << " millimeters";
        cout << endl << "higher than the current level." << endl;
        
	cout << endl << "In 10 years, the ocean's level wil be " << olvl_10 << " millimeters";
        cout << endl << "higher than the current level." << endl;
	
	return 0;
}