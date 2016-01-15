// Jonathan Munoz
// Independent Ifs

#include <iostream>
using namespace std;
int main()
{
    // Variable Declaration
    int score;
    
    // Prompt
    cout << "Enter a score between 0 and 100: ";
    cin >> score;
    
    // Output
    if (score >= 90 && score <= 100)
        cout << 'A';
    if (score >= 80 && score < 90)
        cout << 'B';
    if (score >= 70 && score < 80)
        cout << 'C';
    if (score >= 60 && score < 70)
        cout << 'D';
    if (score >= 0 && score < 60)
        cout << 'F';
    if (score > 100 || score < 0)
        cout << "Invalid input. Run the program again.";
    
    return 0;
}