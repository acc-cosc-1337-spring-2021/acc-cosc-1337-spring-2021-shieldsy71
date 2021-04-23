#include "tic_tac_toe_3.h"
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::string; using std::vector;




/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
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


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

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

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
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