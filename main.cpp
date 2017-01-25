#include <iostream>
#include <string>
#include <array>

#include "Influence.h"
#include "Character.h"
#include "Skill.h"

using namespace std;

array<Skill,7> SkillsArray = {
                                Skill("Staring"), 
                                Skill("Juggling"), 
                                Skill("Seance"),
                                Skill("Chemistry"),
                                Skill("Puns"),
                                Skill("Burping"),
                                Skill("Tweets")};

void Initialise();
void ShowCharacter(Character* CharacterPtr);
    

int main()
{
    Initialise();

    auto Bob = Character("Bob");
    auto Greg = Character();
    
    
    cout << SkillsArray.size() << endl;

    Greg.SetSpeciality(&SkillsArray[(rand() % SkillsArray.size())]);
    
    
    Influence TestInf;
    TestInf.SetInfluenceName("Power");
    
    cout << "Test" << endl;
    
    cout << TestInf.GetInfluenceName() << endl;
    
 
    cout << Bob.GetCharacterName() << endl;   
    cout << Greg.GetCharacterName() << endl;
    
    for (auto sk : SkillsArray)
    {
        cout << sk.GetSkillName() << endl;
    }
    
    cout << "---------------" << endl;
    ShowCharacter(&Bob);
    ShowCharacter(&Greg);
    
    
    
    return 0;
}

void Initialise()
{
    // TODO Set random seed

}


void ShowCharacter(Character* CharacterPtr)
{
    if (!CharacterPtr) { return; }
    
    auto charName = CharacterPtr->GetCharacterName();
    auto specName = CharacterPtr->GetSpeciality();
    
    cout << charName << ":->" << specName << endl;   
    
}