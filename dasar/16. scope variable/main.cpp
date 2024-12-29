#include <iostream>
using namespace std;

// variable global
int x =5;
// x=10; tidak bisa merubah var di luar main 

int var_global(){
    return x; // akan mengambil nilai dari variable globla kaena urutan esekusi
}

int x_local(){
    int x = 20; // variable local hanya untuk di dalam fungsis
    return x;
}

int main(int argc, char const *argv[])
{
   printf("1. Variable global: ");
   cout<<x<<endl; // akan mengambil nilai var global karena urutan eksekusi

   int x = 10;

   printf("2. var local main: ");
   cout<<x<<endl; // sedagkan ini akan mengambil dari var lokal karena sudah di timpa dengan var local
   
   printf("3. Variable var_global: ");
   cout<<var_global()<<endl;

   printf("4. variable x_local: ");
   cout<<x_local()<<endl;


   printf("5. variable local main: ");
   cout<<x<<endl;
   {
    // var block adalah var yang ada di dalam {}
    int x= 1; // variable ini tidak akan mengubah variable yang ada di luar block
   }
   printf("6. variable local main: ");
   cout<<x<<endl;

   printf("7. mengambil variable global: ");
   cout<<::x<<endl; // menggunakan :: di depan nama var akan mengambi var paling jauh/ paling pertama
}
