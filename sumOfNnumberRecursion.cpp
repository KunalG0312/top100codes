#include<iostream>
using namespace std;

//sum of n natural numbers using recursion

int getSum(int n){
    if(n == 0){
        return n;
    }

    return n + getSum(n-1);
}

int main(){
    int n;
    cin>>n;

    int sum = getSum(n);
    cout<<sum;
}