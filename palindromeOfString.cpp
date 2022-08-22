#include<iostream>
using namespace std;

//palindrome of a string

int main(){
    string s;
    cin>>s;
    
    bool flag = false;

    int len = s.length();

    for(int i = 0; i<len; i++){
        if(s[i] != s[len-i-1]){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"Not a palindrome";
    }
    else{
        cout<<"Palindrome";
    }
}
