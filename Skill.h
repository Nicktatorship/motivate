#pragma once

#include <string>

using namespace std;

class Skill 
{
    public:
        Skill(); // constructor
        Skill(string SkName);
        
        void SetSkillName(string SkName);
        
        string GetSkillName();
        
        
    private:
        string SkillName;
};