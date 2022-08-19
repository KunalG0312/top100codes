#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i;
    cin>>i;
    int len = 0;
    int sum = 0;
    int x = i;
    while(x){
        len++;
        x = x/10;
    }
    int temp = i;
    while(temp!=0){
        int digit = temp%10;
        sum = sum + pow(digit, len);
        temp /= 10;
    }
    if(i == sum){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not a Armstrong";
    }
}