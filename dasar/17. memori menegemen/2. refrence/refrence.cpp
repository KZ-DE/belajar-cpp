// reference di gunakan untuk membuat var baru dengan memakai index memori yang sama dengan yang di telah di gunakan oleh variabel yang di pilih.
#include <iostream>
using namespace std;

int main(){
    int a=5;
    int x = 5;
    cout<<"address a = "<<&a<<endl;
    cout<<"nilai a = "<<a<<endl;
    cout << "addres x =" <<&x<<endl;


    int &b = a; // nilai dan pointer b akan sama dengan a
    cout<<"address b = "<<&b<<endl;
    cout<<"nilai b = "<<b<<endl;
    x =+ 5;
    b= 10; // walaupun nilai b berubah maka nilai a akan  ikut berubah karena nilai pointernya sama

    cout<<"address a = "<<&a<<endl;
    cout<<"nilai a = "<<a<<endl;
    cout<<"address b = "<<&b<<endl;
    cout<<"nilai b = "<<b<<endl;
    cout << "\n" <<endl;
    cout << "addres x =" <<&x<<endl;



    

    return 0;
}