#include <iostream>
#include "game.h"

using namespace std;

Game::Game() {
	square.push_back('O');
	square.push_back('1');
	square.push_back('2');
	square.push_back('3');
	square.push_back('4');
	square.push_back('5');
	square.push_back('6');
	square.push_back('7');
	square.push_back('8');
	square.push_back('9');
	player = 1;
}

void Game::play()
{
	do
	{
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout << "Dude, that's not a valid move. Try again." ;

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();

		player++;
	}while(i == -1);
	board();
	if(i == 1)

		cout <<"==>Congrats, player "<<--player<<" wins!!! ";
	else
		cout <<"==>\a===ITS A DRAW!!!!==="<< endl
		     <<" ===GAME OVER DOO-DOO HEADZ===";

	cin.ignore();
	cin.get();
}

/*

	This function to return game status
	1 means game is over, with result
	-1 means game is in progress
	O means game over, draw


*/

int Game::checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}


//   This function draws the board for TTT and the player marks

void Game::board()
{
	cout << clearScreen;
	cout << "      T I C   T A C   T O E    " << endl << endl;
	
	cout << "          \\|/ ____ \\|/" << endl
		 << "           @~/ ,. \\~@  " << endl
		 << "          /_( \\__/ )_\\ " << endl
		 << "             \\__U_/    " << endl << endl << endl;

	cout << "  Player 1 (X)  -  Player 2 (O)  " << endl << endl;
	cout << endl;

	cout << "             |     |     " << endl;
	cout << "          " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "        _____|_____|_____" << endl;
	cout << "             |     |     " << endl;

	cout << "          " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "        _____|_____|_____" << endl;
	cout << "             |     |     " << endl;

	cout << "          " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "             |     |     " << endl << endl;
}



/*


               \|/ ____ \|/       
                @~/ ,. \~@        
               /_( \__/ )_\       
                  \__U_/     
				
				
				*/