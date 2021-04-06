#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::string; using std::vector;


int main() 
{
TicTacToe game;
int position;
string choice;


	cout<<"Enter X or O: ";
	cin>>choice;
	game.start_game(choice);
do
{
	
	cout<<"Enter a board position 1 - 9: ";
	cin>>position;
	//game.start_game(choice);
	game.mark_board(position);
	game.display_board();

}
	while (game.game_over() == false);
	return 0;
}
