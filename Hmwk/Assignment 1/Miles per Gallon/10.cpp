// Jonathan Munoz
// Miles per Gallon

#include <iostream>
using namespace std;

int main()
{
    const unsigned short miles = 15, gallons = 375;
    unsigned short MPG;
    
    MPG = gallons / miles;
    
    cout << "The car gets " << MPG << " miles per gallon.";
    
    return 0;
}