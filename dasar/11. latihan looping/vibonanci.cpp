// deret fibonanci

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* 
    rumus f(n) = f(n-1) + f(n-2)
     */

    int n;
    int fn;
    int fn1;
    int fn2;

    cout<<"Latihan deret fibonacci\n";
    cout<<"Masukan nilai deret: ";
    cin>> n;

    fn1 =1;
    fn2 =0;

    fn = fn1;
    cout<<fn<<" "<<ends;
    for (size_t i = 1; i < n; i++)
    {
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        
        cout<<fn<<" "<<ends;
        
    }
    
    return 0;
}

