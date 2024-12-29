/*
arti rekursif = pengulangan
jadi fungsi rekursif adalah fungsi yang mengulang dirinya sendiri (lopping fugsi)\

ada juga finite rekursif = rekursif terbatas
artinya (lopping) fungsinya terbatas

*/

#include <iostream>
using namespace std;

// fungsi rekursif terbatas
int pangkat(int a, int b){
    int hasil = a;
    for (size_t i = 1; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil; 
}

// fungsi rekursif
int pangkatrekursif(int a, int b){
    if (b<=1)
    {
        return a;
    }else{
        return a*pangkatrekursif(a,b-1);
    }
    
    
}

int main(int argc, char const *argv[])
{
    int a;
    int b;
    cout<< "angka: ";
    cin>>a;
    cout<< "pangkat: ";
    cin>>b;
    cout<<"Hasil nya = " << pangkatrekursif(a,b) <<endl;
    cout<<sizeof(pangkatrekursif(a,b))<< endl;
    
    
    return 0;
}
