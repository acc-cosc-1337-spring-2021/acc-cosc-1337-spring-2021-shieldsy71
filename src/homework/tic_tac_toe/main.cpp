#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include<iostream>
#include<string>
#include<vector>
#include <memory>
using std::cout; using std::cin; using std::string; using std::vector; using std::unique_ptr; using std::make_unique;


int main() 
{
string choice;
char go;
int grid;
int o, x, t;
unique_ptr<TicTacToeManager> manager;
TicTacToeData data;
unique_ptr<TicTacToe> game;


do
{
	while (grid != 3 && grid != 4)
		{
		cout<<"Welcome to Tic Tac Toe!\n";
		cout<<"Enter 3 to play on a 3x3 grid or a 4 to play on a 4x4 grid: ";
		cin>>grid;
		}

	if (grid == 3)
	{
		game = make_unique<TicTacToe3>();
	}
	else if (grid == 4)
	{
		game = make_unique<TicTacToe4>();
	}
	
	cin>>*game;
	cout<<*game;
		
	
	
	
	manager->save_game(game);
	manager->get_winner_total(o, x, t);
	cout<<manager;

	cout<<"\nWould you like to use the program again? Type the letter 'Y' to continue or 'N' to exit: ";
	cin>>go;
}
while (go == 'y' || go == 'Y');
return 0;
}

