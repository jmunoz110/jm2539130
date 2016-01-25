#include <iostream>
using namespace std;
int main()
{
    int floors, count, rooms, occup, totalr = 0, totalo = 0;
    do
    {
        cout << "How many floors does the hotel have? ";
        cin >> floors;
    } while (floors < 1);
    for (count = 1; count <= floors; count++)
    {
        if (count == 13)
            continue;
        do
        {
            cout << "How many rooms are on floor " << count << "? ";
            cin >> rooms;
        } while (rooms < 10);
        totalr += rooms;
        cout << "How many of them are occupied? ";
        cin >> occup;
        totalo += occup;
    }
    cout << "Rooms: " << totalr << endl
         << "Occupied: " << totalo << endl
         << "Unoccupied: " << totalr - totalo << endl
         << static_cast<float>(totalo) / totalr * 100
         << "% occupied";
    return 0;
}