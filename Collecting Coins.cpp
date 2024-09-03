/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c,n; cin >> t;
    while(t--){
        cin >> a >> b >> c >> n;
        if((a+b+c+n)%3==0 && a<=(a+b+c+n)/3 && b<=(a+b+c+n)/3 && c<=(a+b+c+n)/3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}