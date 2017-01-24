#pragma once

#include <string>

using namespace std;

class Influence 
{
    public:
        Influence(); // constructor
        
        void SetInfluenceName(string InfName);
        
        string GetInfluenceName();
        
        
    private:
        string InfluenceName;
};