// Jonathan Munoz
// 01/20/16
// 6. Mass and Weight

// directive for the preprocessor
#include <iostream>
using namespace std;

// this program uses the mass of an object to calculate its weight
int main()
{
    // variables to hold mass and weight
    float mass, weight;
    
    // mass of an object should be entered
    cout << "Enter an object's mass (measured in kilograms): ";
    cin >> mass;
    
    // weight as a function of mass
    weight = mass * 9.8;
    
    // if the weight is over 1000, the object will be declared too heavy
    if (weight > 1000)
        cout << "The object is too heavy.";
    // if the weight is less than 10, the object will be declared too light
    if (weight < 10)
        cout << "The object is too light.";
       
    // end of program
    return 0;
}