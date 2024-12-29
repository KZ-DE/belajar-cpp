#include <iostream>
using namespace std;


// persegi
float keliling_persegi(float sisi){
    return sisi*4;
}

float luas_persergi(float sisi){
    return sisi*sisi;
}


// persegi panjang
float keliling_persegi_panjang(float panjang, float lebar){
    return (panjang+lebar)*2;
}

float luas_persergi_panjang(float panjang, float lebar){
    return panjang*lebar;
}

    /* menampilkan data*/
void tampilkan(float keliling, float luas){
    printf("Keliling: ");
    cout<<keliling<<endl;
    printf("luas: ");
    cout<<luas<<endl;

}


int main(int argc, char const *argv[])
{
    float sisi;
    printf("Masuk niai sisi persegi: ");
    cin>>sisi;

    float panjang;
    float lebar;
    printf("Masukan panjang persergi panjang: ");
    cin>>panjang;
    printf("Masukan lebar persergi panjang: ");
    cin>>lebar;

    
    // memnapilkan nilai persegi
    printf("\nhasil persegi\n");
    tampilkan(keliling_persegi(sisi), luas_persergi(sisi));

    // menampilkan nilia persegi pangjang
    printf("\nhasil persegi panjang\n");
    tampilkan(keliling_persegi_panjang(panjang, lebar), luas_persergi_panjang(panjang, lebar));

    return 0;
}
