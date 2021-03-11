#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	//create a bool variable named even
	bool even;
	//create an int variable named value
	int value;
	//prompt user for a keyboard number
	cout<<"enter a number to see if its even: ";
	//assign the number to the value variable
	cin>> value;
	//call the is_even function with value as its argument
	even = is_even(even);
	//and assign its return value to the even variable
	if (even)
	{
		cout<<" is even"
	}

	//display even if number is even


	return 0;
}