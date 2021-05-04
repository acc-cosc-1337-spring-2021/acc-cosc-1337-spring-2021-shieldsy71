//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
#include <memory>
using std::cout; using std::cin; using std::string; using std::vector; using std::unique_ptr; using std::make_unique;

TicTacToeManager::TicTacToeManager(TicTacToeData d)
: data{d}
{
    games = data.get_games();
    for (auto& game: games)
    {
        update_winner_count(game->get_winner());
    }
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
   
}

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

void TicTacToeManager::get_winner_total(int& o, int& x, int&t)
{
    o = o_win;
    x = x_win;
    t = ties;
}
//Overload <<-Loop through vector of TicTacToe and call the TicTacToe cout overload. 
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    out<<"\nGame History\n";
    for(auto& game: manager.games)
    {    
        out<<*game<<"\n";
    }
    
    out<<"O wins: "<<manager.o_win<<"\n";
    out<<"X wins: "<<manager.x_win<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";
    
    return out;
}

TicTacToeManager::~TicTacToeManager()
{
    std::cout<<"\n save games\n";
    data.save_games(games);
}







