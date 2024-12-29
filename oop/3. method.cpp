#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        int nim;
        int angkatan;

        // constructor
        Mahasiswa(string innama, int innim, int angkatan){
            Mahasiswa::nama = innama;

            // bisa juga tidak menggunakan namespace ketika pernamaan variabel tidak sama dengan variabel pada class
            nim = innim;

            // contoh ketika variabel yang di gunakan sama {maka tidak akan keluar hasilnya, namun tidak akan membuat eror}
            // sehingga untuk membedakan harus menggunakan namespace untuk memberi tahu bahwa variabel tersebut milik class
            angkatan = angkatan;
        }

        // method di dalam class tampa parameter dan tampa return
        void info(){
            cout << Mahasiswa::nama << endl;
            cout << Mahasiswa::nim << endl;
            
        }

        // method dalam class dengan parameter
        void rename(const char* name){
            // const char* di gunakan untuk mengganti penggunaan string
            Mahasiswa::nama = name;
        }

        // method dalam class tampa parameter dengan return
        string getNama(){
            return Mahasiswa::nama;
        }

        // method dalam class dengan parameter dan return
        int gantiNim(const int &tambahNim){
            return Mahasiswa::nim + tambahNim;
        }
};

// method di luar class [tidak di anjurkan]
void print(Mahasiswa data){
    cout << data.nama << endl;
    cout << data.nim << endl;
    
}

int main(int argc, char const *argv[])
{
    Mahasiswa maba("ucup", 22, 2022);
    Mahasiswa kating("bejo", 210101, 2021);

    print(maba);
    maba.info();
    kating.info();

    maba.rename("dudung");

    cout << maba.getNama() << endl;

    maba.gantiNim(100);
    maba.info();
    cout << maba.gantiNim(100) << endl;


    // cout << "nama Mahasiswa " << data.nama << endl;
    // cout << "nim Mahasiswa " << data.nim << endl;
    
    return 0;
}
