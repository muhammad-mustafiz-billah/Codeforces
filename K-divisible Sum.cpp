/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,d; cin >> t;
    while(t--){
        cin >> n >> k;
        if(k==1) cout << 1 << endl;

        else if(n<=k){
            if(k%n==0) cout << k/n << endl;
            else cout << k/n+1 << endl;
        }
        else{
            if(n%k==0) k = (n/k)*k;
            else k = (n/k+1 )*k;
            if(k%n==0) cout << k/n << endl;
            else cout << k/n+1 << endl;
            // if(n%k==0) cout << n/k << endl;
            // else cout << n/k+1 << endl;
        }
    }
}