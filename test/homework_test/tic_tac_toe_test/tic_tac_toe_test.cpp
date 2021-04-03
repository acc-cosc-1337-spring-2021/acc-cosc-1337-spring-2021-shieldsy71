#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



TEST_CASE("Verify the game_over function 1") 
{
	TicTacToe game;
	
	game = start_game("X");

	TicTacToe::mark_board(1);
	TicTacToe::mark_board(2);
	TicTacToe::mark_board(3);
	TicTacToe::mark_board(4);
	TicTacToe::mark_board(5);
	TicTacToe::mark_board(6);
	TicTacToe::mark_board(7);
	TicTacToe::mark_board(8);
	TicTacToe::mark_board(9);

	REQUIRE(game.game_over() == true);
}
