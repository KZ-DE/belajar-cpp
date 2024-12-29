#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout<<"Masukan jumlah baris: ";
    cin>>n;


    cout<<"Membuat segitiga 1\n";

    for (size_t i = 1; i <=n; i++){
        for (size_t j = 1; j <=i; j++){
            cout<<"#";
        }
        cout<<endl;
    }


    cout<<"\nMembuat segitiga 2\n";

    for (size_t i = 1; i <=n; i++){
        for (size_t j = n; j >=i; j--)
        {
            cout<<"#";
        }
        cout<<endl;
    }

        
    cout<<"\nMembuat segitiga 3\n";

    for (size_t i = 1; i <=n; i++){

        for (size_t j = n; j > i; j--){
            cout<<" ";
        }

        for (size_t k = 1; k <= i; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    
    cout<<"\nMembuat segitiga 4\n";

    for (size_t i = 1; i <=n; i++){

        for (size_t j = 1; j < i; j++)
        {
             cout<<" ";
        }
        

        for (size_t k = n; k >= i; k--)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }


    cout<<"\nMembuat segitiga 5\n";
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = n; j >i; j--)
        {
            cout<<" ";
               
        }
        for (size_t k = 1; k <=i; k++)
        {
            cout<<"*";
        }
        for (size_t l = 2; l <=i; l++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }



    cout<<"\nMembuat segitiga 6\n";
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t l = 1; l < i; l++)
        {
            cout<<" ";
        }
        for (size_t j = i; j <=n; j++)
        {
            cout<<"*";
               
        }
        for (size_t k = i; k < n; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }



    cout<<"\nMembuat segitiga 7\n";
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = n; j >i; j--)
        {
            cout<<" ";
               
        }
        for (size_t k = 1; k <=i; k++)
        {
            cout<<"*";
        }
        for (size_t l = 2; l <=i; l++)
        {
            cout<<"*";
        }


        for (size_t m = i; m >=n; m--)
        {
            cout<<"\n";
            for (size_t a = 1; a <=n; a++)
            {
                 for (size_t c = 1; c < a; c++)
                {
                     cout<<' ';
                }
                for (size_t b =n; b >=a; b--)
                {
                    cout<<"*";
                }
                for (size_t d = m; d >a ; d--)
                {
                    cout<<"*";
                }
                cout<<"\n";
                
            }
            
        } 
        cout<<"\n";
        
    }
    
    return 0;
}
