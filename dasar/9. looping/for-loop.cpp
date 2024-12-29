#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (size_t i = 1; i < 10; i++)
    // size_t sama seperti int
    {
        cout<< "a\n";
    }

    for (size_t x = 1; x <10; x+=2)
    {
        cout<< x << ends;
    }

    for (int i = 0; i >-10; i--)
    {
        cout<< i <<endl;
    }
    
    
    return 0;
}
