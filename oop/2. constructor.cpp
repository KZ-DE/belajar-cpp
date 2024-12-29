#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        int nim;
        
        // class dengan constructor membuat constructor akan di panggil ketika objek di buat.
        // constructor sendiri adalah sebuah method yang memiliki nama yang sama dengan class nya dan wajib berada pada layer public
        Mahasiswa(string inputnama, int innim){
            // bisa di berikan parameter untuk memudahkan progam [wajib memberi name space]
            Mahasiswa::nama = inputnama;
            Mahasiswa::nim = innim;
            
            // untuk membuat output di dalam constructor maka harus mengunakan namespace juga
            cout << "nama = " << Mahasiswa::nama << endl;
            cout << "nim = " << Mahasiswa::nim << endl;
            
        }

};


int main(int argc, char const *argv[])
{
    Mahasiswa data("ucup", 22101);
    Mahasiswa data2("otong", 22111);
    

    // ketika menggunakan manual
    
    // cout << "nama = " << data.nama << endl;
    // cout << "nim = " << data.nim << endl;
    // cout << "nama = " << data2.nama << endl;
    // cout << "nim = " << data2.nim << endl;
    return 0;
}
