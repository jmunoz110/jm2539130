// Jonathan Munoz
// 22. Word Games
// 01/13/16
#include <iostream>
using namespace std;

int main()
{
    string name, age, city, college, job, animal, pet;
    
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    getline(cin, age);
    cout << "Enter the name of a city. ";
    getline(cin, city);
    cout << "Enter the name a college. ";
    getline(cin, college);
    cout << "Enter a profession: ";
    getline(cin, job);
    cout << "Enter a type of animal: ";
    getline(cin, animal);
    cout << "Enter a pet's name: ";
    getline(cin, pet);
    
    cout << "\nThere once was a person named " << name;
    cout << " who lived in " << city;
    cout << ". At the age of\n" << age;
    cout << ", " << name;
    cout << " went to college at " << college;
    cout << ". " << name;
    cout << " graduated and went to work\nas a " << job;
    cout << ". Then, " << name;
    cout << " adopted a(n) " << animal;
    cout << " named " << pet;
    cout << ". They\nboth lived happily ever after!\n";
            
    return 0;
}