#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

Character::Character(HeroType InputType, const string &allegiance, double InputHealth, double InputAtt){
    type = InputType;
    name = allegiance;
    health = InputHealth;
    attackStrength = InputAtt;
}

HeroType Character::getType() const{
    return type;
}

const string& Character::getName() const{
    return name;
}

int Character::getHealth() const{
    return static_cast<int>(health);
}

void Character::damage(double d){
    health = health - d;
}

bool Character::isAlive() const {
    return (health >0);
}