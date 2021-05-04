//tic_tac_toe_manager.h

#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<iostream>
#include<string>
#include<vector>
#include <utility>
#include <memory>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H



class TicTacToeManager
{


    
    public:
        TicTacToeManager(TicTacToeData data);
        
        void save_game(std::unique_ptr<TicTacToe>& game);

        void get_winner_total(int& o, int& x, int&t);

        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

        ~TicTacToeManager();

    private:
        std::vector<std::unique_ptr<TicTacToe>> games;
       
        TicTacToeData data;
        
        int x_win = {0};
        int o_win = {0};
        int ties = {0};

        //if winner X increment x_win, if winner O increment o_win, and else increment ties 
        void update_winner_count(std::string winner);

};

#endif