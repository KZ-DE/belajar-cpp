#include <iostream>
using namespace std;

void reference(int &c)
{
    // jika menggunakan ini membuat nilai addresnya masih sama
    cout << "Nilai c = " << c << endl;
    cout << "memori c = " << &c << endl;
}

void reference2(int x)
{
    // sedangkan jika menggunakan ini akan berbeda
    int &z = x;
    cout << "Nilai z = " << z << endl;
    cout << "memori z = " << &z << endl;
}

int main()
{
    int a = 5;
    cout << "Nilai a = " << a << endl;
    cout << "memori a = " << &a << endl;

    // pointer
    int *b = &a;
    cout << "memori b = " << b << endl;

    // reference
    int &d = a;
    cout << "refrence d = " << &d << endl;
    cout << " Nilai d = " << d << endl;

    reference(d);
    cout << endl;

    reference2(a);

    return 0;
}