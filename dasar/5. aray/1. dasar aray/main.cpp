#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int aray[5]; // membuat aray
    // cara mengisi nilai (cara 1)
    aray[0] = 666666666; // aximal int
    aray[1] = 2;
    aray[2] = 3;
    aray[3] = 4;
    aray[4] = 5;

    // cara membuat aray (ke 2)
    int niali[5] = {1,2,3,4,5}; // membuat aray berserta nialinya


    cout<<&aray[0]<<" dengan niali = "<<aray[0]<<endl;
    cout<<&aray[1]<<" dengan niali = "<<aray[1]<<endl;
    cout<<&aray[2]<<" dengan niali = "<<aray[2]<<endl;
    cout<<&aray[3]<<" dengan niali = "<<aray[3]<<endl;
    cout<<&aray[4]<<" dengan niali = "<<aray[4]<<endl;
    // jika mendeklarasi menggunakan aray akan menggunakan memori yang berdampingan

    // untuk meakses nilai dengan pointer
    int *pointer = aray;
    *(pointer + 2) = 6; // meakses dan mengubah nilai dari pointer awal di urutan 2

    // mengubah nilai dengan cara biasa
    aray[3] =10;

    cout<<endl;
    cout<<&aray[0]<<" dengan niali = "<<aray[0]<<endl;
    cout<<&aray[1]<<" dengan niali = "<<aray[1]<<endl;
    cout<<&aray[2]<<" dengan niali = "<<aray[2]<<endl;
    cout<<&aray[3]<<" dengan niali = "<<aray[3]<<endl;
    cout<<&aray[4]<<" dengan niali = "<<aray[4]<<endl;

    cout<<endl;
    // melihat jumlah bit yang di gunakan pada aray
    cout<<sizeof(aray)<<endl; // total nilai



    return 0;
}
