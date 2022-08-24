#include<iostream>
using namespace std;

//sum of n numbers in a range

int main(){
    int sum = 0;
    int n;
    cout<<"Enter first number of the range : ";
    cin>>n;
    int m;
    cout<<"Enter the last number of the range : ";
    cin>>m;   

    //method 1 using brute force
    // for(int i = n; i<=m; i++){
    //     sum += i;
    // }
    // cout<<"The sum : "<<sum;
    // return 0;

    //method 2 using formula
    int result = m*(m+1)/2 - n*(n+1)/2 + n;
    cout<<result;
    return 0;
}