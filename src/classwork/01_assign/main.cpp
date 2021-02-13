//Write the include statement for types.h here
#include"types.h"
#include<iostream>
//Write include for capturing input from keyboard and displaying output to screen



int main() 
{

	int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;

	int result;
	result=multiply_numbers(num);
	std::cout<<"The result is: "<<result<<"\n";

	int num1=4;
	result1=multiply_numbers(num1);
	std::cout<<"The result is: "<<result1;

	return 0;
	
}

