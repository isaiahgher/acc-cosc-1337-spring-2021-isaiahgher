//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/
#include "savings_account.h"

#include<vector>
using std::vector;

int main() 
{
	const int SIZE=3;
	SavingsAccount savings[SIZE]{SavingsAcount(50), SavingsAccount(100),
								 SavingsAcount(150)};
	cout<<savings[0]<<"\n";
	cout<<savings[1]<<"\n";
	cout<<savings[2]<<"\n\n";

	for(auto saving:savings)
	{
		cout<<savings<<"\n";
	}
	cout<<"\n\n Pointers";
	SavingsAccount* ptr=savings;
	cout<<*ptr<<"\n";
	cout<<ptr->get_balance()<<"\n";
	return 0;
}