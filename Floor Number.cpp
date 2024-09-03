/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x; cin >> t;
    while(t--){
        cin >> n >> x;
        if(n<=2) {cout << 1 << endl;continue;}
        if(x>=2) n-=2;
        if(x==1) cout << n-1 << endl;
        else if(n%x==0) cout << n/x+1 << endl;
        else cout << n/x+2 << endl;
    }
}