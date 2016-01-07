// Jonathan Munoz
// Sales Tax
#include <iostream>
using namespace std;

int main()
{
    const short sale = 95;
    float tax, state, county;
    
    // Total sales tax in the state
    tax = 0.04;
    state = sale * tax;
    
    // Total sales tax in the county
    tax = 0.02;
    county = sale * tax;
    
    cout << "The total sales tax in the state is $" << state << endl;
    cout << "The total sales tax in the county is $" << county << endl;
    
    return 0;
}