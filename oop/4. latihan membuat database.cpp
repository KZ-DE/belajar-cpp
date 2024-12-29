#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string nim;
        string jurusan;

        // konstructor
        Mahasiswa(const char* nama,const char* nim, const char* jurusan ){
            Mahasiswa::nama = nama;
            Mahasiswa::nim = nim;
            Mahasiswa::jurusan = jurusan;
        }

        string TString(){
            return nama + " " + nim + " " + jurusan;
        }
};

class DBase{
    public:
        ifstream in;
        ofstream out;
        const char* fileName;

        DBase(const char* fileName){
            DBase::fileName = fileName;

        }

        // method save ke DataBase
        void save(Mahasiswa data){
            cout << data.nama << endl;
            cout << data.nim << endl;
            cout << data.jurusan << endl;

            // untuk membuat dataBase
            DBase::out.open(DBase::fileName, ios::app);

            // untuk save ke dalam dataBase
            DBase::out << data.TString() << endl;
        }
};

int main(int argc, char const *argv[])
{
    Mahasiswa data("ucup", "22191", "teknik");
    DBase dataBase("data.txt");

    // save ke DataBase
    dataBase.save(data);
    return 0;
}
