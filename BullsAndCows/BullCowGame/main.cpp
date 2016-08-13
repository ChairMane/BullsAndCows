#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string getGuess();

int main() {

	PrintIntro();

	int Turns = 1;

	//While the amount of turns is less than 6, keep the guesses coming.
	while (Turns < 6) {

		//If this is your first guess, output this
		if (Turns == 1) {

			cout << "Your guess was: " << getGuess() << endl << endl;
		}
		//If this is your second, third or fourth guess, output this
		else if(Turns >= 2 && Turns < 5) {

			cout << "Your next guess is: " << getGuess() << endl << endl;
		}
		//If this is your final guess, output this
		else if(Turns == 5){

			cout << "Your final guess is: " << getGuess() << endl << endl;
		}

		//Keep incrementing the guesses, so we know when to end it
		Turns++;
		
	}


	return 0;
}

/********************************************************
*
*		This function just outputs the intro to the game
*
*********************************************************/
void PrintIntro() {

	//Length of word that will be used
	constexpr int WORD_LENGTH = 5;

	//Introduction to the game
	cout << "Welcome to Bulls and Cows! Bulls and Cows is a fun word game!\n" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram that I am thinking of?\n\n";

	return;
}

/********************************************************
*
*		This function retrieves the players guess
*
*********************************************************/
string getGuess() {

	//Variable for the players guess
	string Guess;

	//Asking the player for their guess
	cout << "What is your guess for the word: ";
	getline(cin, Guess);

	return Guess;
}