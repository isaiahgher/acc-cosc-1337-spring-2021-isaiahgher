//h
#include"tic_tac_toe.h"

#ifndef Tic_Tac_Toe_4
#define Tic_Tac_Toe_4

class TicTacToe4: public TicTacToe
{
    public:
        TicTacToe4(): TicTacToe(4){}

    private:
        bool check_column_win() override;
        bool check_row_win() override;
        bool check_diagonal_win() override;
};

#endif 