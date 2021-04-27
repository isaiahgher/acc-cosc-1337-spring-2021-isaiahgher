//h
#include<string>
#include <vector>
#include<iostream>
#include<math.h>


using std::string;  using std::vector;

//class for tic tac toe game
class TicTacToe
{
    public:
        TicTacToe(unsigned int s):pegs{s*s, " "}{}
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        void display_board() const;
        string get_player() const{return player;}
        string get_winner() const{return winner;}; // Homework 7
        friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
        friend std::ostream& operator>>(std::istream& in, TicTacToe& game);

    protected:
        std::vector<std::string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();

    private:
        void set_next_player();
        bool check_board_full()const;
        void clear_board();
        void set_winner();

        string player;
        string winner;

};