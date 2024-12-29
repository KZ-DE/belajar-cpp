#include <iostream>
using namespace std;

// di gunakan untuk membuat argumen mempunyai flexibelitas tipe data
template<typename T>
void print(T data){
    cout << data << endl;
}

// bisa juga di gunakan untuk membuat konversi ke suatu tipe data
template<typename T>
int toint(T data){
    return data;
}

int main(int argc, char const *argv[])
{
    print(3);
    print(3.14);
    print("3");
    print(-3);
    print('c');
    print(toint(12.32424));
    print(toint(-12.32424));
    print(toint('1'));

    // bisa juga langsung menggunakannya untuk konversi
    print<int>(3.14);
    print<char>(34);


    return 0;
}
