// Jonathan Munoz
// 2. Roman Numeral Converter

// iostream, nothing out of the ordinary here
#include <iostream>
using namespace std;

// this is where the program begins
int main()
{
    // variable for a number
    int number;
    
    // asks the user to enter a number
    cout << "Enter a number within the range of 1 through 10. ";
    cin >> number;
    
    // depending on the number chosen,
    // an appropriate Roman numeral will be displayed
    switch (number)
    {
        case 1: cout << "I";
                break;
        case 2: cout << "II";
                break;
        case 3: cout << "III";
                break;
        case 4: cout << "IV";
                break;
        case 5: cout << "V";
                break;
        case 6: cout << "VI";
                break;
        case 7: cout << "VII";
                break;
        case 8: cout << "VIII";
                break;
        case 9: cout << "IX";
                break;
        case 10: cout << "X";
                break;
        default: cout << "Invalid";
    }        
    
    // the job is complete
    return 0;
}