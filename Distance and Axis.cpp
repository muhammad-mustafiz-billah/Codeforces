/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,step; cin >> t;
    while(t--){
        cin >> n >> k;
        if(k<=n){
            if(n%2==k%2) cout << 0 << endl;
            else cout << 1 << endl;
        } 
        else cout << abs(n-k) << endl;
    }
}