// Jonathan Munoz
// 01/25/16
// 08. Math Tutor

// preprocessor directives
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// program displays math problems
int main()
{
        // variables for the menu, srand, and two numbers
	unsigned select, seed, num1, num2;
        
	seed = time(0);
	srand(seed);
        
        // the loop displays a menu for the user
	do
	{
	cout << "1. Addition\n"
		 << "2. Subtraction\n"
		 << "3. Multiplication\n"
		 << "4. Division\n"
		 << "5. Quit\n"
		 << "Select: ";
	cin >> select;
        
        // the switch statement shows the user a math problem
        // for each case, two random numbers are selected
        // user must press enter to see answer
	switch (select)
	{
		case 1: num1 = 1 + rand() % 999;
				num2 = 1 + rand() % 999;
				cout << "Press Enter to see answer\n";
				cout << num1 << " + " << num2 << " = ";
				cin.ignore();
				cin.get();
				cout << num1 + num2 << endl << endl;
				break;
                // do-while statement ensures that the answer is not negative
		case 2: do
				{
					num1 = 1 + rand() % 999;
					num2 = 1 + rand() % 999;
				} while (num2 > num1);
				cout << "Press Enter to see answer\n";
				cout << num1 << " - " << num2 << " = ";
				cin.ignore();
				cin.get();
				cout << num1 - num2 << endl << endl;
				break;
		case 3: num1 = 1 + rand() % 99;
				num2 = 1 + rand() % 99;
				cout << "Press Enter to see answer\n";
				cout << num1 << " * " << num2 << " = ";
				cin.ignore();
				cin.get();
				cout << num1 * num2 << endl << endl;
				break;
                // do-while statement ensures that the answer is an integer
		case 4: do
				{
				num1 = 1 + rand() % 999;
				num2 = 1 + rand() % 999;
				} while (num1 < num2 || num1 % num2 != 0);
				cout << "Press Enter to see answer\n";
				cout << num1 << " / " << num2 << " = ";
				cin.ignore();
				cin.get();
				cout << num1 / num2 << endl << endl;
				break;
                // quit menu
		case 5: break;
		default : cout << "That selection is not in the menu\n\n";
	}
	} while (select != 5);
        
        // end program
	return 0;
}