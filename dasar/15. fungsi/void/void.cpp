// void = fungsi tanpa return
#include <iostream>
using namespace std;

// funsi dengan return (harus menggunakan tipe data di awal) <berbeda dengan void>
int kuadrat(int x){
    int y;
    y = x * x;
   return y;
}

// funsi tampa return
void tampilkan(int input){
    printf("\nmenggunakan void\n");
    cout<<input<<endl;
}

int main(int argc, char const *argv[]){
    int input;
    int hasil;

    printf("Masukan nilai x : ");
    cin>>input;

    hasil = kuadrat(input);
    
    cout<<hasil<<endl;
    tampilkan(kuadrat(input));

    return 0;
}