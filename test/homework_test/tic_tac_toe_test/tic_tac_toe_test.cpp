#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"



TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Tests TicTacToe class functions")
{
	unique_ptr<TicTacToe> game = make_unique<tiktaktoeGame3>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(5);
	game->mark_board(6);
	game->mark_board(7);
	game->mark_board(9);
	game->mark_board(8);

	REQUIRE(game->game_over() == true);
}

//Test first player set to x
TEST_CASE("Test first player set to x","should return x == x")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("x");
	REQUIRE(game->get_player() == "x");
}

//Test first player set to o
TEST_CASE("Test first player set to o","should return o == o")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("o");
	REQUIRE(game->get_player() == "o");
}

TEST_CASE("Test first column with X wins")
{
	TicTacToe game;
	game->start_game("X");
	REQUIRE (game.game_over() == false);
	game->mark_board(1); //X
	REQUIRE (game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE (game.game_over() == false);
	game.mark_board(4); //X
	REQUIRE (game.game_over() == false);
	game.mark_board(6); //O
	REQUIRE (game.game_over() == false);
	game.mark_board(7); //X wins
	REQUIRE (game.game_over() == "X");

}

TEST_CASE ("Test X wins by second column")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins by third column")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins by first row")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins by second row")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins by third row")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins diagonal 1 5 9")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins by diagonal 3 5 7")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //X wins 
	REQUIRE(game.game_over() == true);
}
TEST_CASE("test get winner class function")
{
    TicTacToeManager manager;
    TicTacToe game;

    // Tie
    game.start_game("X");
    game.mark_board(1);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(2);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(3);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(4);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(6);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(9);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(8);//x
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "C");
    manager.save_game(game);

    //X Wins Third Row
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(4);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(8);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(9);//x
    //x wins
    REQUIRE(game.game_over() == "X");
    manager.save_game(game);

    // O Wins Third row
    game.start_game("O");
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(4);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(8);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(9);//o
    //O wins
    REQUIRE(game.game_over() == "O");
    manager.save_game(game);

    int x, o, t;
    manager.get_winner_total(o,x,t);
    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 1);
}

TEST_CASE("Test Game Over if 16 slots are selected 4x4.")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == false);

	game->mark_board(14);
	REQUIRE(game->game_over() == false);

	game->mark_board(13);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test first player set to x in 4x4","should return x == x")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("x");
	REQUIRE(game->get_player() == "x");
}

TEST_CASE("Test first player set to o in 4x4","should return o == o")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


	game->start_game("o");
	REQUIRE(game->get_player() == "o");
}

TEST_CASE("Test check_colum_win first colum in 4x4 for first player x", "should return game_over() == true")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("Test check_colum_win second colum in 4x4 for first player x", "should return game_over() == true")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


	game->start_game("x");
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("Test check_colum_win third colum in 4x4 for first player x", "should return game_over() == true")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


	game->start_game("o");
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "o");
}

TEST_CASE("Test check_row_win with fourth column in 4x4 for first player o", "should return game_over() == true")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("x");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}


TEST_CASE("Test check_row_win first row with in 4x4 for first player x", "should return game_over() == true")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("Test check_row_win second row with in 4x4 for first player o", "should return game_over() == true")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("o");
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "o");
}

TEST_CASE("Test check_row_win third row in 4x4 for first player x", "should return game_over() == true")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("x");
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("Test check_row_win fourth row in 4x4 for first player x", "should return game_over() == true")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


	game->start_game("x");
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("Test check_diagonal_win top left in 4x4 for first player x", "should return game_over() == true")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("Test check_diagonal_win bottom left in 4x4 for first player o", "should return game_over() == true")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


	game->start_game("o");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "o");
}

TEST_CASE("Test the get_winner class function in 4x4")
{
	int o = 0;
	int x = 0;
	int ties = 0;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


	//x wins
	game1->start_game("x");
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(11);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(16);
	REQUIRE(game1->game_over() == true);
	REQUIRE(game1->get_winner() == "x");
	manager.save_game(game1);
	manager.get_winner_total(o, x, ties);

	//o wins
	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe4>();
	game2->start_game("o");
	game2->mark_board(4);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(1);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(7);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(2);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(10);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(3);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(13);
	REQUIRE(game2->game_over() == true);
	REQUIRE(game2->get_winner() == "o");
	manager.save_game(game2);
	manager.get_winner_total(o, x, ties);

	//tie
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game3->mark_board(1);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(2);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(3);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(4);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(5);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(6);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(7);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(8);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(9);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(10);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(11);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(12);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(14);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(15);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(16);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(13);
	REQUIRE(game3->game_over() == true);
	REQUIRE(game3->get_winner() == "C");
	manager.save_game(game3);

	manager.get_winner_total(o, x, ties);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(ties == 1);
}

