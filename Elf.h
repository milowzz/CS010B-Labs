#include <string>
#include "Character.h"
using namespace std;

#ifndef ELF_H
#define ELF_H
class Elf : public Character
{

    protected:
    string family;
    

    public:
    Elf(string, double, double, string);
    void attack(Character &opponent);
    string GetFamily();
};
#endif