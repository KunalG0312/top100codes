#include<iostream>
using namespace std;

//check whether a number is prime or not

int main(){
    int n;
    cin>>n;
    bool isPrime = 1;

    if(n == 1){
        isPrime = 0;
    }
    
    for(int i = 2; i<n; i++){
        if(n == 1){
            isPrime = 0;
        }
        else if(n%i == 0){
            isPrime = 0;
        }
    }
    if(isPrime == 1){
        cout<<"Prime";
    }
    else{
        cout<<"Not a prime";
    }
    return 0;
}