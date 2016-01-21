// Jonathan Munoz
// 01/20/16
// 08. Change for a Dollar Game

// PREPROCESSOR DIRECTIVES
#include <iostream>
using namespace std;

// this is a game where the user has to make a dollar with coins
int main()
{
    // variables for different types of coins and the total of their worth
    unsigned pennies, nickels, dimes, quarter, total;
    
    cout << "Enter the number of coins required to make exactly one dollar.\n";
    
    // user inputs number of pennies
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    
    // user inputs number of nickels
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    
    // user inputs number of dimes
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    
    // user inputs number of quarters
    cout << "Enter the number of quarters: ";
    cin >> quarter;
    
    // the total is calculated
    total = pennies + 5 * nickels + 10 * dimes + 25 * quarter;
    
    // If the amount is equal to 1 dollar, the user won.
    // The program will tell the user if the amount is more or less
    // than a dollar.
    if (total == 100)
        cout << "The amount is equal to one dollar. You win!";
    if (total > 100)
        cout << "The amount is more than a dollar. You lose.";
    if (total < 100)
        cout << "The amount is less than a dollar. You lose.";
    
    // end
    return 0;
}