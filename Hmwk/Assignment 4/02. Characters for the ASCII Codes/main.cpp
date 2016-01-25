// Jonathan Munoz
// 01/20/16
// 2. Characters for the ASCII Codes

// preprocessor directive
#include <iostream>
using namespace std;

// This program displays characters for the ASCII codes 0 through 127.
int main()
{
    // for loop that displays characters
    for (char count = 0; count <= 127; count++)
    {
        cout << count << " ";
        // 16 characters per line
        if (count % 16 == 15)
            cout << endl;
        // loop is infinite without this if statement
        if (count == 127)
            break;
    }
    
    // end program
    return 0;
}