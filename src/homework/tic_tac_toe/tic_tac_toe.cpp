//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::string; using std::vector;





std::ostream& operator<<(std::ostream& out, TicTacToe& game)
{
    
    if (game.pegs.size() == 9)
    {
        for(std::size_t i = 1; i <= game.pegs.size(); i++)
        {    
            out<<game.pegs[i];
            if (i == 0 || i == 1 || i == 3 || i == 4 || i == 6 || i == 7)
            {
                out<<"|";
            }
            if(i == 2 || i == 5 || i == 8)
            {
                out<<"\n";
            }
        }
        return out;
    }
    
    else if (game.pegs.size() == 16)
    {
        for(std::size_t i = 1; i <= game.pegs.size(); i++)
        {    
            out<<game.pegs[i];
            if (i == 0 || i == 1 || i == 2 || i == 4 || i == 5 || i == 6 || i == 8 || i == 9 || i == 10 || i == 12 || i == 13 || i == 14)
            {
                out<<"|";
            }
            if(i == 3 || i == 7 || i == 11)
            {
                out<<"\n";
            }
        }
    }

    return out;
}
std::istream& operator>>(std::istream& in, TicTacToe& game)
{
   
   int position;
   string choice;
   while(choice != "X" && choice != "O")
	{
		cout<<"Enter X or O: ";
		cin>>choice;
	}

	game.start_game(choice);



    while (game.game_over() == false)
    {
        std::cout<<"Enter a board position 1 - 9: ";
        in>>position;
    if (position > 0 && position < 10)
    {
        game.mark_board(position);
    }
    else
	{
		cout<<"Try again with a valid position. ";
	}
    }
    return in;
}


 //return check_board_full function return value
bool TicTacToe::game_over()
{
    if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

//Return the player value
string TicTacToe::get_player()const

{
   return player;
}

string TicTacToe::get_winner()const
{
    return winner;
}
//Mark vector w position -1 equal to player. Call set_next_player private function.
void TicTacToe::mark_board(int position)
{
    pegs[position -1] = player;
    set_next_player();
}
//First_player function argument value must be X or O. In function set player(private variable) to first_player function argument. Call the clear_board function.
void TicTacToe::start_game(string first_player)
{
    if (first_player == "X" || first_player == "O")
    {
    player = first_player;
    }
    clear_board();
}
//If player is X set winner to O otherwise set winner to X
void TicTacToe::set_winner()
{
    
    if(player == "X")
    {
        winner = "O";
    }
    else 
    {
        winner = "X";
    }
   
}

//A column wins with marked values 1,4,7 or 2,5,8, or 3,6,9 with all Os or Xs  (Remember a vector index starts at 0)
bool TicTacToe::check_column_win()
{
      return false;
}
//A row wins with marked values 1,2,3 or 4,5,6 or 7,8,9 with all Os or Xs
bool TicTacToe::check_row_win()
{
     return false;
}
//A diagonal wins with marked values 1,5,9 or 7,5,3 with all Os or Xs
bool TicTacToe::check_diagonal_win()
{
   return false;
}


//Class member variable
string player;
//Stores the winner of the game X, O or C.
string winner;

//No parameters, return false if vector of strings pegs has available slot by checking for a “ “(space)in each element. Otherwise return true
bool TicTacToe::check_board_full()
{
    bool boardFull = true;
    for (auto i = 0; i<9; i++)
    {
        if(pegs[i]== " ")
        {
            boardFull = false;
            break;
        }
    }
    return boardFull;
}
//No parameters, Set all 9 elements to a “ “ (space)
void TicTacToe::clear_board()
{
    for(auto& pegs: pegs)
    {
        pegs = " ";
    }
}

//Set player. If private variable player X player is O else player is X.
void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
        
    }
    else
    {
        player = "X";
    } 
}