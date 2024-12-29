#include <iostream>
#include <string>

using namespace std;

// Struct : data yang dibentuk oleh beberapa data
class kotak
{
private:
    /* data */
    struct buah
    {
        string warna;
        float berat;
        int harga;
        string rasa;
    };

    buah mybuah;

public:
    void setWarna(const char *warna)
    {
        mybuah.warna = warna;
    }

    buah &getWarna()
    {
        return mybuah;
    }
};

int main(int argc, char const *argv[])
{
    kotak kotakbelanja;
    kotakbelanja.setWarna("merah");
    cout << kotakbelanja.getWarna().warna << endl;

    return 0;
}