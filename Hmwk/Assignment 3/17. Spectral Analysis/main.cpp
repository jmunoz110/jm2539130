// Jonathan Munoz
// 01/20/16
// 17. Spectral Analysis

// preliminary stuff
#include <iostream>
using namespace std;

// the program will display what kind of radiation a electromagnetic wave is
// once the wavelength has been entered
int main()
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
        
	return 0;
}