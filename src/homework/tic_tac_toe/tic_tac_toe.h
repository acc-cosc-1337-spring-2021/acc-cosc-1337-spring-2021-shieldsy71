//h
#include<iostream>
#include<string>
#include<vector>
#include <math.h>


#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{

    public:
        
        TicTacToe(unsigned int size) : pegs{size * size, " "}{}
        TicTacToe(std::vector<std::string> p, std::string w): pegs(p), winner(w){}
        //return check_board_full function return value
        bool game_over();
        //Return the player value
        void mark_board(int position);
        //First_player function argument value must be X or O. In function set player(private variable) to first_player function argument. Call the clear_board function.
        void start_game(std::string first_player);
        //void display_board()const;
        void set_winner();
        std::string get_player()const{return player;}
        std::string get_winner()const{return winner;}
        std::vector<std::string> get_pegs()const{return pegs;}
        friend std::ostream& operator<<(std::ostream& out, TicTacToe& game);
        friend std::istream& operator>>(std::istream& in, TicTacToe& game);

    protected:
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
        std::vector<std::string> pegs;
    private:
       //Class member variable
        std::string player;
        //Stores the winner of the game X, O or C.
        std::string winner;
        //No parameters, return false if vector of strings pegs has available slot by checking for a “ “(space)in each element. Otherwise return true
        bool check_board_full();
        //No parameters, Set all 9 elements to a “ “ (space)
        void clear_board();
        //Set player. If private variable player X player is O else player is X.
        void set_next_player();

        
};

#endif