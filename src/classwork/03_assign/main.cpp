//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin
#include <iostream>


int main() 
{
	bool even;
	int value;

	std::cout<<"Enter a number; ";
	std::cin>>value;

	even = is_even(value);

	if (even == true)
	{
		std::cout<<value<<" is even\n";
	}
	else
	{
		std::cout<<value<<" is odd\n";
	}

	// Homework 3 section
	  
	//Variables
	int case_change; 
	int input_number;
	
	std::cout<<"Type '1' for If statement or '2' for Switch statement: ";
	std::cin>>case_change;
	
	
	
	//If not 1 or 2
	while(case_change != 1 && case_change != 2)
	{
		std::cout<<"Sorry that was not an option. Make sure to type number 1 or 2\n";
		std::cout<<"Type '1' for If statement or '2' for Switch statement: ";
		std::cin>>case_change;
	}
	
	//Using IF
	if (case_change == 1)
	{
		std::cout<<"enter your grade: ";
		std::cin>>input_number;
		auto grade_letter_using_if = get_letter_grade_using_if(input_number);
		std::cout<<"Your grade is: " << grade_letter_using_if;
	}
	//Using Switch
	else if (case_change == 2)
	{
		std::cout<<"enter your grade: ";
		std::cin>>input_number;
		auto grade_letter_using_if = get_letter_grade_using_switch(input_number);
		std::cout<<"Your grade is: " << grade_letter_using_if;
	}
	
	return 0;
}