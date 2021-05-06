//cpp
#include "tic_tac_toe_manager.h"
#include<iostream>

TicTacToeManager::TicTacToeManager(TicTacToeData d)
: data{d}
{
    games = data.get_games();
    for(auto& game: games)
    {
        update_winner_count(game -> get_winner());
    }
}

void TicTacToeManager::save_game (std::unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));

}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X")
    {
        x_wins ++;        
    }
    else if (winner == "O")
    {
        o_wins ++;
    }
    else
    {
        ties ++;
    }
    
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    o = x_wins;
    w = o_wins;
    t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    out<< "\nGame history\n";
    for (auto& game: manager.games)
    {
        out << *game;
    }

    out<<"\nX wins: "<<manager.x_wins<<"\n";
    out<<"O wins: "<<manager.o_wins<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";
    
    return out;
}


TicTacToeManager::~TicTacToeManager()
{
    data.save_games(games);
}