//h
#ifndef TIC_TAC_TOE_3H
#define TIC_TAC_TOE_3H
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>

class TicTacToe3 : public TicTacToe
{

public:

    //TicTacToe3(){};
    TicTacToe3(): TicTacToe(3){};


private: 

    bool check_column_win(); 

    bool check_row_win();

    bool check_diagonal_win();

};



#endif