// Jonathan Munoz
// 01/20/16
// 3. Magic Dates

// THIS IS THE PREPROCESSOR DIRECTIVE
#include <iostream>
using namespace std;

// the beginning
int main()
{
    // variables
    int month, day, year;
    
    // the user will input a month
    cout << "Enter a a month in numeric form. ";
    cin >> month;
    
    // the user will input a day
    cout << "Enter a day. ";
    cin >> day;
    
    // the user will input a year
    cout << "Enter the last two digits of a year. ";
    cin >> year;
    
    // the message that will be displayed depends on whether the month's number
    // multiplied by the day's number is equal to the year's number
    if (month * day == year)
       cout << "The date is magic.";
    else
       cout << "The date is not magic.";
    
    // nothing else to see here
    return 0;
    
}