#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i <= 10; i++)
    {
        if (i==5){
            break;
        }
        cout<< i <<endl;
    }

    for (size_t i = 0; i <= 10; i++)
    {
        if (i==5){
            continue; // angka 5 tidak di eksekusi karena di continiu
        }
        cout<< i <<endl;
    }
    
    return 0;
}
