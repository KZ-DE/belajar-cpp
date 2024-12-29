#include <iostream>

using namespace std;

struct ucup
{
    // int harga = 10;
    int jumlah;
};


int main(int argc, char const *argv[])
{
    const int a= 10;
    const int b= 12;
    int c= 13;
    int* d= nullptr;
    string x ="test";

    
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;
    cout<<&d<<endl;

    cout<<sizeof(x)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<x<<endl;

    ucup bejo;
    bejo.jumlah = 2;
    cout<<sizeof(bejo)<<endl;
    // cout<<bejo.harga<<endl;
    cout<<bejo.jumlah<<endl;
    cout<<&bejo<<endl;




    return 0;

}
