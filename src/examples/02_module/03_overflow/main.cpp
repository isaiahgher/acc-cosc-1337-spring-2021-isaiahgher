#include<iostream>
#include "overflow.h"

using std::cout; using std::cin;


int main()
{
    auto max = 214783647;

    cout<<"The max in in C++ is: "<<max<<"\n";
    cout<<"Add 1 to create C++ weirdness: \n";
    cout<<"Max + 1 is: "<<int_overflow();

    //cout<<"Int overflow: "<<int_overflow()<<"\n";
    
    return 0;
}