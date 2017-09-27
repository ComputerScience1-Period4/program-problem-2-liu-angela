/* Heading
Angela Liu - 9/27  Period 4
Assignment Name : Take in Data
Display Data, Accept User Response, Display Changed Data
*/

// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int grade; // What is your grade level?
			 // void doesn't store value
	char middle_initial; // middle initial 
	double battery_percentage; // How much battery is left in your phone?
	double myBattery = 60; // 60% battery left 
	bool you_have_battery; 

	// User Queries 
	cout << "What is your grade level : ";
	cin >> grade;
	cout << "What is the first letter of your middle name : ";
	cin >> middle_initial;
	cout << "How much battery do you have in your phone?";
	cin >> battery_percentage;
	you_have_battery = myBattery > battery_percentage; // checks to see if you have a higher percentage

											   // After questions print out stored data 
	cout << "Wow you're in " << grade << " level I thought you were older" << endl; // ENDL
	cout << "Your first letter was " << middle_initial << " mine is weirder. \n"; // \n creates new line
	cout << "Woah you're at" << battery_percentage << " percent? " << '\n'; // \n creates a new line
	if (you_have_battery) {
		cout << "What series is your phone : ";
	}



	// Pause
	pause();
}