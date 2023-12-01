#include "Wizard.h"
#include "Warrior.h"
#include "Elf.h"
#include <string>
#include "Character.h"
#include <iostream>
using namespace std;

Wizard::Wizard(string n, double h, double a, int r):Character(WIZARD,n,h,a)
{
    wiz_rank = r;
    
    attackStrength = a;
    health = h;
    name = n;
}
void Wizard::attack(Character &opponent)
{
    
    double dam = 0.0;
    if(opponent.getType() == WIZARD)
    {
        Wizard &opp = dynamic_cast<Wizard &>(opponent);
        cout << "Wizard " << name << " attacks " << opp.name << " --- POOF!!" << endl;
        dam = static_cast<double>(attackStrength) * (static_cast<double>(wiz_rank)/static_cast<double>(opp.wiz_rank));
        opp.damage(dam);
        cout << opp.name << " takes " << dam << " damage." << endl;
        return;
    }
    else if(opponent.getType() == WARRIOR)
    {
        Warrior &opp = dynamic_cast<Warrior &>(opponent);
        cout << "Wizard " << name << " attacks " << opp.getName() << " --- POOF!!" << endl;
        dam = static_cast<double>(attackStrength);
        opp.damage(attackStrength);
        cout << opp.getName() << " takes " << dam << " damage." << endl;
        return;
    }
    else if(opponent.getType() == ELF)
    {
        Elf &opp = dynamic_cast<Elf &>(opponent);
        cout << "Wizard " << name << " attacks " << opp.getName() << " --- POOF!!" << endl;
        opp.damage(static_cast<double>(attackStrength)); 
        dam = static_cast<double>(attackStrength);
        cout << opp.getName() << " takes " << dam << " damage." << endl;
        return;
    }
   
}