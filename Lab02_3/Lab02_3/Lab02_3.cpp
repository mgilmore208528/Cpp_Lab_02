//Lab02_3.cpp

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int dice = 0;
	int sides = 0;
	int mod = 0;
	int roll = 0;
	int total = 0;
	srand(time(NULL));

	cout << "********************************************************" << endl;
	cout << "*    Welcome to                                        *" << endl;
	cout << "*        Die -Roller!                                  *" << endl;
	cout << "*                                                      *" << endl;
	cout << "* Instructions:                                        *" << endl;
	cout << "* To roll, type the number of dice, then the number    *" << endl;
	cout << "* of sides then any modifiers, all seperated by        *" << endl;
	cout << "* spaces.                                              *" << endl;
	cout << "*                                                      *" << endl;
	cout << "* like this: 3 6 -1                                    *" << endl;
	cout << "* that would mean:                                     *" << endl;
	cout << "* Roll 3 6-sided dice, and subtract 1 from each die    *" << endl;
	cout << "*                                                      *" << endl;
	cout << "* To exit, enter: 1 1 1                                *" << endl;
	cout << "* ENJOY!                                               *" << endl;
	cout << "********************************************************" << endl;

	cout << "Please enter the number of dice, how many sides, and a modifier\nseperated by spaces ";
	cin >> dice >> sides >> mod;
	while (dice != 1 || sides != 1 || mod != 1)
	{
		cout << endl;
		total = 0;
		for (int i = dice; i > 0; i--)
		{
			roll = (1 + rand() % sides);
			cout << roll << " + " << mod << " = " << (roll + mod) << endl;
			total += (roll + mod);
		}
		cout << endl;
		cout << "Roll total: " << total << endl;
		cout << "Please enter the number of dice, how many sides, and a modifier for a new roll\n seperated by spaces (enter all 1's to exit) ";
		cin >> dice >> sides >> mod;
	}
	cout << endl << "Press <Enter> to  exit";
	cin.ignore();
	cin.ignore();
	return 0;
}

