#include <iostream>
#include <string>

#include "Influence.h"

using namespace std;


int main()
{
    Influence TestInf;
    TestInf.SetInfluenceName("Power");
    
    cout << "Test" << endl;
    
    cout << TestInf.GetInfluenceName() << endl;
    
    return 0;
}