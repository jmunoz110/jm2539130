// Jonathan Munoz
// 01/20/16
// 5. Body Mass Index

#include <iostream>
using namespace std;

// This program lets users know whether they are of a healthy weight
int main()
{
    // variables
    float weight, height, BMI;
    
    // user's weight
    cout << "What is your weight measured in pounds? ";
    cin >> weight;
    
    // user's height
    cout << "What is your height measured in inches? ";
    cin >> height;
    
    // Body Mass Index Calculation
    BMI = weight * 703 / height /height;
    
    // a BMI of 18.5 to 25 is healthy
    if (BMI >= 18.5 && BMI <= 25)
        cout << "Your weight is optimal.";
    // a BMI below 18.5 means one is underweight
    else if (BMI > 0 && BMI < 18.5)
        cout << "You are underweight.";
    // over 25 means that the person is overweight
    else if (BMI > 25)
        cout << "You are overweight.";
    // Negative values are unacceptable
    else
        cout << "ERROR";
    
    // no more
    return 0;
}