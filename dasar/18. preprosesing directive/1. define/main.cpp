#include <iostream>

// ini macro yang mana tidak akan memakan memori dan di eksekusi ketika di kompile (bisa menggunakan semua tipe data)
// kalo bisa menggunakan huruf besar semua untuk nama macronya
#define PI  3.14

// bisa juga di gunakan untuk fungsi
#define KUADRAT(X) (X*X)

// bisa juga di gunakan untuk fungsi tenary
#define MAX(A,B) ((A > B) ? A:B)


// untuk menghilangkan define menggunalan endife
#undef PI

using namespace std;


int main()
{
    cout << "nilai PI = " << PI << endl;
    cout << "Nilai kuadrat 5 = " << KUADRAT(5) << endl;
    // cout << ((5<3) ? "benar":"salah") << endl;
    cout << MAX(5,4)<<endl;
    return 0;
}

