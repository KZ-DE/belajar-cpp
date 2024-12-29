#ifndef __PLAYER
#define __PLAYER
#include <string>
#include "Weapon.h"
using namespace std;

class Player
{
private:
    string name;

    // memungkinkan mengakses atau menghubungkan libary player dengan weapon
    Weapon *weapon;

public:
    Player(const char *);
    void display();
    // setter
    void equipWeapon(Weapon *);
};

#endif