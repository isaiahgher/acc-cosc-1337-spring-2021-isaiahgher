//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>

class Vector
{
public:
    Vector(std::size_t s);
    Vector(const Vector& v);//copy contstructor Rule 1 of 3- rule of 3 - legacy C++
    std::size_t Size()const{return size;}
    int& operator[](std::size_t i){return elements[i];}
    int& operatorp[](std::size_t)const{return elements[i];}

private:
    std::size_t size;
    int* elements;
};
#endif