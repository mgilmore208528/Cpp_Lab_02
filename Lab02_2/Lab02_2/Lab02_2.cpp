//Lab02_2
// Guess My Number
// The computer picks a random number between 1 and 100
// The player tries to guess it and the computer lets
// the player know if the guess is too high, too low
// or right on the money

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int guess = 0;
	int the_number = 0;
	int tries = 1;

	srand(time(NULL));

	cout << "\tWelcome to 'Guess My Number'!" << endl;
	cout << "\nI'm thinking of a number between 1 and 100." << endl;
	cout << "Try to guess it in as few attempts as possible.\n" << endl;

	// set the initial values
	the_number = 1 + (rand() % 100);
	cout << "Take a guess: ";
	cin >> guess;
	cout << endl;
	// guessing loop
	while (guess != the_number)
	{
		if (guess > the_number)
		{
			cout << "Lower..." << endl;
		}
		else
		{
			cout << "Higher..." << endl;
		}
		cout << "Take a guess: ";
		cin >> guess;
		cout << endl;
		tries++;
	}
	cout << "You guessed it!  The number was " << the_number << endl;
	cout << "And it only took you " << tries << " tries!\n" << endl;

	cout << "\n\nPress the enter key to exit.";
	cin.ignore();
	cin.ignore();

	return 0;
}

