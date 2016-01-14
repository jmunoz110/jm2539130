// Jonathan Munoz
// 21. Stock Transaction Program
// 01/13/16

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // s represent stock and b represents broker
    float paid_s, paid_b, sold_s, sold_b, profit;
    
    paid_s = 1000 * 32.87;
    paid_b = paid_s * 0.02;
    sold_s = 1000 * 33.92;
    sold_b = sold_s * 0.02;
    profit = sold_s - sold_b - paid_s - paid_b;
    
    cout << fixed << setprecision(2);
    
    cout << left << setw(32) << "Stock Purchase:";
    cout << "$" << right << setw(8) << paid_s << endl;
    
    cout << left << setw(32) << "Commission from Stock Purchase:";
    cout << "$" << right << setw(8) << paid_b << endl;
    
    cout << left << setw(32) << "Stock Sale:";
    cout << "$" << right << setw(8) << sold_s << endl;
    
    cout << left << setw(32) << "Commission from Stock Sale:";
    cout << "$" << right << setw(8) << sold_b << endl;
    
    // Joe lost money
    cout << left << setw(32) << "Profit:";
    cout << "$" << right << setw(8) << profit << endl;
    
    return 0;
}