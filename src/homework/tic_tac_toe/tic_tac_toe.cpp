//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::string; using std::vector;

 //return check_board_full function return value
bool TicTacToe::game_over()
{
    return check_board_full();
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