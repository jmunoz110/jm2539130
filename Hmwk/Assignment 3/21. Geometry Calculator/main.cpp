// Jonathan Munoz
// 01/20/16
// 21. Geometry Calculator


// two directives for the preprocessor are needed for this
#include <iostream>
#include <iomanip>
using namespace std;

// a menu is shown and the user can enter data to determine
// the area of a shape
int main()
{
    // the other variables are in the switch statement
    int choice;
    
    // menu
    cout << "Geometry Calculator" << endl << endl;
    cout << "   1. Calculate the Area of a Circle" << endl;
    cout << "   2. Calculate the Area of a Rectangle" << endl;
    cout << "   3. Calculate the Area of a Triangle" << endl;
    cout << "   4. Quit" << endl;
    cout << endl << "   Enter your choice (1-4): ";
    cin >> choice;
    
    switch (choice)
    {
        // The program asks for the radius and the radius is used in a formula
        // to calculate the area. (negatives values are not allowed)
        case 1: float r;
                cout << "\nWhat is the radius of the circle? ";
                cin >> r;
                if (r < 0)
                    cout << "Do not enter negative values.";
                else
                    cout << "area = " << 3.14159 * r * r;
                break;
        // length and width are required to find area
        case 2: cout << "\nWhat is the length of the rectangle? ";
                float length, width;
                cin >> length;
                cout << "What is the width of the rectangle? ";
                cin >> width;
                if (length < 0 || width < 0)
                    cout << "Do not enter negative values.";
                else
                    cout << "area = " << length * width;
                break;
        // base and height are required to find area
        case 3: cout << "\nWhat is the length of the triangle's base? ";
                float base, height;
                cin >> base;
                cout << "What is the length of the triangle's height? ";
                cin >> height;
                if (base < 0 || height < 0)
                    cout << "Do not enter negative values.";
                else
                    cout << "area = " << base * height * 0.5;
                break;
        // quitting causes the program to end
        case 4: break;
        // a choice from the menu must be selected
        default: cout << "That is not a choice in the menu.";
    }
    
    // end
    return 0;
}