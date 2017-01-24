#include "Influence.h"

Influence::Influence() 
{
    SetInfluenceName("Unknown");
}

void Influence::SetInfluenceName(string InfName)
{
    InfluenceName = InfName;
    
    return;
}


string Influence::GetInfluenceName()
{
    return InfluenceName;
}

