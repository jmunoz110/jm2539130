// Jonathan Munoz
// 01/20/16
//4. Calories Burned

// Preprocessor Directive
#include <iostream>
using namespace std;
int main()
{
    // Stating the purpose of the program
    cout << "Calories Burned After Specified Amount of Time" << endl;
    // Hyphens used to separate the title from the information
    cout << "----------------------------------------------" << endl;
    // Headers for the numbers that will be displayed below them
    cout << "Calories\tMin\n";
    
    // Loop initialized at 10 minutes and increased by 5 after each iteration
    for (unsigned min = 10; min <= 30; min += 5)
        // Minutes multiplied by the amount of calories burned per minute, 3.9,
        // followed by the amount time that has elapsed
        cout << min * 3.9 << "\t\t" << min << endl;
    
    // End of program
    return 0;
}