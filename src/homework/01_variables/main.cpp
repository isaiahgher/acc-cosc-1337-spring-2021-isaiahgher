//write include statements
#include "variables.h"
#include<iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tax_amount;
	double tip_rate;
	double tip_amount;
	double total;

	cout<<"Enter the full meal amount: ";
	cin>>meal_amount;
	
	tax_amount=get_sales_tax(meal_amount);
	
	cout<<"Enter the tip amount in decimal form: ";
	cin>>tip_rate;

	tip_amount=get_tip_amount(meal_amount, tip_rate);

	total=meal_amount+tax_amount+tip_amount;

	cout<<"Meal amount:\t%"<<meal_amount<<"\n";
	cout<<"Tax amount:\t%"<<tax_amount<<"\n";
	cout<<"Tip amount:\t%"<<tip_amount<<"\n";
	cout<<"\n";
	cout<<"Total:\t$"<<total<<"\n";
	

	return 0;
}
