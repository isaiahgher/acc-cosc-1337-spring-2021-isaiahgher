//cpp
#include "loops.h"

int factorial(int num)
{
    //Left this out here so that i can use the return statemnt outside the loop
    int accumulator = 1;

    for(int i = 1; i <= num; i = i + 1)
    {
        // Accumulator starting number is 1,but it will be multiply by i, so it will change its number depending on the end result of the operation/
        accumulator = accumulator * i;
    }
    //returns accumulator
    return accumulator;
}