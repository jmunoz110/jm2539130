// Jonathan Munoz
// Project 1
// 02/02/16

// The Preprocessor Directives
#include <iostream> // needed for input and output
#include <cstdlib>  // needed for dice rolls
#include <ctime>    // needed for srand()
#include <iomanip>  // displays the player names in a certain way
#include <fstream>  // needed to output scores to a file
using namespace std;

int main()
{
    // char variable
    char select;    // used for displaying rules and outputting scores to file
    
    // int variables
    int seed = time (0),    // seed to be placed in srand parentheses
        roll = 1,           // holds the value of the die
        choice = 1,         // holds player choice
        player,             // determines whose turn it is
        hyphen,             // the counter for a loop
        temptotal1 = 0,     // holds the sum of die rolls for player 1
        temptotal2 = 0,     // holds the sum of die rolls for player 2
        total1 = 0,         // holds the score of player 1
        total2= 0;          // holds the score of player 2
    
    // string variable
    string name1,   // holds the name of player 1
           name2;   // holds the name of player 2
    
    // needed for random numbers
    srand(seed);
    
    // prompts user to choose whether to display rules
    cout << "Would you like to display the rules before the game begins? "
         << "(Type Y for yes, N for no)\n";
    cin >> select;
    
    // rules are shown if Y or y is entered
    if (select == 'Y' || select == 'y')
    	cout << "Pig is the name of the game. Normally, this game can be\n"
             << "played with two or more players, but this program only\n"
             << "allows play between two. The goal of the game is to attain\n"
             << "100 points. Points are acquired by rolling a die.  If a 1 is\n"
             << "not rolled, the die can be rolled again and the die's value\n"
             << "is added to the previous rolls. The player can also choose\n"
             << "to hold, which ends their turn and adds the points gained\n"
             << "during their turn to their total. If a 1 is rolled, however,\n"
             << "all points gained during the player's turn are lost and\n"
             << "their turn ends.\n";
    
    // data can't be input into name1 without cin.ignore
    cin.ignore();
    
    // prompt to enter the first player's name
    cout << "Enter the name of Player 1: ";
    getline(cin, name1);
    
    // prompt to enter the second player's name
    cout << "Enter the name of Player 2: ";
    getline(cin, name2);
    
    // initializes player to either 1 or 2 and determines who has the first turn
    player = 1 + rand() % 2;
    
    // lets the players know why the selected player goes first
    // left adjusts setw() stream manipulator
    cout << "The player who rolls first was determined randomly." << endl
         << left;
    
    // this do-while loop contains the gameplay
    do
    {
        // if roll is equal to 1, a player's name will be displayed
    	if (roll == 1)
    	{
            // new line is created
            cout << endl;
            
            // if statement if it is the turn of player 1
            if (player == 1)
            {
                // displays name and ends the line
                cout << name1 << endl;
                
                // creates hyphens underneath name until length of hyphens
                // matches length of name
                for (hyphen = 1 ; hyphen <= name1.length(); hyphen++)
                    cout << "-";
            }
            
            // else statement if it is the turn of player 2
            else
            {
                // statements inside else are same as the ones in if, but for
                // player 2
                cout << name2 << endl;
                
                for (hyphen = 1; hyphen <= name2.length(); hyphen++)
                    cout << "-";
            }
        }
        
        // if roll not equal to one, a menu will be created
    	if (roll != 1)
    	{
            // menu allows user to roll, hold, or display player scores
            cout << "\n1. Roll"
                 << "\n2. Hold"
                 << "\n3. Display Scores"
                 << "\nChoose from the menu: ";
            // user enters a number that corresponds with a choice
            cin >> choice;
    	}
        
        // switch reads user choice
    	switch (choice)
    	{
        // if user chooses to roll, case 1 will execute
    	case 1:
                // roll will be equal to a value from 1 to 6
    		roll = 1 + rand() % 6;
                
                // roll will be displayed
    		cout << "\nRoll: " << roll << endl;
                
                // if roll does not equal 1
    		if (roll != 1)
                    // switch depends on whose turn it is
                    switch (player)
                    {
                        // if it is the first player's turn, case 1 executes
                        case 1:
                                // the roll will be stored temporarily
                                temptotal1 += roll;
                                break;
                                
                        // executes if it is second player's turn
                        case 2:
                                // roll is stored temporarily
                                temptotal2 += roll;
                    }

                // if roll is 1
                if (roll == 1)
                    // switch depends on player turn
                    switch (player)
                    {
                        // player one's turn
                        case 1:
                                // the temporary total is reset to 0
                                temptotal1 = 0;
                                
                                // turn switches to player 2
                                player = 2;
                                break;
                        // player two's turn
                        case 2:
                                // temporary total resets to 0
                                temptotal2 = 0;
                                
                                // turn switches to player 1
                                player = 1;
                    }
                break;
                
        // player chooses to hold
        case 2:
                // roll value resets to 1 next player's name is displayed
                roll = 1;
                
                //  value resets to 1 so menu is not displayed for next roll
                choice = 1;
                
                cout << endl;
                
                // again, switch depends on player turn
                switch (player)
                {
                // if player one's turn
                case 1:
                        // temporary total added to total
                        total1 += temptotal1;
                        
                        // switches to other player
                        player = 2;
                        
                        // resets temporary total
                        temptotal1 = 0;
                        break;
                        
                // player two's turn
                case 2:
                        // same as case 1, but applied to player 2
                        total2 += temptotal2;
                        
                        player = 1;
                        
                        temptotal2 = 0;
                }
    		break;
                
        // user chooses to see scores
    	case 3:
                // ternary operator determines which name is larger to line up
                // the colon symbols
                // then the total plus the temporary total is shown
                cout << endl << setw(name1.length() > name2.length()
                ? name1.length() : name2.length()) << name1
                << ": " << total1 + temptotal1
                        
                << endl << setw(name2.length() > name1.length() ? name2.length()
                : name1.length()) << name2 << ": " << total2 + temptotal2
                << endl;
    	}
    // loops until total plus temp total for one player is greater than 100
    } while (total1 + temptotal1 < 100 && total2 + temptotal2 < 100);
    
    // ternary operator determines what will be displayed
    cout << endl
         << (total1 + temptotal1 >= 100 ? "Player 1 wins!" : "Player 2 wins!");
    
    // asks user whether scores should be saved
    cout << "\n\nWould you like to record these scores? "
         << "(Type Y for yes, N for no)\n";
    cin >> select;
    
    // saves scores
    if (select == 'Y' || select == 'y')
    	{
            // create output file
            ofstream outputFile;
            
            // open output file
            outputFile.open("Scores.txt");
            
            // names are formatted and displayed
            outputFile << left << setw(name1.length() > name2.length()
                       ? name1.length() : name2.length()) << name1
                       << ": " << (player == 1 ? 100 : total1)
                    
                       << endl << setw(name2.length() > name1.length()
                       ? name2.length() : name1.length()) << name2
                       << ": " << (player == 2 ? 100 : total2);
            // confirmation that scores have been recorded
            cout << endl << "The scores have been recorded.";
            outputFile.close();
            }
    return 0;
}