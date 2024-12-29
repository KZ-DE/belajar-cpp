#ifndef __WEAPON
#define __WEAPON

#include <string>
using namespace std;

class Weapon
{
private:
    string name;
    double power;

public:
    Weapon(const char *, double);
    void display();
    string getName();
};
#endif
