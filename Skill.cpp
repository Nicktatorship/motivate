#include "Skill.h"

Skill::Skill() 
{
    SetSkillName("Unknown");
}

Skill::Skill(string SkName) 
{
    SetSkillName(SkName);
}

void Skill::SetSkillName(string SkName)
{
    SkillName = SkName;
    
    return;
}


string Skill::GetSkillName()
{
    return SkillName;
}

