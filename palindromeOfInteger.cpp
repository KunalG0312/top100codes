#include<iostream>
using namespace std;

//palindrome of an integer

int main(){
    int num,reverse=0;
    int rem,temp;
    cin>>num;
    temp = num;

    while(temp!=0){
        rem = temp%10;
        reverse = reverse * 10 + rem;
        temp = temp/10;
    }
    if(num == reverse){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
}