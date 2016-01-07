// Jonathan Munoz
// Annual Pay

#include <iostream>
using namespace std;

int main()
{
	int payAmnt = 2200,	// Pay Amount
            payPds = 26,	// Pay Periods
            annPay;		// Annual Pay
	
	annPay = payAmnt * payPds;
	cout << "Annual Pay: $" << annPay;
	
	return 0;
}