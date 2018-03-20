# INFO450PLATIN

- GIF goes here

## Topics Covered: 
- Arrays
- C-Strings
- functions
- loops
- conditional statements

## Functional Requirements:
- Write a program that will translate English words into Pig Latin
- Rules for translating English to Pig Latin**:
	- If the word starts with a consonant, the first character is removed and added to the end of the word. An “ay” is appended to the end of the word.
	- pig = igpay
	- latin = atinlay
	- job = objay
	- school = choolsay
	- If the word begins with a vowel then the word is simply appended with and “ay”
	- every = everyay
	- out = outay
	- apple = appleay
	- If the word has only two characters, the work remains the same
	- of = of
	- to = to
	- If the word is an article (e.g. the, a, an) OR a conjunction: (and, but, for, nor, so, yet, or), the word remains the same
	- Any word that starts with a number should not be translated and user provided with an error message.
	- The user should be allowed to continue to enter words for translation until they opt to quit the program
	- For each word provided, the translated Pig Latin is displayed to the console
### Extra credit:
- Allow the user to enter a sentence and translate the entire sentence to pig Latin using the above rules

### Note: 
- Rules represent a variation to the standard Pig Latin translation

## Non Functinal Requirements:
- The translator program will only translate words that are 50 characters or less and the user’s input is guaranteed to be 50 characters or less.
- The program should use C-string to store and process the word.
- The program should include a function: translateToPigLatin that performs the following:
- Translates the word that is passed as a parameter to the function into Pig Latin.
- Displays the translated word to the console
- Returns 0 if successful and -1 if not successful
- Example – empty string! – nothing to translate OR a word that begins w/ a number – cannot be translated
- The main program should include a loop that will continue to ask for input and translate words until the user chooses to quit.

### Extra credit :
- The size of the sentence can be up to 500 characters and is guaranteed to be <= 500 characters in total.
- The each word in the translated sentence should be translated following the basic rules defined. Punctuation should be ignored.
- If a “bad” word is entered the function should exit w/ an error and return -1
- A sentence consists of words separated by spaces


### Hint: 
- We learned about strcmp, strcpy, strcat and strlen C-string functions in class but there are many others that can be helpful here.
	- There are many resources with examples on line (e.g. : http://zorro-project.com/manual/en/str_.htm). Google it!




## Submission Requirements:
- You should upload your program to your github account in a repository called: INFO450PLATIN
- Turn in your project on blackboard by uploading the URL to your github repository
- Note: coding standards adherence will now be part of the overall grade for the project

## Coding Standards:

### Naming:
- Variable names should be short, yet meaningful. e.g. int width; (instead of int w;)
- All variable, function and method names should be as descriptive as possible and follow lower camelCase. e.g. calculateArea
- All classes should start with a capital letter, then follow camelCase for the remaining. e.g. class BankAccount
- Constant variables and enumerated types should be in all Caps. (e.g. const float MINWAGE=11.50; )
- Global variables are discouraged (but may be used for declaring const varibles if needed)

### Formatting:
- Lines should not exceed 78 characters
- One statement per line
- Curly braces for code blocks should align on the left with the body of block indented


### Comments:
- Consider your comments a story describing the system.
- Comments should weave together and inform someone else at another point of time just exactly what you did and why.
