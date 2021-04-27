#include <iostream>
#include"tic_tac_toe.h"
#include<limits>
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<memory>


using std::cout;
using std::cin;

int main() 
{
	TicTacToeManager manager;
	std::string player;
	std::unique_ptr<TicTacToe> tic_tac_toe;

	char option;
	int game_type;
	do 
	{
		cout<<"Please emter 3 or 4: ";
		cin>>game_type;
		while (!cin.good()|| (game_type < 3 || game_type > 4))
		{
			cin.clear();
			cin.ignore(5, '\n');

			cout<<"Please enter 3 or 4: ";
			cin>>game_type;
		}

		if(game_type ==3)
		{
			tic_tac_toe = std::make_unique<TicTacToe3>();

		}
		else 
		{
			tic_tac_toe = std::make_unique<TicTacToe4>();
		}
		
		
		while(player != "X" && player != "x" && player != "O" && player !="o")
		{
			cout<<"Please choose X or O for your player: ";
			cin>>player;
		}
		tic_tac_toe->start_game(player);

			do 
			{
				cin >> *tic_tac_toe;
				cout << *tic_tac_toe;
			}while (tic_tac_toe->game_over() == false);

			player = "";
			cout<< "Game over!!";
			cout<< "\n The winner is: "<<tic_tac_toe->get_winner()<<"\n";

			manager.save_game(tic_tac_toe);

			int x_wins;
			int o_wins;
			int ties;
			manager.get_winner_total(x_wins, o_wins, ties);

			cout<< "X wins: "<<x_wins<<"\n";
			cout<< "O wins: "<<o_wins<<"\n";
			cout<< "Ties: "<<ties<<"\n";

			cout<<"Enter y or Y to continue: ";
			cin>>option;

		}while (option == 'Y' || option == 'y');

		cout<<manager;
		return 0;
	}