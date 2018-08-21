#include "../CPP Practice/std_lib_facilities.h"

int main()
{
	cout << "Let's count some change.  Please enter the number of each coin.\n";

	int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarters = 0;

	cout << "How many pennies do you have? ";
	cin >> pennies;

	cout << "How many nickels do you have? ";
	cin >> nickels;

	cout << "How many dimes do you have? ";
	cin >> dimes;

	cout << "How many quarters do you have? ";
	cin >> quarters;

	if (pennies == 1)
		cout << "You have " << pennies << " penny.\n";
	else
		cout << "You have " << pennies << " pennies.\n";

	if (nickels == 1)
		cout << "You have " << nickels << " nickel.\n";
	else 
		cout << "You have " << nickels << " nickels.\n";

	if (dimes == 1)
		cout << "You have " << dimes << " dime.\n";
	else
		cout << "You have " << dimes << " dimes.\n";

	if (quarters == 1)
		cout << "You have " << quarters << " quarter.\n";
	else
		cout << "You have " << quarters << " quarters.\n";
	
	double penny = .01;
	double nickel = .05;
	double dime = .10;
	double quarter = .25;

	double penny_total = penny * pennies;
	double nickel_total = nickel * nickels;
	double dime_total = dime * dimes;
	double quarter_total = quarter * quarters;

	double total = penny_total + nickel_total + dime_total + quarter_total;

	cout << "You have $" << total << "!\n";

	keep_window_open();

}