// Jonathan Munoz
// 01/20/16
// 08. Change for a Dollar Game

// PREPROCESSOR DIRECTIVES
#include <iostream>
using namespace std;

// this is game where the user has to make a dollar with coins
int main()
{
    // variables for different types of coins and the total of their worth
    unsigned pennies, nickels, dimes, quarters, total_value;
    
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
    cin >> quarters;
    
    // the total is calculated
    total_value = pennies + 5 * nickels + 10 * dimes + 25 * quarters;
    
    // If the amount is equal to 1 dollar, the user won.
    // The program will tell the user if the amount is more or less
    // than a dollar.
    if (total_value == 100)
        cout << "The amount is equal to one dollar. You win!";
    if (total_value > 100)
        cout << "The amount is more than a dollar. You lose.";
    if (total_value < 100)
        cout << "The amount is less than a dollar. You lose.";
    
    // end
    return 0;
}