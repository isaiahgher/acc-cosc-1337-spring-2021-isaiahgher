#include "constants.h"
#include <iostream>
using std::cout; using std::cin;

int main()
{
    auto radious = 0.1;
    cout<<"enter radious of circle: ";
    cin>>radious;

    cout<<"radious of circle is " <<get_area_of_circle(radious);
    return 0;
}