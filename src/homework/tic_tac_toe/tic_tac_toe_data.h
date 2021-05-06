//h//h
#include<fstream>
#include<memory>
#include "tic_tac_toe.h"
#ifndef TicTacToe_Data_H
#define TicTacToe_Data_H


class TicTacToeData
{
public:
    void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
    std::vector<std::unique_ptr<TicTacToe>> get_games();

private:
    std::string const file_name{"tictactoe_data.dat"};
};

#endif