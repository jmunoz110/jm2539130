// Jonathan Munoz
// 01/20/16
// 11. Book Club Points

// preprocessor directive
#include <iostream>
using namespace std;

// this program awards points based on how many books have been purchased
int main()
{
    // declaring a variable
    int books;
    
    // asking the user to enter information
    cout << "How many books have you purchased this month?\n";
    cin >> books;
    
    // if/else statements will award points and warn user about invalid input
    if (books == 0)
        cout << "You have been awarded 0 points.";
    else if (books == 1)
        cout << "You have been awarded 5 points.";
    else if (books == 2)
        cout << "You have been awarded 15 points.";
    else if (books == 3)
        cout << "You have been awarded 30 points.";
    else if (books >= 4)
        cout << "You have been awarded 60 points.";
    else
        cout << "Invalid input.";
    
    // end of program
    return 0;
}