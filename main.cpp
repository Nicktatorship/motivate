#include <iostream>
#include <string>

#include "Influence.h"

int main()
{
    Influence TestInf;
    TestInf.SetInfluenceName("Courage");
    
    std::cout << "Test" << std::endl;
    
    std::cout << TestInf.GetInfluenceName() << std::endl;
}