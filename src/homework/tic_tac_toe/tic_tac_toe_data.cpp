//cpp
#include "tic_tac_toe_data.h"
#include <fstream>
#include <memory>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::string;
using std::vector;
using std::unique_ptr;
using std::make_unique;


void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    std::ofstream file_out;
    file_out.open(file_name);
    if(file_out.is_open())
    {
        for(auto &game_vec: games)
        {
            for(auto &ch: game_vec->get_pegs())
            {
                file_out << ch;
            }

        file_out<<game_vec->get_winner()<<std::endl;
        }
    }

    file_out.close();
}
std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> games;
    std::ifstream read_file;
    read_file.open(file_name);

    string line;
    while(std::getline(read_file, line))
    {
        vector<string> pegs;
        for(auto &ch : line)
        {
            std::string str1(1,ch);
            pegs.push_back(str1);
        }

        string winner = pegs.back();
        pegs.resize(pegs.size()-1);
        unique_ptr<TicTacToe> game;

        if(pegs.size() == 9)
        {
            game = make_unique<TicTacToe3>(pegs, winner);
        }
        else if(pegs.size() == 16)
        {
            game = make_unique<TicTacToe4>(pegs, winner);
        }

        games.push_back(std::move(game));
        pegs.resize(0);
    }

    read_file.close();   
    return games;
}