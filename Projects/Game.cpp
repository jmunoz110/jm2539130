#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
	char select;
    int seed = time (0), roll = 1, choice = 1, player, hyphen, temptotal1 = 0, temptotal2 = 0, total1 = 0, total2= 0;
    string name1, name2;
    srand(seed);
    cout << "Would you like to display the rules before the games begins? ";
    cin >> select;
    if (select == 'Y' || select == 'y')
    	cout << "Pig is the name of the game. Normally, this game can be played with two or more players\n";
    cin.ignore();
    cout << "Enter the name of Player 1: ";
    getline(cin, name1);
    cout << "Enter the name of Player 2: ";
    getline(cin, name2);
    cout << "The player who rolls first was determined randomly.";
    player = 1 + rand() % 2;
    cout << endl << left;
    do
    {
    	if (roll == 1)
    	{
    		cout << endl;
    		if (player == 1)
    		{
    			cout << name1 << endl;
				for (hyphen = 1 ; hyphen <= name1.length(); hyphen++)
					cout << "-";
			}
			else
			{
				cout << name2 << endl;
				for (hyphen = 1; hyphen <= name2.length(); hyphen++)
					cout << "-";
			}
		}
    	if (roll != 1)
    	{
    		cout << "\n1. Roll\n2. Hold\n3. Display Scores\nChoose from the menu: ";
    		cin >> choice;
    	}
    	switch (choice)
    	{
    	case 1:
    		roll = 1 + rand() % 6;
    		cout << "\nRoll: "<< roll << endl;
    		if (roll != 1)
	    		switch (player)
	    		{
	    			case 1:
						temptotal1 += roll;
						break;
	    			case 2:
						temptotal2 += roll;
				}
			if (roll == 1)
				switch (player)
				{
					case 1:
						temptotal1 = 0;
						player = 2;
						break;
					case 2:
						temptotal2 = 0;
						player = 1;
				}
			break;
		case 2:
			roll = 1;
			choice = 1;
			cout << endl;
			switch (player)
			{
    			case 1:
					total1 += temptotal1;
					player = 2;
					temptotal1 = 0;
					break;
    			case 2:
					total2 += temptotal2;
					player = 1;
					temptotal2 = 0;
    		}
    		break;
    	case 3:
    			cout << endl << setw(name1 > name2 ? name1.length() : name2.length()) << name1 << ": " << total1 + temptotal1
				     << endl << setw(name2 > name1 ? name2.length() : name1.length()) << name2 << ": " << total2 + temptotal2 << endl;
    	}
    } while (total1 + temptotal1 < 100 && total2 + temptotal2 < 100);
    cout << endl << (total1 + temptotal1 >= 100 ? "Player 1 wins!" : "Player 2 wins!");
    cout << "\nWould you like to record these scores? ";
    cin >> select;
    if (select == 'Y' || select == 'y')
    	{
    		ofstream outputFile;
    		outputFile.open("Scores.txt");
    		outputFile << left << setw(name1 > name2 ? name1.length() : name2.length()) << name1 << ": " << (player == 1 ? 100 : total1)
					   << endl << setw(name2 > name1 ? name2.length() : name1.length()) << name2 << ": " << (player == 2 ? 100 : total2);
			cout << "The scores have been recorded.";
		}
    return 0;
}
