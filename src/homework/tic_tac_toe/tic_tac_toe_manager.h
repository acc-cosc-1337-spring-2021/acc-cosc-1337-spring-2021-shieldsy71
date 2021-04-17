//tic_tac_toe_manager.h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"

using std::string; using std::vector;

class TicTacToeManager
{
    //Overload <<-Loop through vector of TicTacToe and call the TicTacToe cout overload. 
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

    
    public:
        
        //add the TicTacToe to games vector with push_back, call update winner count pass the winner 
        //from TicTacToe to update x, o, or tie totals.
        void save_game(TicTacToe& b);


        //Use references to get the winners. Don't use cout!!!!!!!!
        void get_winner_total(int& o, int& x, int&t);

        

    private:

        //add the TicTacToe to games vector with push_back, call update winner count pass the winner 
        //from TicTacToe to update x, o, or tie totals.
        std::vector<TicTacToe> games;

        //	initialize to 0
        int x_win;

        //	initialize to 0
        int o_win;

        //	initialize to 0
        int ties;

        //if winner X increment x_win, if winner O increment o_win, and else increment ties 
        void update_winner_count(string winner);

};

#endif