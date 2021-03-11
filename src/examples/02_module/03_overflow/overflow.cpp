/*
Function int_overflow creates an int num variable with value 2147483647, 
add 1 to it, and returns it
@param none
@return num + 1
*/

#include "overflow.h"
#include <climits>

int overflow()
{
    auto max = 2147483647;
    max = max + 1;

    return max;
}



double under_flow()
{
    //Smallest decimals we can approch to
    auto min_close_to_zero = __DBL_MIN__;

    auto too_close_to_zero = min_close_to_zero / 10;

    return too_close_to_zero;
}