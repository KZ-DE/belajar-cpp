// latihan dadu

#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    char x;
    printf("latihan membuat dadu dengan libary random\n");
    while (true)
    {
        cout<< "lempar dadu ? (y/n) : ";
        cin>>x;
        if (x == 'n')
        {
            break;
        }
        cout<< (1 + rand() % 6) << endl;

        
        
    }
    
    
    return 0;
}
