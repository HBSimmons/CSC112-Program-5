#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "termmanip.h"

class Game {
public:
	Game();
	virtual void play();
	virtual int checkwin();
	virtual void board();

private:
	int player;
	char mark;
	int i;
	int choice;
	std::vector<char> square;
};

#endif