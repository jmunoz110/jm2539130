// Jonathan Munoz
// 01/25/16

// preprocessor directives
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// menu
int main()
{
    int choice;
    do
    {
    cout << "1. Sum of Numbers\n";
    cout << "2. Characters for the ASCII Codes\n";
    cout << "3. Ocean Levels\n";
    cout << "4. Calories Burned\n";
    cout << "5. Membership Fees Increase\n";
    cout << "6. Distance Traveled\n";
    cout << "7. Pennies for Pay\n";
    cout << "8. Math Tutor\n";
    cout << "9. Hotel Occupancy\n";
    cout << "10. Average Rainfall\n";
    cout << "Type anything else to quit\n";
    cout << "Select from the menu: ";
    cin >> choice;
    
    switch (choice)
    {
        case 1:
        {
            // variables for the number entered, counter, and total
            int number, count, total = 0;

            // just a prompt for the user
            cout << "Enter a positive integer value: ";
            cin >> number;

            // a loop that only accepts positive values
            // the loop adds every value up to the number that the user entered
            if (number > 0)
            {
                for (count = 1; count <= number; count++)
                    total += count;
                cout << total;
            }
            else
                cout << "That is not a positive number.";
        }
            break;
        case 2:
        {
            // for loop that displays characters
            for (char count = 0; count <= 127; count++)
            {
                cout << count << " ";
                // 16 characters per line
                if (count % 16 == 15)
                    cout << endl;
                // loop is infinite without this if statement
                if (count == 127)
                    break;
            }
        }
            break;
        case 3:
        {
                // table headers
                cout << "Years" << "   Rise (mm)" << endl;

                // loop for displaying information in table
                for (unsigned count = 1; count <= 25; count++)
                    cout << count << "\t" << count * 1.5 << endl;
        }
            break;
        case 4:
        {
                // Stating the purpose of the program
                cout << "Calories Burned After Specified Amount of Time" << endl;
                // Hyphens used to separate the title from the information
                cout << "----------------------------------------------" << endl;
                // Headers for the numbers that will be displayed below them
                cout << "Calories\tMin\n";

                // Loop initialized at 10 minutes and increased by 5 after each iteration
                for (unsigned min = 10; min <= 30; min += 5)
                    // Minutes multiplied by the amount of calories burned per minute, 3.9,
                    // followed by the amount time that has elapsed
                    cout << min * 3.9 << "\t\t" << min << endl;
        }
            break;
        case 5:
        {
                // variable initialized at 2500
                float charge = 2500;

                // headers and stream manipulators
                cout << "Year\tFee\n";
                cout << "----------------\n";
                cout << setprecision(2) << fixed;

                // a loop that repeats 6 times
                //each iteration increases by 4 percent
                for (int year = 1; year <= 6 ; year++)
                {
                    charge *= 1.04;
                    cout << year << "\t$";
                    cout << charge << endl;
                }
        }
            break;
        case 6:
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
        }
            break;
        case 7:
        {
                // variable for the counter
                int count;

                // float was chosen for days because entering a decimal value for an integer
                // data type caused the do-while loop to malfunction.
                float days;

                // variables for total pay and daily salary
                // double is needed for values that the float data type cannot properly hold
                double total = 0, salary;

                // prompt for the user to enter a number that can't be less than 1
                do
                {
                    cout << "Enter the number of days (1 or more): ";
                    cin >> days;
                    static_cast<int>(days);
                } while (days < 1);

                // table headers and stream manipulators
                cout << "\nDay\tSalary\n"
                     << "--------------\n"
                     << fixed << setprecision(2);

                // loop to display values in the table
                for (count = 0; count <= (days - 1); count++)
                {
                    salary = pow(2.0, count) * 0.01;
                    cout << count + 1 << "\t$" << salary << endl;
                    total += salary;
                }

                // display total pay
                cout << "\nTotal Pay: $" << total;
        }
            break;
        case 8:
        {
                // variables for the menu, srand, and two numbers
                unsigned select, seed, num1, num2;

                seed = time(0);
                srand(seed);

                // the loop displays a menu for the user
                do
                {
                cout << "1. Addition\n"
                         << "2. Subtraction\n"
                         << "3. Multiplication\n"
                         << "4. Division\n"
                         << "5. Quit\n"
                         << "Select: ";
                cin >> select;

                // the switch statement shows the user a math problem
                // for each case, two random numbers are selected
                // user must press enter to see answer
                switch (select)
                {
                        case 1: num1 = 1 + rand() % 999;
                                        num2 = 1 + rand() % 999;
                                        cout << "Press Enter to see answer\n";
                                        cout << num1 << " + " << num2 << " = ";
                                        cin.ignore();
                                        cin.get();
                                        cout << num1 + num2 << endl << endl;
                                        break;
                        // do-while statement ensures that the answer is not negative
                        case 2: do
                                        {
                                                num1 = 1 + rand() % 999;
                                                num2 = 1 + rand() % 999;
                                        } while (num2 > num1);
                                        cout << "Press Enter to see answer\n";
                                        cout << num1 << " - " << num2 << " = ";
                                        cin.ignore();
                                        cin.get();
                                        cout << num1 - num2 << endl << endl;
                                        break;
                        case 3: num1 = 1 + rand() % 99;
                                        num2 = 1 + rand() % 99;
                                        cout << "Press Enter to see answer\n";
                                        cout << num1 << " * " << num2 << " = ";
                                        cin.ignore();
                                        cin.get();
                                        cout << num1 * num2 << endl << endl;
                                        break;
                        // do-while statement ensures that the answer is an integer
                        case 4: do
                                        {
                                        num1 = 1 + rand() % 999;
                                        num2 = 1 + rand() % 999;
                                        } while (num1 < num2 || num1 % num2 != 0);
                                        cout << "Press Enter to see answer\n";
                                        cout << num1 << " / " << num2 << " = ";
                                        cin.ignore();
                                        cin.get();
                                        cout << num1 / num2 << endl << endl;
                                        break;
                        // quit menu
                        case 5: break;
                        default : cout << "That selection is not in the menu\n\n";
                }
                } while (select != 5);
        }
            break;
        case 9:
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
        }
            break;
        case 10:
        {
                // variables that hold inches of rainfall
                float rain, total = 0;

                // variables that hold the years, months, and counter
                int years, count, months;

                // prompt to enter number of years
                cout << "How many years? ";
                cin >> years;

                // outer loop executes when inner loop has executed 12 times
                for (count = 1; count <= years; count++)
                {
                    // header for the monthly data
                    cout << "Year " << count;
                    cout << "\n------\n";

                    // loop asks user for input and calculates the sum of the input
                    for (months = 1; months <= 12; months++)
                    {
                        // prompt for inches of rainfall for the month
                        cout << "Enter the inches of rainfall for ";

                        // displays the month
                        switch (months)
                        {
                            case 1: cout << "January: ";
                                    break;
                            case 2: cout << "February: ";
                                    break;
                            case 3: cout << "March: ";
                                    break;
                            case 4: cout << "April: ";
                                    break;
                            case 5: cout << "May: ";
                                    break;
                            case 6: cout << "June: ";
                                    break;
                            case 7: cout << "July: ";
                                    break;
                            case 8: cout << "August: ";
                                    break;
                            case 9: cout << "September: ";
                                    break;
                            case 10: cout << "October: ";
                                     break;
                            case 11: cout << "November: ";
                                     break;
                            case 12: cout << "December: ";
                                     break;
                        }
                        cin >> rain;

                        // accumulates rainfall
                        total += rain;
                    }
                }

                // displays information
                cout << "Months: " << --count * 12 << endl;
                cout << "Total Inches of Rainfall: " << total << endl;
                cout << "Inches of Rainfall per Month: " << total / count / 12 ;
        }
            break;
    }
    cout << endl << endl;
    } while (choice >= 1 && choice <= 10);
    
    // end
    return 0;
}