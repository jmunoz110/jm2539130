// Jonathan Munoz
// 01/20/16
// 04. Areas of Rectangles

// iostream, nothing else needed
#include <iostream>
using namespace std;

// let's get started
int main()
{
    // The task of determining which rectangle has the greater area begins!
    // the unit of measurement is not necessary for this program
    cout << "This program will compare the areas of two rectangles.\n\n";
        
    // user should enter length of the first rectangle
    cout << "Enter the length of Rectangle 1. ";
    float length1;
    cin >> length1;
    
    // entering the width of the first rectangle
    cout << "Enter the width of Rectangle 1. ";
    float width1;
    cin >> width1;
    
    // length of the second rectangle
    cout << "\nEnter the length of Rectangle 2. ";
    float length2;
    cin >> length2;
    
    // second rectangle's width
    cout << "Enter the width of Rectangle 2. ";
    float width2;
    cin >> width2;
    
    // area and length are multiplied to find the area of each rectangle
    float area1, area2;
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    // relative operators are used to compare the areas
    // When the expressions have been tested, the user will know which area is
    // greater.
    if (area1 > area2)
       cout << "\nRectangle 1 has the greater area.\n";
    else if (area1 < area2)
       cout << "\nRectangle 2 has the greater area.\n";
    else if (area1 == area2)
       cout << "\nThe areas are the same.\n";
    else
       cout << "\nERROR\n";
    
    // it's finally over
    return 0;
}