#include "ref_pointers.h"

//

void use_smart_pointer(std::unique_ptr<int>& num)
{
    std::cout<<"Smart Pointer Value: "<<*num<<"\n";
}
