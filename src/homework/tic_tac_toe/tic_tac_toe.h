//h
#include<iostream>
#include<string>
#include<vector>

using std::string; using std::vector;

class TicTacToe
{
    public:
        //return check_board_full function return value
        bool game_over();


        //First_player function argument value must be X or O. In function set player(private variable) to first_player function argument. Call the clear_board function.
        void start_game(string first_player);


        //Mark vector w position -1 equal to player. Call set_next_player private function.
        void mark_board(int position);


        //Return the player value
        string get_player()const;


        //No parameters. Iterate vector of strings pegs to. Display a tic tac toe board in 3x 3 format.
        void display_board()const;

    private:
        //Set player. If private variable player X player is O else player is X.
        void set_next_player();


        //No parameters, return false if vector of strings pegs has available slot by checking for a “ “(space)in each element. Otherwise return true
        bool check_board_full();

        //No parameters, Set all 9 elements to a “ “ (space)
        void clear_board();

        //Class member variable
        string player;


        //Class member variable 1) (initialize to 9 “ “(spaces)
        vector<string> pegs{9, " "};


};

