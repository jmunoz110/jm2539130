// Jonathan Munoz
// Average of Values

#include <iostream>
using namespace std;

int main()
{
	unsigned short num1 = 28, num2 = 32, num3 = 37, num4 = 24, num5 = 33, num6, num7, num8, sum;
	float avg;
	
	num6 = num1 + num2;
	num7 = num6 + num3;
	num8 = num7 + num4;
	sum = num8 + num5;
	avg = sum / 5.0;
	
	cout << avg;
	
	return 0;
}