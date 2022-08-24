#include<iostream>
using namespace std;

//sum of n natural numbers

int main(){
    int n;
    cin>>n;

    //method 1

    //int sum = 0;
    // for(int i = 1; i<=n; i++){
    //     sum += i;
    // }
    // cout<<sum;

    //method 2 using formula
    // sum of n natural numbers = n*(n+1)/2

    int result = n*(n+1)/2;
    cout<<result;


}

