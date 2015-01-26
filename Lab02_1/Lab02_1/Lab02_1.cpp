//Lab02_1

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int heads = 0;
	int tails = 0;
	int choice = 0;
	srand(time(NULL));
	cout << "Press <Enter> to flip 100x" << endl;
	cin.sync();
	for (int i = 0; i < 100; i++)
	{
		choice = rand() % (2);
		if (choice == 1)
		{
			tails++;
		}
		else
		{
			heads++;
		}
	}

	cout << "Heads: " << heads << endl;
	cout << "Tails: " << tails << endl;

	cin.ignore();

	return 0;
}
