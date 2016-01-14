// Jonathan Munoz
// 08. How Much Insurance?

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float INSUPER = 0.8; // Insurance percentage
	float cost, insur;
	
	cout << "What is the replacement cost of the building? $";
	cin >> cost;
	
	insur = cost * INSUPER;
	
	cout << "\n$" << setprecision(2) << fixed << insur;
	cout << " is the mininum amount of insurance you should buy for the property." << endl;
	
	return 0;
}