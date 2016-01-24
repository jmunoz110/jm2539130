// Jonathan Munoz
// 01/24/16
// 07. Pennies for Pay

// preprocessor directives
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// This program calculates the salary of someone whose salary is doubled every
// day.
int main()
{
    // variable for the counter
    int count;
    
    // float was chosen for days because entering a decimal value for an integer
    // data type caused the do-while loop to malfunction.
    float days;
    
    // variables for total pay and daily salary
    // double is needed for values that the float data type cannot properly hold
    double total = 0, salary;
    
    // prompt for the user to enter a number that can't be less than 1
    do
    {
        cout << "Enter the number of days (1 or more): ";
        cin >> days;
        static_cast<int>(days);
    } while (days < 1);
    
    // table headers and stream manipulators
    cout << "\nDay\tSalary\n"
         << "--------------\n"
         << fixed << setprecision(2);
    
    // loop to display values in the table
    for (count = 0; count <= (days - 1); count++)
    {
    	salary = pow(2.0, count) * 0.01;
        cout << count + 1 << "\t$" << salary << endl;
        total += salary;
    }
    
    // display total pay
    cout << "\nTotal Pay: $" << total;
    
    // end of program
    return 0;
}