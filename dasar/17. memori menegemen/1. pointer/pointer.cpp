// untuk meakses memori dari sebuah variable menggunakan &<nama variable>
// sedangkan untuk membuat varibale pointer menggunakan tanda * di depan nama variable

// pointer selalu bertipe data int
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int x = 5;
    // membuat variable pointer
    int *c = nullptr; // medeklarasikan pointer kosong

    int *b = &a; // meakses pointer dari variable a
    /* atau bisa menggunakan sperti ini
    x = &a; */

    // melihat nilai dan pointer
    cout << "nilai a = " << a << endl;
    cout << "memori a : " << &a << endl;

    cout << "niali b = " << *b << endl;
    cout << "memori b : " << b << endl;

    cout << "addres x = " << &x << endl;
    *b = 10; // untuk mengubah nilai memkai cara seperti ini

    cout << "pointer kosong : " << c << endl;

    x = x + 5;

    // deferensi (mengambil data dari sebuah pointer)
    cout << "mengambil nilai data dari pointer :" << *b << endl;
    cout << "memori b : " << b << endl;

    cout << "\n"
         << endl;

    cout << "addres x =" << &x << endl;

    return 0;
}