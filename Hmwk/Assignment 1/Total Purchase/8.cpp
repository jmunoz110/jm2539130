// Jonathan Munoz
// Total Purchase

#include <iostream>
using namespace std;

int main()
{
	float	item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, tax = 0.07,
		a, b, c, subTtl, slsTax, total;
	
	a = item1 + item2;
	b = a + item3;
	c = b + item4;
	subTtl = c + item5;
	
	slsTax = subTtl * tax;
	total = subTtl + slsTax;
	
	cout << "Price of item 1 = $" << item1 << endl;
	cout << "Price of item 2 = $" << item2 << endl;
	cout << "Price of item 3 = $" << item3 << endl;
	cout << "Price of item 4 = $" << item4 << endl;
	cout << "Price of item 5 = $" << item5 << endl;
	cout << "Subtotal of sale = $" << subTtl << endl;
	cout << "Amount of sales tax = $" << slsTax << endl;
	cout << "Total = $" << total << endl;
	
	return 0;
}