#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 12;

    bool hasil1, hasil2;

    // comparasi
    // sebanding
    hasil1 =  (a == b);
    cout << hasil1 << endl;

    // tidak sebanding
    hasil2 = (a != b);
    cout << hasil2 << endl;

    // lebih dari
    hasil1 = (a > b);
    cout << hasil1 << endl;

    // lebih dari samadengan
    hasil2 = ( a >= b);
    cout << hasil2 << endl;

    // kurang dari
    hasil1 = (a < b);
    cout << hasil1 << endl;

    // kurang dari sama dengan
    hasil2 = (a <= b);
    cout << hasil2 << endl;
    return 0;
}
