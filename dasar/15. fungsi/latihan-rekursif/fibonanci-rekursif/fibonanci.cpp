#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n <=1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
    
}

int main(){
    int a;
    printf("Makan urutan fibonanci: ");
    cin>>a;
    cout<<"hasilnya = "<<fibonacci(a)<<endl;

    

    return 0;
}