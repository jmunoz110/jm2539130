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
// findH returns the size of the name with the greatest length
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
        // displays rules
    	while (inputFile >> rules)
            if (rules != "NEWLINE")
                cout << rules << " ";
            else
                cout << endl;
        
        // closes input file
    	inputFile.close();
        
    	cout << endl;
    }
    
    // for loop that determines the order in which players roll
    for (count = 0; count < players; count++)
        do
        {
            // a name element is assigned a random tempn element
            name[count] = tempn[rand() % players];
            
            // If the order function returns true, the previous statement will
            // execute again. The name array, number of players, and counter
            // are passed as arguments.
    	} while (order(name, players, count));
        
    // list header
    cout << "\nOrder\n-----\n";
    
    // displays player order
    for (count = 0; count < players; count++)
    	cout << count + 1 << ": " << name[count] << endl;
    
    // output that lets the user know how order was determined
    cout << "\nThe player order was determined randomly.\n" << left;
    
    //function to find the name with the greatest length
    // used to format output
    highest = findH(name, players);
    
    // the function where the game is played
    // the function will continue to run as long as true is returned
    while (game(name, turn, players, tempt, total, highest));
    
    // The winner is declared
    cout << endl << name[turn] << " wins!"
            
        // asks the user if they would like save scores onto a file
         << "\n\nWould you like to record these scores? "
         << "(Type Y for yes, N for no)\n";
	cin >> select;
        
    // save scores
    if (select == 'Y' || select == 'y')
    {
        // create an output file
    	ofstream outputFile;
        
        // open a text document
    	outputFile.open("Scores.txt");
        
        // formatting
    	outputFile << left;
        
        // displays names and scores
    	for (count = 0; count < players; count++)
            outputFile << setw(highest) << name[count] << ": " << total[count] + tempt[count] << endl;
        
        // confirmation that scores have been recorded
        cout << "\nThe scores have been recorded.";
        
        // close output file
        outputFile.close();
	}
    
    // end
    return 0;
}

// this function ensures that no two elements in the name array are the same
bool order(string name[], int players, int current)
{
    // int variables for the counter and accumulator
    int count, total = 0;
    
    // for loop steps through every element in the name array
    for (count = 0; count < players; count++)
        // total increments if two elements share the same data
        if (name[current] == name[count])
            total++;
    
    // if two elements contain the same data, this program will return true
    return total > 1 ? true : false;
}

// where the gameplay occurs
// TT is temporary total, T is total, and H is highest
bool game(const string name[], int &turn, int players, int TT [], int T[], int H)
{
    // these integers are only defined once
    // roll and player choice are initialized to 1
    static int roll = 1, choice = 1;
    
    // loop counter
    int count;
    
    // if the player rolls a one
    if (roll == 1)
    {
        // name is displayed
        cout << endl << name[turn] << endl;
        
        // hyphens underneath names are displayed
        for (count = 1; count <= name[turn].length(); count++)
            cout << "-";
    }
    
    // otherwise
    else
    {
        // menu of options
        cout << "\n1. Roll"
             << "\n2. Hold"
             << "\n3. Display Scores"
             << "\nChoose from the Menu: ";
        // player chooses from menu
        cin >> choice;
    }
    
    // switch statement processes choice
    switch (choice)
    {
        // player chose to roll or their turn has begun
        case 1:
                // a number ranging from 1 to 6 is stored in roll
                roll = 1 + rand() % 6;
                
                // display roll
                cout << "\nRoll: " << roll << endl;
                
                // if the roll does not equal one, then points are accumulated
                if (roll != 1)
                        TT[turn] += roll;
                
                // if the roll is equal to 1
                else
                {
                    // temporary points are reset to 0
                    TT[turn] = 0;
                    
                    // next player's turn
                    turn != players - 1 ? turn++ : turn = 0;
                }
                break;
                
        // user chooses to hold
        case 2:
                // roll and choice are reset
                roll = 1;
                choice = 1;
                
                cout << endl;
                
                // temporary total is added to total
                T[turn] += TT[turn];
                
                // temporary total is reset
                TT[turn] = 0;
                
                // next player's turn
                turn != players - 1 ? turn++ : turn = 0;
                break;
        // if the player chooses to see scores
        case 3:
            
                cout << endl;
                
                // names and scores are displayed
                for (count = 0; count < players; count++)
                    cout << setw(H) << name[count] << ": " << T[count] + TT[count] << endl;
    }
    
    // if a player reaches or exceeds 100, false is returned
    if (T[turn] + TT[turn] >= 100)
        return false;
    
    // otherwise true is returned
    else
        return true;
}

// function to find name with greatest length
int findH(const string name[], int players)
{

    // int variables for the counter and the highest value
    int count, highest = name[0].length();
    
    // loops through every element in the name array
    for (count = 1; count < players; count++)
        // if an element is larger than a previous one, it will be stored in the 
        // highest variable
        if (name[count].length() > highest)
            highest = name[count].length();
    
    // size of the largest name is returned
    return highest;
}