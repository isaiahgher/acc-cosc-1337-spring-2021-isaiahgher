#include "ref_pointers.h"
#include<iostream>
using std::cout;

int main() 
{
	//reference
	int num = 20. num1=25;
	int& num_ref=num;

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Address of num via num_ref: "<<&num_ref<<"\n";
	cout<<"Value of num via num_ref: "<<num_ref<<"\n";

	cout<<"Value of num1: "<<num1<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n";

	num_ref=num1;//WHAT? NO ERROR, references cant be reassigned???

	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"Address of num1 via num_ref: "<<&num_ref<<"\n";

	return 0;
}