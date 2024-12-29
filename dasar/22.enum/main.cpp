#include <iostream>

using namespace std;

enum warna
{
    // seperti index, akan mengembalkikan nilai angka dari urutan tersebut ketika tidak di beri nilai default
    merah,
    putih,
    hitam = 10, // memberi nilai default, sehingga nilia selanjutnya akan mengikuti
    kuning = 2, // akan menjadi 11 ketika tidak di beri nilai
    biru
};

int main(int argc, char const *argv[])
{
    warna kain;
    kain = biru;

    cout << kain << endl;
    return 0;
}
