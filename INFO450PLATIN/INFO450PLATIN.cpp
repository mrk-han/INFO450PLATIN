// INFO450PLATIN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	void coutByeMessage();
	void coutWelcomeMessage();
	char answer; // do-while loop answer
	do
	{
		coutWelcomeMessage();



		cout << "Would you like to translate another word? Enter 'Y' or 'y'" << endl;
		cin >> answer;


		if (answer != 'y' && answer != 'Y')
		{
			coutByeMessage();
		}


	} while (answer == 'Y' || answer == 'y'); // Execute code above if user enter Y or y
    return 0;
}

void coutByeMessage()
{
	cout << endl;
	cout << endl;
	cout << "**" << " ********************* " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << "   Come back soon!     " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << " ********************* " << "**" << endl;
	cout << endl;
	cout << endl;
}

void coutWelcomeMessage()
{
	cout << endl;
	cout << endl;
	cout << "**" << " ********************* " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << "     Welcome to the    " << "**" << endl;
	cout << "**" << "     best pig latin    " << "**" << endl;
	cout << "**" << "     translator on     " << "**" << endl;
	cout << "**" << "     the planet!!!     " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << "     Please enter      " << "**" << endl;
	cout << "**" << "     a word or phrase  " << "**" << endl;
	cout << "**" << "     to be converted   " << "**" << endl;
	cout << "**" << "     into pig latin!   " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << " ********************* " << "**" << endl;
}

