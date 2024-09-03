/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,i,ans; cin >> n >> t;
    if(n>=5){
        cout << 63000;
        for(int i=0; i<n-5; i++){
            cout << 0;
        }
        cout << endl;
    }
    else{
        for(int i=pow(10, n-1); i<pow(10, n); i++){
            if(i%t==0){
                cout << i << endl;
                return 0;
            }
        }
        cout << -1 << endl;
    }
}