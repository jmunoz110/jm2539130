// Jonathan Munoz
// 3. Test Average
// 01/13/16

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float test1, test2, test3, test4, test5, avg;
	
	cout << "Enter your score for Test 1: ";
	cin >> test1;
	
	cout << "Enter your score for Test 2: ";
	cin >> test2;
	
	cout << "Enter your score for Test 3: ";
	cin >> test3;
	
	cout << "Enter your score for Test 4: ";
	cin >> test4;
	
	cout << "Enter your score for Test 5: ";
	cin >> test5;
	
	avg = (test1 + test2 + test3 + test4 + test5) / 5;
	
	cout << "\nYour average test score is ";
	cout << setprecision(1) << fixed << avg << "." << endl;
	
	return 0;
}
