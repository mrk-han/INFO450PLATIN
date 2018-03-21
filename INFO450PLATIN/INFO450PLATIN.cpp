// INFO450PLATIN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

//variables
const int MAX_CHAR_INPUT = 500;

// methods
void coutByeMessage();
void coutWelcomeMessage();
int translateToPigLatin(char input[MAX_CHAR_INPUT], char pigLatin[MAX_CHAR_INPUT]);
bool isVowel(char ch);


int main()
{






	char answer; // do-while loop answer

	do
	{
		char input[MAX_CHAR_INPUT] = ""; // what user enters to be translated
		char pigLatin[MAX_CHAR_INPUT] = ""; // final translation

		coutWelcomeMessage();
		cin.getline(input, MAX_CHAR_INPUT);
		cout << endl;

		cout << "Okay, I will translate \"" << input << "\" to pig latin." << endl;
		cout << endl;

		//call translate to pig latin function
		translateToPigLatin(input, pigLatin);

		cout << pigLatin << endl;













		cout << endl;
		cout << endl;
		cout << "Would you like to translate another word? Enter 'Y' or 'y'" << endl;
		cin >> answer;


		if (answer != 'y' && answer != 'Y')
		{
			coutByeMessage();
		}

		cin.ignore(MAX_CHAR_INPUT, '\n');
		cin.clear();



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


bool isVowel(char ch)
{
	switch (ch)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return true;
	default:
		return false;
	}
}


	int translateToPigLatin(char input[MAX_CHAR_INPUT], char pigLatin[MAX_CHAR_INPUT])
{
	// return -1 if first character is null or a number because that is invalid
	if (input[0] == '0' || input[0] == '1' || input[0] == '2' || input[0] == '3' || input[0] == '4' || input[0] == '5' || input[0] == '6' || input[0] == '7' || input[0] == '8' || input[0] == '9' || input[0] == '\0')
	{
		return -1;
	} else if (input[2] == '\0') // if third letter is null then it is only 2 letters
	{
		strcpy(pigLatin, input);
	} else if (input == "and" || input == "And" || input == "But" || input == "but" || input == "For" || input == "for" || input == "Nor" || input == "nor" || input == "Yet" || input == "yet")
	{
		cout << "found an operator" << endl; // For debugging because I'm pretty sure this isn't working.
		strcpy(pigLatin, input);
	} else if (isVowel(input[0]))
	{
		strcat(pigLatin, input);
		strcat(pigLatin, "ay");
	} else

	{
		int lastLetter = strlen(pigLatin) - 2;
		for (int i = 1; i <= lastLetter; i++)
		{
			pigLatin[i - 1] = input[i];
		}
		pigLatin[strlen(input) - 1] = input[0];
		strcat(input, "ay");

	}
	return 0;
}
