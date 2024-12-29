#include <iostream>
using namespace std;


double vol_kubus(double p, double l=3, double t=1);

int main(int argc, char const *argv[])
{
    cout<<"volume kubus: "<< vol_kubus(3);
    return 0;
}

// deafault argumen di berikan pada fungsi prototype
double vol_kubus(double p, double l, double t){
    return p*l*t;
}
