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
game.start_game(choice);

	cout<<"Enter X or O: ";
	cin>>choice;
	
do
{
	
	cout<<"Enter a board position 1 - 9: ";
	cin>>position;
	game.display_board();
	game.mark_board(position);
	

}
	while (game.game_over() == false);
	return 0;
}
