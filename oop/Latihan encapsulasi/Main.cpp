#include <iostream>
#include <string>
#include "Player.h"
#include "Weapon.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Player *player1 = new Player("Bejo");
    Weapon *weapon1 = new Weapon("Pedang", 100);

    // implementasi setter untuk mengequip weapon
    player1->equipWeapon(weapon1);

    player1->display();
    // weapon1->display();
    return 0;
}
