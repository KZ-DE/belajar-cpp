#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a =2;
    int b =3;
    bool hasil;

    // and
    hasil = (a == 2);
    cout << hasil << endl;

    // not
    hasil = (b != 3);
    cout << hasil << endl;

    // and
    hasil == (a == 2 && b == 3);
    cout << hasil << endl; 

    // or
    hasil = (a == 2 || b == 3);
    cout << hasil << endl;
    
}
