//h
#include"tic_tac_toe.h"
#include"tic_tac_toe_data.h"
#include<string>
#include<vector>
#include<iostream>
#include<memory>
#include<utility>

#ifndef Tic_Tac_Toe_Manager_H
#define Tic_Tac_Toe_Manrger_H

class TicTacToeManager
{
    public:
        TicTacToeManager(TicTacToeData data);
        TicTacToeManager() = default;
        void save_game(std::unique_ptr<TicTacToe>& game);
        void get_winner_total(int& o, int& w, int& t);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
        
    private:
        TicTacToeData data;
        std::vector<std::unique_ptr<TicTacToe>> games;
        int x_wins{0};
        int o_wins{0};
        int ties{0};
        void update_winner_count (std::string winner);
    
};

#endif