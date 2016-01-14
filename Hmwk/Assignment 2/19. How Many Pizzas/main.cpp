#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double people, diameter, area, slices, pizzas;
    
    cout << "How many people will be at the party? ";
    cin >> people;
    
    cout << "What is the diameter of the pizzas in inches? ";
    cin >> diameter;
    
    area = PI * diameter / 2 * diameter / 2;
    slices = area / 14.125;
    pizzas = people * 4 / slices;
    
    cout << fixed << setprecision(1);
    cout << "Purchase " << pizzas << " pizzas.";
    
    return 0;
}