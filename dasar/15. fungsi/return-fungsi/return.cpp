// untuk membuat fungsi harus di beri tipe data fungsi
// bisa di buat di luar main
// berbedaan dengan void adalah jika void tidak perlu menggunakan tipe data di awal
// dan juga tidak menggunakan return
// sedangkan main menggunakan tipe data pada awal pembuatannya dan juga wajib memakai returt
// jika tidak akan eror

#include <iostream>
using namespace std;

// funsi dengan return <berbeda dengan void>
int kuadrat(int x){
    int y;
    y = x * x;
   return y;
}

int main(int argc, char const *argv[]){
    int input;
    printf("Masukan nilai x : ");
    cin>>input;
    cout<<kuadrat(input);

    return 0;
}
