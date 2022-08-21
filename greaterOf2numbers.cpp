#include<iostream>
using namespace std;

//check whether a or b is greater

int main(){
    int a,b;
    cin>>a>>b;
    //method 1 using ternary operators
    // a>b?cout<<a<<" is greater.":cout<<b<<" is greater.";

    //method 2 using max(a,b) function
    cout<<max(a,b)<<" is greater.";
}