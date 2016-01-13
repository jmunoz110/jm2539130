// Jonathan Munoz
// Lab 1.0 Table and Swaps

#include <iostream>
using namespace std;

int main()
{
    // Truth Table
    bool x, y;
    cout << "x  y  !x  !y  x&&y  x||y  x^y  "
         << "x^y^y  x^y^x  !(x&&y)  !x||!y  !(x||y)  !x&&!y" << endl;
    
        // Headers
    x = true; y = true;
    cout << (x ? "T" : "F") << "  "
         << (y ? "T" : "F") << "   "
         << (!x ? "T" : "F") << "   "
         << (!y ? "T" : "F") << "     "
         << (x && y ? "T" : "F") << "     "
         << (x || y ? "T" : "F") << "    "
         << (x ^ y ? "T" : "F") << "      "
         << (x ^ y ^ y ? "T" : "F") << "      "
         << (x^ y ^ x ? "T" : "F") << "        "
         << (!(x && y) ? "T" : "F") << "       "
         << (!x || !y ? "T" : "F") << "        "
         << (!(x || y) ? "T" : "F") << "       "
         << (!x && !y ? "T" : "F") << endl;
    
        // Row 1
    x = true; y = false;
    cout << (x ? "T" : "F") << "  "
         << (y ? "T" : "F") << "   "
         << (!x ? "T" : "F") << "   "
         << (!y ? "T" : "F") << "     "
         << (x && y ? "T" : "F") << "     "
         << (x || y ? "T" : "F") << "    "
         << (x ^ y ? "T" : "F") << "      "
         << (x ^ y ^ y ? "T" : "F") << "      "
         << (x^ y ^ x ? "T" : "F") << "        "
         << (!(x && y) ? "T" : "F") << "       "
         << (!x || !y ? "T" : "F") << "        "
         << (!(x || y) ? "T" : "F") << "       "
         << (!x && !y ? "T" : "F") << endl;
    
        // Row 2
    x = false; y = true;
    cout << (x ? "T" : "F") << "  "
         << (y ? "T" : "F") << "   "
         << (!x ? "T" : "F") << "   "
         << (!y ? "T" : "F") << "     "
         << (x && y ? "T" : "F") << "     "
         << (x || y ? "T" : "F") << "    "
         << (x ^ y ? "T" : "F") << "      "
         << (x ^ y ^ y ? "T" : "F") << "      "
         << (x^ y ^ x ? "T" : "F") << "        "
         << (!(x && y) ? "T" : "F") << "       "
         << (!x || !y ? "T" : "F") << "        "
         << (!(x || y) ? "T" : "F") << "       "
         << (!x && !y ? "T" : "F") << endl;
    
        // Row 3
    x = false; y = false;
    cout << (x ? "T" : "F") << "  "
         << (y ? "T" : "F") << "   "
         << (!x ? "T" : "F") << "   "
         << (!y ? "T" : "F") << "     "
         << (x && y ? "T" : "F") << "     "
         << (x || y ? "T" : "F") << "    "
         << (x ^ y ? "T" : "F") << "      "
         << (x ^ y ^ y ? "T" : "F") << "      "
         << (x^ y ^ x ? "T" : "F") << "        "
         << (!(x && y) ? "T" : "F") << "       "
         << (!x || !y ? "T" : "F") << "        "
         << (!(x || y) ? "T" : "F") << "       "
         << (!x && !y ? "T" : "F") << endl << endl << endl;
    
    
    // Swap with temporary variable
    int a, b, temp;
    
        // Entering values to be swapped
    cout << "Enter a value for a: ";
    cin >> a;
    
    cout << "Enter a value for b: ";
    cin >> b;
    
    cout << "\nThese values can be swapped using a temporary variable.";
    
        // Swapping values a and b
    temp = a; a = b; b = temp;
    
    cout << endl << "a = " << a << endl << "b = " << b << endl << endl;
    
    
    // Swap with exclusive or operator
    a = a ^ b; b = a ^ b; a = a ^ b;
    
    cout << "The exclusive or operator can also be used to swap values."
         << "\nHere, it is used to return a and b to their original values.";
    cout << endl << "a = " << a << endl << "b = " << b << endl;
    
    return 0;
}