#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::string; using std::vector;


int main() 
{

int position;
string choice;
char go;

do
{
	TicTacToe game;
	cout<<"Enter X or O: ";
	cin>>choice;
	if (choice == "X" || choice == "O")
	{
	game.start_game(choice);
		do
		{
			cout<<"Enter a board position 1 - 9: ";
			cin>>position;
			if (position > 0 && position < 10)
			{
				game.mark_board(position);
				game.display_board();
			}
			else
			{
				cout<<"Try again with a valid position. ";
			}
		}
	while (game.game_over() == false);
	cout<<"The winner is "<<game.get_winner();
	cout<<"\nWould you like to use the program again? Type the letter 'Y' to continue or 'N' to exit: ";
	cin>>go;
	}
	else
	{
		cout<<"Enter a valid character. ";
	}
}
while (go == 'y' || go == 'Y');
return 0;
}

