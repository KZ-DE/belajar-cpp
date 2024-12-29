#include <iostream>
using namespace std;

#define ID 1

#if ID == 1
    #define LANG "Indonesia"
#else
    #define LANG "English"
#endif


int main(int argc, char const *argv[])
{
    cout << "bahasa yang di pilih adalah " << LANG << endl;
    return 0;
}
