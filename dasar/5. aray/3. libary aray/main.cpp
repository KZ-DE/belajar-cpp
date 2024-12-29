#include <iostream>
#include <array>
// using namespace std;

int main(){
    // Membuat aray dengan staddart libary
    //>>> aray<tipe data, jumlah array> nama array <<<

    std::array< int, 5 > angka; // membuat array menggunakan standart libary
    for(int i= 0; i<= 4; i++){
        angka[i] = i+1;
    }
    for(int i= 0; i<=4; i++){
        std::cout<<"Nilai : "<<angka[i]<<" address : "<<&angka[i]<<std::endl;
    }
    // std::cout<<std::sizeof(angka)<<std::endl; // jika menggunakan libary maka tidak bisa menggunakna ini untuk mrlihat jumlah byte yang digunakan

    // dengan menggunakan libary aray maka bisa

    // melihat ukuran dari aray
    printf("ukuran array: ");
    std::cout<<angka.size()<<std::endl;

    // melihat addres awal
    printf("Addres awal : ");
    std::cout<<angka.begin()<<std::endl;

    // melihat addres akhir
    printf("Addres akhir : ");
    std::cout<<angka.end()<<std::endl; // nilai paling akhir dari yang di gunakan oleh array(batas akhir)

    // mengambil nilai dengan inde
    std::cout<<"nilai : "<<angka.at(2)<<std::endl;

    
    
    
    
    return 0;
}