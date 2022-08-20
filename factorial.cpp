#include<iostream>
using namespace std;

//factorial of a number

int main(){
    int n;
    cin>>n;
    int result = 1;
    for(int i = 1; i<=n; i++){
        result = result * i;
    }
    cout<<result;
}