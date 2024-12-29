#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    // dalam C++ terdapat 3 lapis variabel yaitu = public, private, dan protect
    public: // variabel yang bisa di akses di luar clas
        string nama;
        struct data
        {
            int nim;
            int angkatan;
            int ipk;
        }data; // untuk membuat struct di dalam class maka sebelum titik koma harus di beri nama objek agar dapat di akses [utamakan nama objek samakan dengan nama struct agar tidak membingunkan] 


        void info(){
            cout << "nama mahasiswa = " << nama << endl;
            cout << "nim mahasiswa = " << data.nim << endl;
            cout << "angkatan mahasiswa = " << data.angkatan << endl;
            cout << "ipk mahasiswa = " << data.ipk << endl;
        }
        

    private: // variabel yang bisa di akses hanya di dalam class
    protected: // variabel yang bisa di akses oleh class yang di warisi oleh class ini
};


int main(int argc, char const *argv[])
{
    Mahasiswa ucup;

    ucup.nama = "ucup setiawan";
    ucup.data.nim = 22101;
    ucup.data.angkatan = 2022;
    ucup.data.ipk = 3.5;

    // bisa di tampilkan dengan manual
    cout << "nama mahasiswa = " << ucup.nama << endl;
    cout << "nim mahasiswa = " << ucup.data.nim << endl;
    cout << "angkatan mahasiswa = " << ucup.data.angkatan << endl;
    cout << "ipk mahasiswa = " << ucup.data.ipk << endl;

    // bisa juga menggunakan method
    ucup.info();
    
 
    return 0;
}
