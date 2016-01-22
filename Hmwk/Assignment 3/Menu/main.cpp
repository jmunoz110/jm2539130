#include <iostream>
#include <iomanip>
using namespace std;
// a menu for selecting a problem to be solved from a textbook
int main()
{
    // choice is the variable for choosing a selection from the menu
    unsigned choice;
    // loop is the variable for determining whether the menu will be displayed
    // again
    bool loop = true;
    // a do-while loop guarantees that the menu will always be shown
    // at least once
    do
    {
        cout << "Chapter 4 - Gaddis 7th Edition\n"
         << "------------------------------\n"
         << "02. Roman Numberals\n"
         << "03. Magic Dates\n"
         << "04. Areas of Rectangles\n"
         << "05. Body Mass Index\n"
         << "06. Mass and Weight\n"
         << "08. Change for a Dollar Game\n"
         << "11. Book Club Points\n"
         << "17. Spectral Analysis\n"
         << "20. Freezing and Boiling Points\n"
         << "21. Geometry Calculator\n"
         << "    Type anything else to quit.\n"
         << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
        case 2:// expresses input in Roman numeral

                {
                // variable for a number
                int number;
                
                // asks the user to enter a number
                cout << "Enter a number within the range of 1 through 10. ";
                cin >> number;
                
                // depending on the number chosen,
                // an appropriate Roman numeral will be displayed
                switch (number)
                {
                    case 1: cout << "I";
                            break;
                    case 2: cout << "II";
                            break;
                    case 3: cout << "III";
                            break;
                    case 4: cout << "IV";
                            break;
                    case 5: cout << "V";
                            break;
                    case 6: cout << "VI";
                            break;
                    case 7: cout << "VII";
                            break;
                    case 8: cout << "VIII";
                            break;
                    case 9: cout << "IX";
                            break;
                    case 10: cout << "X";
                            break;
                    default: cout << "Invalid";
                }
                cout << endl;
                }
                break;
        case 3:// the beginning
                {
                // variables
                int month, day, year;
                
                // the user will input a month
                cout << "Enter a a month in numeric form. ";
                cin >> month;
                
                // the user will input a day
                cout << "Enter a day. ";
                cin >> day;
                
                // the user will input a year
                cout << "Enter the last two digits of a year. ";
                cin >> year;
                
                // the message that will be displayed depends on whether the month's number
                // multiplied by the day's number is equal to the year's number
                if (month * day == year)
                   cout << "The date is magic.";
                else
                   cout << "The date is not magic.";
                }
                cout << endl;
                break;
        case 4:// let's get started
                {
                // The task of determining which rectangle has the greater area begins!
                // the unit of measurement is not necessary for this program
                cout << "This program will compare the areas of two rectangles.\n\n";
                    
                // user should enter length of the first rectangle
                cout << "Enter the length of Rectangle 1. ";
                float length1;
                cin >> length1;
                
                // entering the width of the first rectangle
                cout << "Enter the width of Rectangle 1. ";
                float width1;
                cin >> width1;
                
                // length of the second rectangle
                cout << "\nEnter the length of Rectangle 2. ";
                float length2;
                cin >> length2;
                
                // second rectangle's width
                cout << "Enter the width of Rectangle 2. ";
                float width2;
                cin >> width2;
                
                // area and length are multiplied to find the area of each rectangle
                float area1, area2;
                area1 = length1 * width1;
                area2 = length2 * width2;
                
                // relational operators are used to compare the areas
                // When the expressions have been tested, the user will know which area is
                // greater.
                if (area1 > area2)
                   cout << "\nRectangle 1 has the greater area.\n";
                else if (area1 < area2)
                   cout << "\nRectangle 2 has the greater area.\n";
                else if (area1 == area2)
                   cout << "\nThe areas are the same.\n";
                else
                   cout << "\nERROR\n";
                }
                cout << endl;
                break;
        case 5:// This program lets users know whether they are of a healthy weight
                {
                // variables
                float weight, height, BMI;
                
                // user's weight
                cout << "What is your weight measured in pounds? ";
                cin >> weight;
                
                // user's height
                cout << "What is your height measured in inches? ";
                cin >> height;
                
                // Body Mass Index Calculation
                BMI = weight * 703 / height /height;
                
                // a BMI of 18.5 to 25 is healthy
                if (BMI >= 18.5 && BMI <= 25)
                    cout << "Your weight is optimal.";
                // a BMI below 18.5 means one is underweight
                else if (BMI > 0 && BMI < 18.5)
                    cout << "You are underweight.";
                // over 25 means that the person is overweight
                else if (BMI > 25)
                    cout << "You are overweight.";
                // Negative values are unacceptable
                else
                    cout << "ERROR";
                }
                cout << endl;
                break;
        case 6:// this program uses the mass of an object to calculate its weight
                {
                // variables to hold mass and weight
                float mass, weight;
                
                // mass of an object should be entered
                cout << "Enter an object's mass (measured in kilograms): ";
                cin >> mass;
                
                // weight as a function of mass
                weight = mass * 9.8;
                
                // if the weight is over 1000, the object will be declared too heavy
                if (weight > 1000)
                    cout << "The object is too heavy.";
                // if the weight is less than 10, the object will be declared too light
                if (weight < 10)
                    cout << "The object is too light.";
                }
                cout << endl;
                break;
        case 8:// this is a game where the user has to make a dollar with coins
                {
                // variables for different types of coins and the total of their worth
                unsigned pennies, nickels, dimes, quarter, total;
                
                cout << "Enter the number of coins required to make exactly one dollar.\n";
                
                // user inputs number of pennies
                cout << "Enter the number of pennies: ";
                cin >> pennies;
                
                // user inputs number of nickels
                cout << "Enter the number of nickels: ";
                cin >> nickels;
                
                // user inputs number of dimes
                cout << "Enter the number of dimes: ";
                cin >> dimes;
                
                // user inputs number of quarters
                cout << "Enter the number of quarters: ";
                cin >> quarter;
                
                // the total is calculated
                total = pennies + 5 * nickels + 10 * dimes + 25 * quarter;
                
                // If the amount is equal to 1 dollar, the user won.
                // The program will tell the user if the amount is more or less
                // than a dollar.
                if (total == 100)
                    cout << "The amount is equal to one dollar. You win!";
                if (total > 100)
                    cout << "The amount is more than a dollar. You lose.";
                if (total < 100)
                    cout << "The amount is less than a dollar. You lose.";
                }
                cout << endl;
                break;
        case 11:// this program awards points based on how many books have been purchased
                {
                // declaring a variable
                int books;
                
                // asking the user to enter information
                cout << "How many books have you purchased this month?\n";
                cin >> books;
                
                // if/else statements will award points and warn user about invalid input
                if (books == 0)
                    cout << "You have been awarded 0 points.";
                else if (books == 1)
                    cout << "You have been awarded 5 points.";
                else if (books == 2)
                    cout << "You have been awarded 15 points.";
                else if (books == 3)
                    cout << "You have been awarded 30 points.";
                else if (books >= 4)
                    cout << "You have been awarded 60 points.";
                else
                    cout << "Invalid input.";
                }
                cout << endl;
                break;
        case 17:// the program will display what kind of radiation a electromagnetic wave is
                // once the wavelength has been entered
                {
                // double is needed for program to work properly
            	double wave;
                    
                    // output and input
            	cout << "What is the wavelength of the ";
                    cout <<"electromagnetic wave in meters? ";
            	cin >> wave;
                    
                    // if/else statements will determine the type of wave
            	if (wave >= 1e-2)
            		cout << "The wave is a Radio Wave";
            	else if (wave >= 1e-3)
            		cout << "The wave is a Microwave.";
            	else if (wave >= 7e-7)
            		cout << "The wave is Infrared.";
            	else if (wave >= 4e-7)
            		cout << "The wave is Visible Light.";
            	else if (wave >= 1e-8)
            		cout << "The wave is Ultraviolet.";
            	else if (wave >= 1e-11)
            		cout << "The wave is an X Ray.";
            	else
            		cout << "The wave is a Gamma Ray.";
                }
                cout << endl;
                break;
        case 20:// independent if statements and relational operators are used to determine
                // which substances will boil and freeze at the specified temperature
                {
                // one variable declaration
            	float temp;
                    
                    // output and input
            	cout << "Enter a temperature in degrees Fahrenheit: ";
            	cin >> temp;
                    
                    // manipulating the output 
            	cout << fixed << setprecision(1) << endl;
                    
                    // if statements
                    // Ethyl alcohol
            	if (temp <= -173)
            		cout << "Ethyl alcohol will freeze at this temperature.\n";
            	if (temp >= 172)
            		cout << "Ethyl alcohol will boil at this temperature.\n";
                    // Mercury
            	if (temp <= -38)
            		cout << "Mercury will freeze at this temperature.\n";
            	if (temp >= 676)
            		cout << "Mercury will boil at this temperature.\n";
                    // Oxygen
                    if (temp <= -362)
            		cout << "Oxygen will freeze at this temperature.\n";
            	if (temp >= -306)
            		cout << "Oxygen will boil at this temperature.\n";
                    // Water
            	if (temp <= 32)
            		cout << "Water will freeze at this temperature.\n";
            	if (temp >= 212)
            		cout << "Water will boil at this temperature.\n";
                }
                cout << endl;
                break;
        case 21:// a menu is shown and the user can enter data to determine
                // the area of a shape
                {
                // the other variables are in the switch statement
                int choice;
                
                // menu
                cout << "Geometry Calculator" << endl << endl;
                cout << "   1. Calculate the Area of a Circle" << endl;
                cout << "   2. Calculate the Area of a Rectangle" << endl;
                cout << "   3. Calculate the Area of a Triangle" << endl;
                cout << "   4. Quit" << endl;
                cout << endl << "   Enter your choice (1-4): ";
                cin >> choice;
                
                switch (choice)
                {
                    // The program asks for the radius and the radius is used in a formula
                    // to calculate the area. (negative values are not allowed)
                    case 1: float r;
                            cout << "\nWhat is the radius of the circle? ";
                            cin >> r;
                            if (r < 0)
                                cout << "Do not enter negative values.";
                            else
                                cout << "area = " << 3.14159 * r * r;
                            break;
                    // length and width are required to find area
                    case 2: cout << "\nWhat is the length of the rectangle? ";
                            float length, width;
                            cin >> length;
                            cout << "What is the width of the rectangle? ";
                            cin >> width;
                            if (length < 0 || width < 0)
                                cout << "Do not enter negative values.";
                            else
                                cout << "area = " << length * width;
                            break;
                    // base and height are required to find area
                    case 3: cout << "\nWhat is the length of the triangle's base? ";
                            float base, height;
                            cin >> base;
                            cout << "What is the length of the triangle's height? ";
                            cin >> height;
                            if (base < 0 || height < 0)
                                cout << "Do not enter negative values.";
                            else
                                cout << "area = " << base * height * 0.5;
                            break;
                    // quitting causes the program to end
                    case 4: break;
                    // a choice from the menu must be selected
                    default: cout << "That is not a choice in the menu.";
                }
                }
                cout << endl; 
                break;
        default: loop = false;
    }
    } while (loop);
    
    return 0;
}