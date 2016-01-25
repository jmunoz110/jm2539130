#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	unsigned select, seed, num1, num2;
	seed = time(0);
	srand(seed);
	do
	{
	cout << "1. Addition\n"
		 << "2. Subtraction\n"
		 << "3. Multiplication\n"
		 << "4. Division\n"
		 << "5. Quit\n"
		 << "Select: ";
	cin >> select;
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
		case 5: break;
		default : cout << "That selection is not in the menu\n\n";
	}
	} while (select != 5);
	return 0;
}