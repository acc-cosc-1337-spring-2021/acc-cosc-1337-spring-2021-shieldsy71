//h
#ifndef TIC_TAC_TOE_4H
#define TIC_TAC_TOE_4H
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>

class TicTacToe4 : public TicTacToe

{

public:

    //TicTacToe4(){};
    TicTacToe4(): TicTacToe(4){};
    TicTacToe4(std::vector<std::string> p, std::string w): pegs(p), winner(w)){}

private: 

    bool check_column_win(); 

    bool check_row_win();

    bool check_diagonal_win();

};



#endif