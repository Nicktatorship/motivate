#pragma once

#include <string>

class Skill;

using namespace std;

class Character 
{
    public:
        Character();
        Character(string CharName); // constructor

        void SetCharacterName(string ChName);
        void SetSpeciality(Skill* CharacterSkill);
        
        string GetCharacterName();
        string GetSpeciality();
        
        
    private:
        string CharacterName;
        Skill* Speciality = nullptr;
};