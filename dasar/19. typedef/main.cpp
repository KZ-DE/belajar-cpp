#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // typedef di gunakan untuk menggati nama dari tipe dapat
    // contoh
    typedef unsigned long ulong;
    ulong x = 1234242;
    cout << x << endl;

    // contoh untuk aray 2 demimensi
    // tanpa type define
    int a[2] = {1,2};
    cout << a[0] << " dan " << a[1] << endl;

    // menggunakan typedef
    typedef int arr2d[2]; // bisa juga untuk tipe data yang lain
    arr2d b = {4,5};
    cout << b[0] << " dan " << b[1] << endl;
    return 0;
}
