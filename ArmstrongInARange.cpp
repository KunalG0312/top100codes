#include<iostream>
#include<math.h>

using namespace std;

//armstrong in a given range

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i = n; i<=m; i++){
        int len = 0;
        int x = i;
        while(x!=0){
            x = x/10;
            ++len;
        }

        int sum = 0;
        x = i;
        while(x != 0){
            int digit = x%10;
            sum = sum + pow(digit, len);
            x = x/10;
        }
        if(sum == i){
            cout<<i<<" ";
        }
    }
}
