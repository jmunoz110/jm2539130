// Jonathan Munoz
// 01/23/16
// 05. Membership Fees Increase

// Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

// This program will display membership fees for the next six years
int main()
{
    // variable initialized at 2500
    float charge = 2500;
    
    // headers and stream manipulators
    cout << "Year\tFee\n";
    cout << "----------------\n";
    cout << setprecision(2) << fixed;
    
    // a loop that repeats 6 times
    //each iteration increases by 4 percent
    for (int year = 1; year <= 6 ; year++)
    {
    	charge *= 1.04;
        cout << year << "\t$";
        cout << charge << endl;
    }
    
    // END
    return 0;
}