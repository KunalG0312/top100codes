#include<iostream>
using namespace std;

//greatest of three numbers

int main(){
    int i,j,k;
    cin>>i>>j>>k;
    //method 1 using ternary opertor
    // int temp, result;
    // temp = i>j?i:j;
    // result = temp>k?temp:k;

    // cout<<result;

    //method 2 using inbuilt max function
    int result = max(i,max(j,k));
    cout<<result;
}