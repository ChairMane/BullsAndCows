#pragma once

#include <string>

class FBullCowGame {
public:
	void Reset();
	void SetMaxTries(int);
	void SetIsogram(int);
	void SetGuessLength(int);
	int GetMaxTries() const;
	int GetCurrentTry() const;
	int GetIsogram() const;
	bool IsGuessValid(std::string);
	bool IsGameOver() const;


private:
	int MyCurrentTries;
	int MyMaxTries;
	bool IsIsogram;
	bool GameOver;
};