//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<iostream>
#include<string>
#include<vector>
#include <memory>

using std::string; using std::vector; using std::unique_ptr; using std::make_unique;

class TicTacToe
{
friend std::ostream& operator<<(std::ostream& out, std::unique_ptr<TicTacToe>& game);
friend std::istream& operator>>(std::istream& in, std::unique_ptr<TicTacToe>& game);

    public:
        
        TicTacToe(int size) : pegs(size * size, " "){};

        //return check_board_full function return value
        bool game_over();

        //Return the player value
        string get_player()const;

        //No parameters. Iterate vector of strings pegs to. Display a tic tac toe board in 3x 3 format. void display_board()const;
        string get_winner()const;

        //Mark vector w position -1 equal to player. Call set_next_player private function.
        void mark_board(int position);

        //First_player function argument value must be X or O. In function set player(private variable) to first_player function argument. Call the clear_board function.
        void start_game(string first_player);

        void set_winner();


    protected:

        std::vector<std::string> pegs;

        virtual bool check_column_win();

        virtual bool check_row_win();

        virtual bool check_diagonal_win();

    private:

       //Class member variable
        string player;

        //Stores the winner of the game X, O or C.
        string winner;
     

        //No parameters, return false if vector of strings pegs has available slot by checking for a “ “(space)in each element. Otherwise return true
        bool check_board_full();

        //No parameters, Set all 9 elements to a “ “ (space)
        void clear_board();
        

        //Set player. If private variable player X player is O else player is X.
        void set_next_player();

        
};

#endif