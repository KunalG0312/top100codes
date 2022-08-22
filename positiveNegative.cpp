#include <iostream>
using namespace std;

//cpp code to check whether a number is positive or negative

int main(){
    int n;
    cin>>n;
    //method 1

    // if(n<0){
    //     cout<<"the number is negative"<<endl;
    // }
    // else if(n == 0){
    //     cout<<"the number is zero"<<endl;
    // }
    // else{
    //     cout<<"the number is positive"<<endl;
    // }

    //method 2 nested if else

    // if(n>=0){
    //     if(n == 0){
    //         cout<<"Zero";
    //     }
    //     else{
    //         cout<<"Positive";
    //     }
    // }
    // else{
    //     cout<<"Negative";
    // }

    //method 3 ternary operator
    if(n == 0){
        cout<<"Zero";
    }
    else{
        (n>0)?cout<<"Positive":cout<<"Negative";
    }
}