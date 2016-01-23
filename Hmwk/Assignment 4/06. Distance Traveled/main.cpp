// Jonathan Munoz
// 06. Distance Traveled
// 01/23/16

// preprocessor directive
#include <iostream>
using namespace std;

// program displays distance traveled each hour
int main()
{
    // variables
    float speed;
    int hours, count;
    
    // input speed
    cout << "What is the speed of the vehicle (mph)? ";
    cin >> speed;
    
    // input hours
    cout << "How many hours has it traveled? ";
    cin >> hours;
    
    // table headers
    cout << "Hours\tDistance Traveled\n"
    	 << "-------------------------\n";
    
    // loop displays hours and speed
    for (count = 1; count <= hours; count++)
        cout << count << "\t" << speed * count << endl;
    
    // end program
    return 0;
}