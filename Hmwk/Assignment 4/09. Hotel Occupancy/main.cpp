// Jonathan Munoz
// 01/25/16
// 09. Hotel Occupancy

// preprocessor directive
#include <iostream>
using namespace std;

int main()
{
    // variables
    // floors holds number of floors
    // count holds counter
    // rooms holds number of rooms per floor
    // occup holds number of rooms occupied per floor
    // totalr holds total number of rooms
    // totalo holds total number of rooms occupied
    int floors, count, rooms, occup, totalr = 0, totalo = 0;
    
    // number of floors must be 1 or more
    do
    {
        cout << "How many floors does the hotel have? ";
        cin >> floors;
    } while (floors < 1);
    
    // number of floors must be 10 or more
    for (count = 1; count <= floors; count++)
    {
        // 13th iteration is skipped
        if (count == 13)
            continue;
        
        // number of rooms must be 10 or more
        do
        {
            cout << "How many rooms are on floor " << count << "? ";
            cin >> rooms;
        } while (rooms < 10);
        
        // accumulator
        totalr += rooms;
        
        cout << "How many of them are occupied? ";
        cin >> occup;
        
        // another accumulator
        totalo += occup;
    }
    
    // display information
    cout << "Rooms: " << totalr << endl
         << "Occupied: " << totalo << endl
         << "Unoccupied: " << totalr - totalo << endl
         << static_cast<float>(totalo) / totalr * 100
         << "% occupied";
    
    // end program
    return 0;
}