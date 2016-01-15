#include <iostream>
using namespace std;
int main()
{
    // Vaariable Declaration
    int score;
    
    // Input
    cout << "Enter a score between 0 and 100: ";
    cin >> score;
    
    // Output
    if (score > 100)
        cout << "Invalid input. Run the program again.";
    else if (score >= 90)
        cout << 'A';
    else if (score >= 80)
        cout << 'B';
    else if (score >= 70)
        cout << 'C';
    else if (score >= 60)
        cout << 'D';
    else if (score >= 0)
        cout << 'F';
    else
        cout << "Invalid input. Run the program again.";
        
    return 0;
}
