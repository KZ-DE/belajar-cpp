#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    
    cout << "masukan angka : ";
    cin >> a;

    // switch case (jika tidak di beri break maka akan terus mengjalankan perintah yang ada setelahnya contohnya case 3)
    switch (a)
    {
    case 5:
        cout << "a kurang dari 5" << endl;
        break;
    
    case 4 :
        cout << "a sama dengan 4" << endl;
        break;

    case 3 :
        cout << "a sama dengan 4" << endl;

    case 2 :
        cout << "a sama dengan 4" << endl;
        break;

    default:
        cout << "a lebih dari 5" << endl;
        break;
    }

    
}
