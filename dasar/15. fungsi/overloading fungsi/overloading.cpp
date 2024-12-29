// overloding fungsi syarat utamanya adalah nama fungsinya sama
#include <iostream>
using namespace std;

// basic fungsi
int luas_kotak(int p, int l){
    return p*l;
}

// overload fungsi
int luas_kotak(int sisi){
    return sisi * sisi;
}

// overload tipe data fungsi
double luas_kotak(double sisi){
    return sisi * sisi;
}

int main(int argc, char const *argv[])
{
    cout<< "Luas kotak 2x3: " << luas_kotak(2,3) <<endl;
    cout<< "Luas kotak 2x2: " << luas_kotak(2) <<endl;
    cout<< "Luas kotak 2.5x2.5: " << luas_kotak(2.5) <<endl; // int membulatkan nilai ke belakang/kebawah
    return 0;
}
