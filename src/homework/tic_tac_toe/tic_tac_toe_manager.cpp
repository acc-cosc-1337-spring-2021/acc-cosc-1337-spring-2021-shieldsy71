//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
#include <memory>
using std::cout; using std::cin; using std::string; using std::vector; using std::unique_ptr; using std::make_unique;


//Overload <<-Loop through vector of TicTacToe and call the TicTacToe cout overload. 
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    
    for(auto& game: manager.games)
    {    
        out<<*game<<"\n";
    }

    out<<"O wins: "<<manager.o_win<<"\n";
    out<<"X wins: "<<manager.x_win<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";
    
    return out;
}

 
//add the TicTacToe to games vector with push_back, call update winner count pass the winner 
//from TicTacToe to update x, o, or tie totals.
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(game);
   
}


//Use references to get the winners. Don't use cout!!!!!!!!
void TicTacToeManager::get_winner_total(int& o, int& x, int&t)
{
    o = o_win;
    x = x_win;
    t = ties;
}


std::vector<unique_ptr<TicTacToe>> games;


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
