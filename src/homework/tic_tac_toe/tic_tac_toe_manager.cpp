//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::string; using std::vector;


//Overload <<-Loop through vector of TicTacToe and call the TicTacToe cout overload. 
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    
    for(auto g: manager.games)
    {    
        out<<g<<"\n";
    }

    out<<"O wins: "<<manager.o_win<<"\n";
    out<<"X wins: "<<manager.x_win<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";
    
    return out;
}

 
//add the TicTacToe to games vector with push_back, call update winner count pass the winner 
//from TicTacToe to update x, o, or tie totals.
void TicTacToeManager::save_game(TicTacToe& b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}


//Use references to get the winners. Don't use cout!!!!!!!!
void TicTacToeManager::get_winner_total(int& o, int& x, int&t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

//add the TicTacToe to games vector with push_back, call update winner count pass the winner 
//from TicTacToe to update x, o, or tie totals.
std::vector<TicTacToe> games;

TicTacToeManager::TicTacToeManager()
{
    x_win = 0;
    o_win = 0;
    ties = 0;
}

//if winner X increment x_win, if winner O increment o_win, and else increment ties 
void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }

}
