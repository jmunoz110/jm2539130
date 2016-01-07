// Jonathan Munoz
// Restaurant Bill

#include <iostream>
using namespace std;

int main()
{
	float 	charge = 88.67f, tax = 0.0675f, tip = 0.2f,
			slsTax,	// Sales tax
			subTtl,	// Charge plus sales tax
			slsTip,	// Tip amount
			total;	// Total bill
	
	slsTax = charge * tax;
	subTtl = charge + slsTax;
	slsTip = subTtl * tip;
	total = subTtl + slsTip;
	
	cout << "Meal Cost: $" << charge << endl;
	cout << "Tax Amount: $" << slsTax << endl;
	cout << "Tip Amount: $" << slsTip << endl;
	cout << "Total Bill: $" << total << endl;
	
	return 0;
}