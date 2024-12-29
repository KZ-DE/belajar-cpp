#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // auto di gunakan untuk memberi tipe data variabel kita menjadi mengikuti nilai yang kita beri apakah itu int aja float atau string dll
    auto a = 15;
    auto b = 3.14;
    auto name = "bejo";
    cout << "niali a = " << a << " dengan addres = " << &a << endl;
    cout << "niali b = " << b << " dengan addres = " << &b << endl;
    cout << "niali name = " << name << " dengan addres = " << &name << endl;
    return 0;
}
