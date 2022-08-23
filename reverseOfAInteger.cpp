#include<iostream>
using namespace std;

//reverse of an integer

int main(){
    int num,reverse = 0;
    int rem;
    cin>>num;
    
    while(num!=0){
        rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;
    }
    cout<<"Reversed number : "<<reverse;
    return 0;
}