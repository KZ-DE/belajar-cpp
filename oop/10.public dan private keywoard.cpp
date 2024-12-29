#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
private: // hanya dapat di akses oleh class itu sendiri
    float nim;

public: // dapat di akses oleh siapapun
    string name;
    Mahasiswa(const char *, const float);
    float getNim(); // menggunakan method untuk mengambil variable private
    ~Mahasiswa();
};

Mahasiswa::Mahasiswa(const char *name, const float nim)
{
    this->name = name;
    this->nim = nim;
}
float Mahasiswa::getNim()
{
    return this->nim;
}
Mahasiswa::~Mahasiswa()
{
}

int main(int argc, char const *argv[])
{
    Mahasiswa *maba = new Mahasiswa("bejo", 2210122);
    float nim = maba->getNim();
    cout << "nim dari " << maba->name << " adalah " << nim << endl;
    return 0;
}
