#include<iostream>
using namespace std;

//code to check whether a number is even or odd

int main(){
    int n;
    cin>>n;
    //method 1

    // if(n%2 == 0){
    //     cout<<"the number is even";
    // }
    // else{
    //     cout<<"the number is odd";
    // }

    //method 2 ternary operator
    (n % 2 == 0)?cout<<"Even":cout<<"Odd";
    
}