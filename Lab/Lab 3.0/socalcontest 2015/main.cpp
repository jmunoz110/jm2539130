// Jonathan Munoz
// 01/23/16
// solcalcontest 2015
// Problem 8: Persistence


// preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

// This program calculates the persistence of a number.
int main()
{
        // A double is needed for these variables because a user might enter
        // numbers that a float cannot hold.
	double number, test;
	
        // This variable determines whether the program will run again.
	char again;
	
        // Step holds the persistence. loopnum and temps hold temporary values
        // in the loop.
	unsigned step, loopnum,
		temp1, temp2, temp3, temp4,
		temp5, temp6, temp7, temp8,
		temp9, temp10, temp11, temp12,
		temp13, temp14, temp15, temp16;

        // This do-while loop loops if the user wishes to run the program again
	do
	{
                // step is initialized at zero
		step = 0;
                
                // loop to calculate persistence
		do
                // A positive number or 0 must be entered.
		{
			cout << "Enter a nonnegative integer: ";
			cin >> number;
			test = number - static_cast<int>(number);
		} while (number < 0 || number >= 1e9 || test != 0);
		
                // loopnum must hold the value in the number variable so that
                // the original number can be displayed alongside its
                // persistence.
		loopnum = number;
		
                // The data type of the temp variables truncates digits after
                // the decimal point.
		while (loopnum >= 10)
		{
			temp1 = loopnum / 1e1;
			temp2 = loopnum - temp1 * 10;
			temp3 = loopnum / 1e2;
			temp4 = temp1 - temp3 * 10;
			temp5 = loopnum / 1e3;
			temp6 = temp3 - temp5 * 10;
			temp7 = loopnum / 1e4;
			temp8 = temp5 - temp7 * 10;
			temp9 = loopnum / 1e5;
			temp10 = temp7 - temp9 * 10;
			temp11 = loopnum / 1e6;
			temp12 = temp9 - temp11 * 10;
			temp13 = loopnum / 1e7;
			temp14 = temp11 - temp13 * 10;
			temp15 = loopnum / 1e8;
			temp16 = temp13 - temp15 * 10;
	
			if (loopnum >= 1e8)
				loopnum = temp2 * temp4 * temp6 * temp8 * temp10 * temp12 * temp14 * temp15 * temp16;
					
			else if (loopnum >= 1e7)
				loopnum = temp2 * temp4 * temp6 * temp8 * temp10 * temp12 * temp13 * temp14;
			
			else if (loopnum >= 1e6)
				loopnum = temp2 * temp4 * temp6 * temp8 * temp10 * temp11 * temp12;
			
			else if (loopnum >= 1e5)
				loopnum = temp2 * temp4 * temp6 * temp8 * temp9 * temp10;
				
			else if (loopnum >= 1e4)
				loopnum = temp2 * temp4 * temp6 * temp7 * temp8;
			
			else if (loopnum >= 1e3)
				loopnum = temp2 * temp4 * temp5 * temp6;
			
			else if (loopnum >= 1e2)
				loopnum = temp2 * temp3 * temp4;
			
			else if (loopnum >= 1e1)
				loopnum = temp1 * temp2;
                        // an increment operator to hold the number of steps
			step++;
		}
                
                // displays the result
		cout << fixed << setprecision(0) << number << ": " << step;
		cout << (step != 1 ? " steps" : " step");
		
		cout << "\nWould you like to run the program again? (Type Y for yes)\n";
		cin >> again;
	} while (again == 'Y' || again == 'y');
	
        // The program has been executed.
	return 0;
}