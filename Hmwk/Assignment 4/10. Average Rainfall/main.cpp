// Jonathan Munoz
// 01/25/16
// 10. Average Rainfall

// preprocessor directive
#include <iostream>
using namespace std;
int main()
{
    // variables that hold inches of rainfall
    float rain, total = 0;
    
    // variables that hold the years, months, and counter
    int years, count, months;
    
    // prompt to enter number of years
    cout << "How many years? ";
    cin >> years;
    
    // outer loop executes when inner loop has executed 12 times
    for (count = 1; count <= years; count++)
    {
        // header for the monthly data
        cout << "Year " << count;
        cout << "\n------\n";
        
        // loop asks user for input and calculates the sum of the input
        for (months = 1; months <= 12; months++)
        {
            // prompt for inches of rainfall for the month
            cout << "Enter the inches of rainfall for ";
            
            // displays the month
            switch (months)
            {
                case 1: cout << "January: ";
                        break;
                case 2: cout << "February: ";
                        break;
                case 3: cout << "March: ";
                        break;
                case 4: cout << "April: ";
                        break;
                case 5: cout << "May: ";
                        break;
                case 6: cout << "June: ";
                        break;
                case 7: cout << "July: ";
                        break;
                case 8: cout << "August: ";
                        break;
                case 9: cout << "September: ";
                        break;
                case 10: cout << "October: ";
                         break;
                case 11: cout << "November: ";
                         break;
                case 12: cout << "December: ";
                         break;
            }
            cin >> rain;
            
            // accumulates rainfall
            total += rain;
        }
    }
    
    // displays information
    cout << "Months: " << --count * 12 << endl;
    cout << "Total Inches of Rainfall: " << total << endl;
    cout << "Inches of Rainfall per Month: " << total / count / 12 ;
    
    // end
    return 0;
}