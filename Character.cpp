#include "Skill.h"
#include "Character.h"


Character::Character()
{
    SetCharacterName("Stranger");
}

Character::Character(string CharName)
{
    SetCharacterName(CharName);
}

void Character::SetCharacterName(string ChName)
{
    CharacterName = ChName;
    
    return;
}

void Character::SetSpeciality(Skill* CharacterSkill)
{
    Speciality = CharacterSkill;
}


string Character::GetCharacterName()
{
    return CharacterName;
}

string Character::GetSpeciality()
{
    if (!Speciality) { return "N/A"; }
    
    return Speciality->GetSkillName();
    
}
