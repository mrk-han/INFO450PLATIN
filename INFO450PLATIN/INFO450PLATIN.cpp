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
		cout << endl;

		//call translate to pig latin function
		translateToPigLatin(input, pigLatin);
	




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

// Print bye message
void coutByeMessage()
{
	cout << endl;
	cout << endl;
	cout << "**" << " ********************* " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << "  Come back soon!      " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << "  We are working on    " << "**" << endl;
	cout << "**" << "  adding functionality " << "**" << endl;
	cout << "**" << "  to translate         " << "**" << endl;
	cout << "**" << "  sentences in the     " << "**" << endl;
	cout << "**" << "  next release!!!      " << "**" << endl;
	cout << "**" << " ********************* " << "**" << endl;
	cout << endl;
	cout << endl;
}

// Print welcome message
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
	cout << "**" << "        a word         " << "**" << endl;
	cout << "**" << "     to be converted   " << "**" << endl;
	cout << "**" << "     into pig latin!   " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << " ********************* " << "**" << endl;
	cout << "Please enter a word..." << endl;
}

// return true if word begins with vowel
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
	if (atoi(input) || input[0] == '\0' || !cin)
	{
		cout << "Error Code: Program returned (-1) There is nothing to translate OR a your input contains a number!" << endl;
		return -1;
	}


	else if (input[2] == '\0') // if third letter is null then it is only 2 letters
	{
		strcpy(pigLatin, input);
		cout << "I did not translate \"" << pigLatin << "\" because it is less than or equal to 2 letters long." << endl;
		return 0;
	}


	//If "And" is found in the input string, AND the string length is 3 letters long then we do not translate.  (needed to add strlen(input)==3 to make it so "AndAnd" would be translated)
	else if ((strstr(input, "And") && strlen(input) == 3) || (strstr(input, "and") && strlen(input) == 3) || (strstr(input, "But") && strlen(input) == 3) ||
		(strstr(input, "but") && strlen(input) == 3) || (strstr(input, "For") && strlen(input) == 3) || (strstr(input, "for") && strlen(input) == 3) ||
		(strstr(input, "Nor") && strlen(input) == 3) || (strstr(input, "nor") && strlen(input) == 3) || (strstr(input, "Yet") && strlen(input) == 3) || (strstr(input, "yet") && strlen(input) == 3))
	{
		strcpy(pigLatin, input);
		cout << "I did not translate \"" << pigLatin << "\" because it is an article or a conjunction." << endl;
		return 0;
	}


	// If first character is a vowel, then only add "ay" to the end of word.
	else if (isVowel(input[0]))
	{
		strcat(pigLatin, input);
		strcat(pigLatin, "ay");
		return 0;
	}

	// After going through those edge cases, we can finally translate the word. 
	else
	{
		int lastLetter = strlen(input) - 1;
		for (int i = 1; i <= lastLetter; i++)
		{
			pigLatin[i - 1] = input[i];
		}
		pigLatin[strlen(input) - 1] = input[0];
		strcat(pigLatin, "ay");
		cout << "Okay, I will translate \"" << input << "\" to pig latin." << endl << endl;
		cout << "Your word translated is: " << pigLatin << endl;
		return 0;
	}


	return 0;
}
