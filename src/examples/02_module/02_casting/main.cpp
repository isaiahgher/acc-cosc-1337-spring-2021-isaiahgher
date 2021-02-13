#include <iostream>
#include "casting.h"

using std::cout; using std::cin;

int main()
{
   auto num=.01;//double num;
    cout<<"Enter a decimal value: ";
    cin>>num;

    cout<<"You typed: "<<num<<"\n";//cout<<"Static cast conversion: "<<static_cast_double_int(num);
    cout<<"Int Converted to double: "<<convert_double_to_int(num);

    return 0;
}