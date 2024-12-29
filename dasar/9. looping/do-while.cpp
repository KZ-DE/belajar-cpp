#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1;
    do{
        cout << "Hallo" << endl; // akan di eksekudi sekali lalu akan looping jika syarat terpenuhi
        a++;
    }while(a<5);
    
    return 0;
}
