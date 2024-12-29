// mendeklarasi fungsi dan mengisi variable secara terpisah

#include <iostream>
using namespace std;

// fungsi dengan return harus berada sebelum fungsi itu di eksekusi/di panggil
double hitung_luas(double p, double l){
    return p*l;
}

// jika ingin mendeklarasi saja bisa menggunakan teknik prototype
double hitung_keliling(double p, double l); // hanya begini saja jika menggunakan teknik prototype
// namun untuk deklarasikan harus berada di bawah dari fungsi prototype (bisa di bawah main)

// deklarasi prototype
void prinln(double x);


int main(int argc, char const *argv[])
{
    int panjang, lebar;
    cin>>panjang;
    cin>>lebar;
    
    prinln(hitung_luas(panjang, lebar));
    prinln(hitung_keliling(panjang, lebar));

    return 0;
}
// mengisi variable fungsi prototype(harus sama seperti yanng di deklarasi)
double hitung_keliling(double p, double l){ 
    return 2*(p+l);
}

// mengisi variable dari fungsi prototype
void prinln(double x){
    cout<< x <<endl;
}