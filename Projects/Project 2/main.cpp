// Jonathan Munoz
// 02/10/16
// Project 2

// Headers
#include <iostream>	// for input and output
#include <cstdlib>	// for the random function
#include <ctime>	// for the seed value in srand()
#include <iomanip>	// for the manipulation of stream
#include <fstream>	// for file input and output
using namespace std;

//Function Prototypes
// order determines who goes first, second, third, and so forth
bool order(string [], int, int);
// game executes the gameplay
bool game(const string [], int &, int, int [], int [], int);
// findH returns the name with the greatest length
int findH(const string [], int);

// the program begins
int main()
{
    // char variables
    char select;            // for selections
    
    // int variables
    int seed = time (0),    // seed value for srand()
        players,            // number of players
        count,              // counter for loops
        turn = 0,           // for the player turn
        highest;            // largest name
    
    // string variable
    string rules;           // for holding the rules
    
    // needed for random values
    srand(seed);
    
    // prompt to enter the number of players
    cout << "How many people will be playing? ";
    cin >> players;
    
    // string arrays
    string tempn[players],  // holds the names temporarily
           name[players];   // holds the names
    
    // integer arrays
    int tempt[players] = {0},   // holds temporary number of points
        total[players] = {0};   // holds total points
    
    // needed to input first name
    cin.ignore();
    
    // loop that asks for player names
    for (count = 0; count < players; count++)
    {
    	cout << "Enter the name of Player " << count + 1 << ": ";
    	getline(cin, tempn[count]);
    }
    
    // prompt for displaying the rules
    cout << "\nWould you like to display the rules before the game begins? "
         << "\n(Type Y for yes, N for no)\n";
    cin >> select;
    
    // if statement will execute if user wants to see the rules
    if (select == 'Y' || select == 'y')
    {
    	cout << endl;
        
        // create an input file
    	ifstream inputFile;
        
        // open a text file
    	inputFile.open("Rules.txt");
        
        // input text from files into a variable
    	while (inputFile >> rules)
            // displays rules    
            cout << rules << " ";
        
        // closes input file
    	inputFile.close();
        
    	cout << endl;
    }
    
    // for loop 
    for (count = 0; count < players; count++)
		do
		{
    		name[count] = tempn[rand() % players];
    	} while (order(name, players, count));
    cout << "\nOrder\n-----\n";
    for (count = 0; count < players; count++)
    	cout << count + 1 << ": " << name[count] << endl;
    cout << "\nThe player order was determined randomly.\n" << left;
    highest = findH(name, players);
    while (game(name, turn, players, tempt, total, highest));
    cout << endl << name[turn] << " wins!"
         << "\n\nWould you like to record these scores? "
         << "(Type Y for yes, N for no)\n";
	cin >> select;
    if (select == 'Y' || select == 'y')
    {
    	ofstream outputFile;
    	outputFile.open("Scores.txt");
    	outputFile << left;
    	for (count = 0; count < players; count++)
			outputFile << setw(highest) << name[count] << ": " << total[count] + tempt[count] << endl;
		cout << "The scores have been recorded.";
		outputFile.close();
	}
    return 0;
}
bool order(string name[], int players, int current)
{
	int count, total = 0;
	for (count = 0; count < players; count++)
		if (name[current] == name[count])
			total++;
	return total > 1 ? true : false;
}
bool game(const string name[], int &turn, int players, int TT [], int T[], int H)
{
	static int roll = 1, choice = 1;
	int count;
	if (roll == 1)
	{
		cout << endl << name[turn] << endl;
		for (count = 1; count <= name[turn].length(); count++)
			cout << "-";
	}
	else
	{
		cout << "\n1. Roll"
			 << "\n2. Hold"
			 << "\n3. Display Scores"
			 << "\nChoose from the Menu: ";
		cin >> choice;
	}
	switch (choice)
	{
		case 1:
				roll = 1 + rand() % 6;
				cout << "\nRoll: " << roll << endl;
				if (roll != 1)
					TT[turn] += roll;
				else
				{
					TT[turn] = 0;
					turn != players - 1 ? turn++ : turn = 0;
				}
				break;
		case 2:
				roll = 1;
				choice = 1;
				cout << endl;
				T[turn] += TT[turn];
				TT[turn] = 0;
				turn != players - 1 ? turn++ : turn = 0;
				break;
		case 3:
				cout << endl;
				for (count = 0; count < players; count++)
					cout << setw(H) << name[count] << ": " << T[count] + TT[count] << endl;
	}
	if (T[turn] + TT[turn] >= 100)
		return false;
	else
		return true;
}
int findH(const string name[], int players)
{
	int count, highest = name[0].length();
	for (count = 1; count < players; count++)
		if (name[count].length() > highest)
			highest = name[count].length();
	return highest;
}