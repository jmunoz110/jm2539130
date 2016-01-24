// Jonathan Munoz
// 01/24/16
// 03. Ocean Levels

// preprocessor directive
#include <iostream>
using namespace std;

// table displaying the rise in the ocean level
int main()
{
    // table headers
    cout << "Years" << "   Rise (mm)" << endl;
    
    // loop for displaying information in table
    for (unsigned count = 1; count <= 25; count++)
        cout << count << "\t" << count * 1.5 << endl;
    
    // end main
    return 0;
}

