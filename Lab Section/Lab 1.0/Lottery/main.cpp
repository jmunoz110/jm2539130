// Jonathan Munoz
// Lab 1.0 Lottery
// 01/13/16

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables for the jackpot and penalties
    float Jackpot, LumpSum, Tax, Married;
    char status;
    
    // Output and Input
    cout << "Enter the lottery jackpot amount (in millions):" << endl << "$";
    cin >> Jackpot;
    
    cout << "Are you married? (Y for yes, N for no)" << endl;
    cin >> status;
    if (status == 'Y' || status == 'y')
        (status = 1);
    else if (status == 'N' || status == 'n')
        (status = 0);
    else
    {
        cout << "Invalid input. Run the program again." << endl;
        return 0;
    }
    
    // Calculations
    LumpSum = Jackpot * 0.62;
    Tax = LumpSum * 0.52;
    Married = Tax * 0.50;
    
    // Displays the amount of money that the winner will be given
    cout << fixed << setprecision(1) << showpoint << endl;
    cout << "If you win the lottery, you will receive approximately $"
         << (status ? Married : Tax) << " million." << endl;
    
    return 0;
}