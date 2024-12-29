#include <iostream>
#include "1.h"
#include "bersama.h"
#include "2.h"
using namespace std;

#ifndef PI
#define PI 5
#endif
// #define BAHASA "Japan"

// ifdef di gunakan jika mengunkan include file yang banyak sehingga dapat mengecek udah di define atau belum
#ifdef PI
    #define ADA "ADA"
#else
    #define ADA "tidak ADA"
#endif


// ifndef di gunakan jika define tersebut belum di define di libary lain
#ifndef BAHASA
#define BAHASA "indonesia"
#endif

// untuk lebih mudah menggunakan pragma one, sehingga define hanya 1 kali yang di mana akan mengecek apakah file include udah di include berulang-ulang kali atau belum

int main(int argc, char const *argv[])
{
    cout << ADA << endl;
    cout << PI << endl; 
    cout << BAHASA << endl;

    return 0;
}
