//tic_tac_toe_manager.h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"
#include <memory>

using std::string; using std::vector; using std::unique_ptr; using std::make_unique;

class TicTacToeManager
{
    //Overload <<-Loop through vector of TicTacToe and call the TicTacToe cout overload. 
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

    
    public:
        
        //add the TicTacToe to games vector with push_back, call update winner count pass the winner 
        //from TicTacToe to update x, o, or tie totals.
        void save_game(unique_ptr<TicTacToe>& game);


        //Use references to get the winners. Don't use cout!!!!!!!!
        void get_winner_total(int& o, int& x, int&t);

        

    private:

        //add the TicTacToe to games vector with push_back, call update winner count pass the winner 
        //from TicTacToe to update x, o, or tie totals.
        std::vector<unique_ptr<TicTacToe>> games;

        //	initialize to 0?
        int x_win = 0;

        //	initialize to 0?
        int o_win = 0;

        //	initialize to 0?
        int ties = 0;

        //if winner X increment x_win, if winner O increment o_win, and else increment ties 
        void update_winner_count(string winner);

};

#endif