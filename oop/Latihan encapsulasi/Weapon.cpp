#include <iostream>
#include "Weapon.h"

using namespace std;

Weapon::Weapon(const char *name, double power)
{
    this->name = name;
    this->power = power;
}

void Weapon::display()
{
    cout << "Senjata utamanya adalah " << this->name << " dengan power " << this->power << endl;
}

string Weapon::getName()
{
    return this->name;
}