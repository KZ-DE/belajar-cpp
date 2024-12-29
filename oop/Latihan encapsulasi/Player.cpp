#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(const char *name)
{
    this->name = name;
}

void Player::display()
{
    cout << "Nama player = " << this->name << endl;
    cout << "Menggunakan Senjata " << this->weapon->getName() << endl;
}

void Player::equipWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}