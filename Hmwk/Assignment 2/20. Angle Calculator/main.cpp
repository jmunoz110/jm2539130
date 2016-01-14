// Jonathan Munoz
// 20. Angle Calculator
// 01/13/16

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float angle;
    
    cout << "Enter an angle in radians: ";
    cin >> angle;
    
    cout << fixed << setprecision(4) << endl;
    cout << "The sine of the angle is " << sin(angle) << endl;
    cout << "The cosine of the angle is " << cos(angle) << endl;
    cout << "The tangent of the angle is " << tan(angle) << endl;
    
    return 0;
}