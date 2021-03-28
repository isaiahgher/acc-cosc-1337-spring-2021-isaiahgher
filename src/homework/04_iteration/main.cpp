//write include statements
#include"dna.h"
#include<string>
#include<iostream>
//write using statements
using std::string;	using std::cout;	using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string dna;
	int talk;
	char talk2;
  do 
  {
	cout << "\nEnter 1 to get GC content" << "\n";
 	cout << "Enter 2 to get DNA complement" << "\n\n";
    cout << "Enter your choice : ";
    cin >> talk;
	cout << "Enter a DNA sequence: ";
    cin >> dna;
	
   	if (talk == 1)
	{
		double content = get_gc_content(dna);
		cout<<"GC content: "<<content<<"\n";

	}
	else if (talk == 2)
	{
		std::string complement = get_dna_complement(dna);
		cout<<"DNA Complement: "<<complement<<"\n";
	}
	else
	{
		cout<<"Invalid choice"<<"\n";
	}
	

	
	cout<<"\n Y to countinue: ";
	cin>>talk2;
	}while (talk2 == 'Y' ||talk2 == 'y');
	return 0;
}