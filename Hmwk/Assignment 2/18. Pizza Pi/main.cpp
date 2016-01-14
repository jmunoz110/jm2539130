// Jonathan Munoz
// 18. Pizza Pi

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float PI = 3.14159;
    float diamtr, area, slices;
    
    cout << "What is the diameter of the pizza in inches? ";
    cin >> diamtr;
    
    area = PI * diamtr * diamtr / 4;
    slices = area / 14.125;
    
    cout << fixed << setprecision(1);
    cout << "Number of slices: " << slices;
    
    return 0;
}