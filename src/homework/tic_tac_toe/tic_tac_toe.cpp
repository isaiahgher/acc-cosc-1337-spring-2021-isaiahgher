//cpp
#include"tic_tac_toe.h"
#include<iostream>
#include<string>

using std::string;  using std::cout;    using std::cin; using std::vector;

bool TicTacToe::game_over()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    clear_board();

}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}


void TicTacToe::set_next_player()
{
     if(player == "x")
    {
        player = "o";
    }
    else
    {
        player = "x";
    }  
}
std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    out<<"Winner: " << game.get_winner() << "\n";
    for(std::size_t i=0; i<game.pegs.size(); i+= sqrt(game.pegs.size()))
    {
        out<<game.pegs[i] << "|" << game.pegs[i+1] << "|" << game.pegs[i+2];
        if (game.pegs.size() == 16)
        {
            out<<"|"<<game.pegs[i+3];
        }
        out<< "\n";
    }
    out<<"\n";
    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    if(game.pegs.size() == 9)
    {
        int position;
        
        cout << "Choose your position (1-9): ";

        while (!(in >> position))
        {
            cout << "Invalid entry! Please enter a number (1-9): ";
            in.clear();
            in.ignore(123, '\n');
        }

        while (position <= 0 || position > 9)
        {
            cout<<"Invalid entry! Position must be between 1 & 9 \n";
            cout<<"Please enter your position (1-9): ";
            in>>position;
        }

        if(position >= 1 && position <= 9)
        {
	        game.mark_board(position);
        }
    }
    else if(game.pegs.size() == 16)
    {
        int position;
        
        cout<<"Choose your position (1-16): ";

        while (!(in>>position))
        {
            cout<<"Invalid entry! Please enter a number (1-16): ";
            in.clear();
            in.ignore(123, '\n');
        }

        while (position <= 0 || position > 16)
        {
            cout<<"Invalid entry! Position must be between 1 & 16 \n";
            cout<<"Choose your position (1-16): ";
            in>>position;
        }
        if(position >=1 && position <= 16)
        {
	        game.mark_board(position);
        }
    }
    
    

    return in;
}


bool TicTacToe::check_board_full() const
{
for(auto peg: pegs)
{
if(peg == " ")
{
return false;
}
}
return true;

}

void TicTacToe::clear_board()
{
    for(std::size_t i = 0; i < pegs.size(); ++i)
    {
        pegs[i] == " ";
    }
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
    
}

bool TicTacToe::check_column_win()
{
    for (std::size_t i = 0; i<3; i++)
    {
        if (pegs [i] == pegs[i+3] && pegs[i+3] == pegs[i+6] && pegs[i+6] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    for (std::size_t i=0; i<9; i += 3)
    {
        if (pegs[i] ==  pegs[i+1] && pegs[i+1] == pegs[i+2] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if( pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ")
    {
        return true;
    }
    if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ")
    {
        return true;    
    }
    return false;
}