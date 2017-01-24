#include "Influence.h"
#include <string>

Influence::Influence() 
{
    
}

void Influence::SetInfluenceName(std::string Name)
{
    InfluenceName = Name;
}

std::string Influence::GetInfluenceName()
{
    return InfluenceName;
}

