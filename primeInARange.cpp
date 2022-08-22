#include<iostream>
using namespace std;

bool isPrime(int n){
    int count = 0;

    if(n < 2)
        return false;
    
    for(int i = 2;i < n; i++) 
    { 
        if(n % i == 0) 
            return false;
    }
    return true;
}
int main(){
    int first, last;
    cin>>first>>last;

    for(int i = first; i<=last; i++){
        if(isPrime(i))
            cout<<i<<" ";
    }
}