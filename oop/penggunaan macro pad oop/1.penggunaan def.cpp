#define __PLAYER_H__
#include "mahasiswa.h" // yang ada di libary mahasiswa akan bisa di akses jika mendefine __PLAYER_H__ terlebih dahulu
#include <iostream>

using namespace std;

void Player::init()
{
    cout << "Player ter init" << endl;
}