// Jonathan Munoz
// Switch/Case

#include <iostream>
using namespace std;

int main()
{
    // Variable Declaration
    int score;
    
    // Prompt
    cout << "Enter a score between 0 and 100: ";
    cin >> score;
    
    // Ouput
    // The score is divided by 10 to truncate digits after the decimal.
    switch (score / 10)
    {
        case 10: switch (score)
                 {
                     case 100: break;
                     default: cout << "Invalid input. Run the program again.";
                              return 0;
                 }
        case 9: cout << 'A';
                break;
        case 8: cout << 'B';
                break;
        case 7: cout << 'C';
                break;
        case 6: cout << 'D';
                break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1: cout << 'F';
                break;
        case 0: switch ((score + 10) / 10)
                {
                    case 1: cout << 'F';
                            break;
                    default: cout << "Invalid input. Run the program again.";
                             return 0;
                }
    }
    
    return 0;
}
