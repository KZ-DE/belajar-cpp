#include <iostream>
#include <string>

using namespace std;

class kosong
{
public:
    int data()
    {
        return 1;
    }
};

class isi
{
    // akan mengambil alokasi memori sesuai data membernya
public:
    int data0; // 4 byte
    double data1;
    string datastr; // 24 byte

    void sedDataInt(int angka)
    {
        isi::data0 = angka;
    }
};

class Mahasiswa
{
public:
    string nama;

    Mahasiswa(const char *nama)
    {
        Mahasiswa::nama = nama;
    }
};

int main(int argc, char const *argv[])
{
    // melihat memori yang di pakai oleh class
    cout << "alokasi class kosong = " << sizeof(kosong) << " byte" << endl;
    cout << "alokasi class isi = " << sizeof(isi) << " byte" << endl;

    // melihat adrees pada objek class
    // - adress pada variabel (aakan berurutan)
    string a;
    string b;
    Mahasiswa objek1("ucup");
    Mahasiswa *objek2 = new Mahasiswa("ucup");
    string c;
    string d;
    cout << "\n adrees variabel (ada di satck karena berurutan)" << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << "\n pointer objek stack" << endl;
    cout << &objek1 << endl;

    // cout << "\n adrees objek stack" << endl; // untuk stack tidak bisa di akses adressnya
    // cout << objek1 << endl;

    cout << "\n pointer objek heap" << endl;
    cout << &objek2 << endl;

    // fungsi new mencopy dan memindahkan adress objek dari satck ke heap
    cout << "\n adrees objek heap" << endl;
    cout << objek2 << endl;

    cout << "\n"
         << endl;

    cout << &c << endl;
    cout << &d << endl;

    return 0;
}
