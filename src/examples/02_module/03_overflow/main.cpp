#include "overflow.h"
#include <iostream>
using std::cin; using std::cout;


int main()
{
    auto max = 2147483648;
    cout <<"The max number is   "<<max<<"\n";
    cout <<"BY adding one to max, it will create"<<"\n";
    max = max + 1;

    cout<<"Max + 1 ="<<overflow();


    return 0;
}