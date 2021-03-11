//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cin; using std::cout;


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	//Hopefully this works, I put the loop true right now so that it wont be infinite.
	int msg_prompt = 1;

	//Loop
	while(msg_prompt == 1)
	{
		//variables
		int keyboard_number;
		cout<<"enter a number from 1 to 10: ";
		cin>>keyboard_number;

		//If number entered is a negative number
		if(keyboard_number <= 0)
		{
			cout<<"\nwe cant accumulate negative numbers"<<"\npress 1 to try again or press any button to quit: ";
			//Will ask the user if they want to stop the loop
			cin>>msg_prompt;

		}
		
		// If number entered is in range of 1 to 10
		else if (keyboard_number >= 1 && keyboard_number <= 10)
		{
			cout<<"\nYour factorial number is: "<<factorial(keyboard_number)<<"\npress 1 to try again or press any button to quit: ";
			//Will ask the user if they want to stop the loop
			cin>>msg_prompt;
		}
		
		
		//If numbers are greater than 10
		else
		{
			cout<<"\nwe cant accumulate numbers higher than 10"<<"\npress 1 to try again or press any button to quit: ";
			//Will ask the user if they want to stop the loop
			cin>>msg_prompt;
		}
		//End of loop


		
	}
	return 0;
}