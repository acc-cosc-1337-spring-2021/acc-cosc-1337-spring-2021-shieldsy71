//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::string; using std::vector;

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
        set_winner();
        return true;
    }
    else
    {
        return false;
    }
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
//Mark vector w position -1 equal to player. Call set_next_player private function.
void TicTacToe::mark_board(int position)
{
    pegs[position -1] = player;
    set_next_player();
}
//Return the player value
string TicTacToe::get_player()const

{
   return player;
}
//No parameters. Iterate vector of strings pegs to. Display a tic tac toe board in 3x 3 format.
void TicTacToe::display_board()const
{
    cout<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2]<<"|"<<"\n";
    cout<<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5]<<"|"<<"\n";
    cout<<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[8]<<"|"<<"\n";
}
string TicTacToe::get_winner()
{
    return winner;
}
//A column wins with marked values 1,4,7 or 2,5,8, or 3,6,9 with all Os or Xs  (Remember a vector index starts at 0)
bool TicTacToe::check_column_win()
{
    if (pegs[3] == pegs[0] && pegs[6] == pegs[3] && pegs[6] != " ")
    {
        winner = player;
        return true;
    }
    else if (pegs[4] == pegs[1] && pegs[7] == pegs[4] && pegs[4] != " ")
    {
        winner = player;
        return true;
    }
    else if (pegs[5] == pegs[2] && pegs[8] == pegs[5] && pegs[5] != " ")
    {
        winner = player;
        return true;
    }
    else 
    {
        return false;
    }
}
//A row wins with marked values 1,2,3 or 4,5,6 or 7,8,9 with all Os or Xs
bool TicTacToe::check_row_win()
{
    if (pegs[2] == pegs[0] && pegs[1] == pegs[2] && pegs[2] != " ")
    {
        winner = player;
        return true;
    }
    else if (pegs[4] == pegs[3] && pegs[5] == pegs[4] && pegs[4] != " ")
    {
        winner = player;
        return true;
    }
    else if (pegs[7] == pegs[6] && pegs[8] == pegs[7] && pegs[7] != " ")
    {
        winner = player;
        return true;
    }
    else 
    {
        return false;
    }
}
//A diagonal wins with marked values 1,5,9 or 7,5,3 with all Os or Xs
bool TicTacToe::check_diagonal_win()
{
    if (pegs[4] == pegs[0] && pegs[4] == pegs[8] && pegs[4] != " ")
    {
        winner = player;
        return true;
    }
    else if (pegs[4] == pegs[2] && pegs[6] == pegs[4] && pegs[4] != " ")
    {
        winner = player;
        return true;
    }
    else 
    {
        return false;
    }
}
//If player is X set winner to O otherwise set winner to X
void TicTacToe::set_winner()
{
    if(check_board_full() == true)
    {
        winner = "C";
    }
    else if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
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
    vector<string> pegs {9, " "};
}
//Stores the winner of the game X, O or C.
string winner;