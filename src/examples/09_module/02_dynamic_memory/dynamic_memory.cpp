#include "dynamic_memory.h"
#include<iostream>
using std::cout;
//
void use_dynamic_memory(int num)
{
    int*num_ptr=new int(num_);//create memory
    cout<<*num_ptr<<"\n";//use memory-- THIS IS WHATS DIFFICULT
    delete num_ptr;//delete memory
}

int* reutrn_dynamic_memory(int num)
{
    int* num_ptr=new int(num);//create memory
    return num_ptr;
}
void limit_dynamic_memory_scope()
{
    int* val=reutrn_dynamic_memory
}
