// Jonathan Munoz
// Ternary Operator

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Variable Declaration
    int score;
    
    // Prompt
    cout << "Enter a score from 0 to 100: ";
    cin >> score;
    
    // Output
    cout << (score > 100 ? "Invalid input. Run the program again." :
            (score >= 90 ? "A" :
            (score >= 80 ? "B" :
            (score >= 70 ? "C" :
            (score >= 60 ? "D" :
            (score >= 0 ? "F" : "Invalid input. Run the program again."))))));
    
    return 0;
}