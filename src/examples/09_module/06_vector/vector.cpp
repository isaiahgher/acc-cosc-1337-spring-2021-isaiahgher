#include "vector.h"

//
Vector::Vector(std::size_t s)
: size(s), elements{new int{s}}




/*
1-initialize size of v1
2-initialize memory for v1
3-copy element values from v to v1
*/
Vector::Vector(const Vector& v)
    : size{v.size}, elements{new int[v.size]}
{
    cout<<"Execute copy constructor \n";

    for (std::size_t i=0)
}
