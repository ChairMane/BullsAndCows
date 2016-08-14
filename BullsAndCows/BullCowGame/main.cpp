#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
std::string getGuess();
bool isPlaying();

FBullCowGame BCGame;


int main() {

	PlayGame();


	return 0;
}

/********************************************************
*
*		This function has the player enter guesses
*
*********************************************************/
void PlayGame(){

	int Turns = 1;

	PrintIntro();

	//While the amount of turns is less than 6, keep the guesses coming.
	do {
			std::cout << "Your guess was: " << getGuess() << std::endl << std::endl;
			isPlaying();
	}while(true);

	
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
	std::cout << "Welcome to Bulls and Cows! Bulls and Cows is a fun word game!\n" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram that I am thinking of?\n\n";

	return;
}

/********************************************************
*
*		This function retrieves the players guess
*
*********************************************************/
std::string getGuess() {

	//Variable for the players guess
	std::string Guess;

	//Asking the player for their guess
	std::cout << "What is your guess for the word: ";
	std::getline(std::cin, Guess);

	return Guess;
}

bool isPlaying(){

	std::string response;

	std::cout << "\nDo you want to continue playing?" << std::endl;
	
	std::getline(std::cin, response);

	if (response[0] == 'y' || response[0] == 'Y') {
		std::cout << "\nContinue playing.\n";
		std::cout << std::endl << std::endl;
		PlayGame();
		return true;
	}
	else if (response[0] == 'n' || response[0] == 'N') {
		std::cout << "\nDone playing!\n";
		std::cout << std::endl << std::endl;
		return false;
	}
	
}
