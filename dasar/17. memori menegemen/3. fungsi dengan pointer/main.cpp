#include <iostream>
using namespace std;

// fungsi untuk pointer tidak perlu menggunakan retrun maka kita gunakan void

// sering di gunakan untuk menghasilkan nilai yang beda namun hanya menggunakan 1 variabel sehingga menghemat memori

// fungsi dengan input pointer
void fungsi(int *b){
    cout<<"address b = "<<b<<endl;
    cout<<"nilai b = "<<*b<<endl; 
}

// menggunakan fungsi pointer (tidak adanya tambahan address baru, karena variabel c hanya mengambil addres dari variabel yang di tuju)
void kuadrat(int *c){
    *c = *c * *c;
}

// menggunakan funcion biasa (menghasilkan adresss tambahan yaitu variabel D)
/*
int kuadrat (int d){
    retrun d * d
}
*/


int main(){
    int a= 5;
    cout<<"address a = "<< &a<<endl;
    cout<<"nilai a = "<< a<<endl;
    
    fungsi(&a); // fungsi dengan input pointer

    kuadrat(&a);
    cout<<"nilai a = "<< a<<endl;

    return 0;
}