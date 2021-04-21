#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::string; using std::vector;


int main() 
{
string choice;
char go;
TicTacToeManager manager;
do
{
	TicTacToe game;
	while(choice != "X" && choice != "O")
	{
		cout<<"Enter X or O: ";
		cin>>choice;
	}
	game.start_game(choice);
		do
		{
			cin>>game;
			cout<<game;
		}
	while (game.game_over() == false);
	cout<<"The winner is "<<game.get_winner()<<"\n";
	manager.save_game(game);

	int o, x, t;
	manager.get_winner_total(o, x, t);

	cout<<manager;

	cout<<"\nWould you like to use the program again? Type the letter 'Y' to continue or 'N' to exit: ";
	cin>>go;
	
	
}
while (go == 'y' || go == 'Y');
return 0;
}

