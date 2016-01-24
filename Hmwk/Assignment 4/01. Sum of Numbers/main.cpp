// Jonathan Munoz
// 01/20/16
// 01. Sum of Numbers

// only one preprocessor directive need
#include <iostream>
using namespace std;
int main()
{
    // variables for the number entered, counter, and total
    int number, count, total = 0;
    
    // just a prompt for the user
    cout << "Enter a positive integer value: ";
    cin >> number;
    
    // a loop that only accepts positive values
    // the loop adds every value up to the number that the user entered
    if (number > 0)
    {
        for (count = 1; count <= number; count++)
            total += count;
        cout << total;
    }
    else
        cout << "That is not a positive number.";
    
    // end of program
    return 0;
}