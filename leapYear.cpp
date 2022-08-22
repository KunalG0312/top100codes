#include<iostream>
using namespace std;

//check whether year is leap or not

int main(){
    int n;
    cin>>n;

    //using ternary operator

    // int flag = (n%400 ==0) || (n%4 == 0 && n%100 != 0)? 1:0;
    // if(flag == 1){
    //     cout<<"It's a leap year";
    // }
    // else{
    //     cout<<"It's not a leap year";
    // }

    //using if else statements
    if((n%400 == 0) || (n%4 == 0 && n%100 != 0)){
        cout<<"Its a leap year";
    }
    else{
        cout<<"Its not a leap year";
    }
    return 0;
}