/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,ans; cin >> t;
    while(t--){
        cin >> n;
        if (n==0||n==1) cout << 0 << endl;
        else if(n%2) cout << n-2 << endl;
        else cout << n-1 << endl;
    }
}