// Jonathan Munoz
// 09. Automobile Costs

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float loan, insur, gas, oil, tires, maint, monthly, annual;
	
	cout << "What is the monthly cost for loan payment? $";
	cin >> loan;
	
	cout << "What is the monthly cost for insurance? $";
	cin >> insur;
	
	cout << "What is the monthly cost for gas? $";
	cin >> gas;
	
	cout << "What is the monthly cost for oil? $";
	cin >> oil;
	
	cout << "What is the monthly cost for tires? $";
	cin >> tires;
	
	cout << "What is the monthly cost for maintenance? $";
	cin >> maint;
	
	monthly = loan + insur + gas + oil + tires + maint;
	annual = monthly * 12;
	
	cout << setprecision(2) << fixed;
	cout << endl << "The total monthly cost of these expenses is $" << monthly << "." << endl;
	cout << endl << "The total annual cost of these expenses is $" << annual << "." << endl;
	
	return 0;
}