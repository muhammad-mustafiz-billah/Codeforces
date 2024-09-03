/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,v; cin >> n >> m;
    long long ans = 0, ki =1;
    for(long i=0; i<m; i++){
        cin >> v;
        if(ki<=v) ans += (v-ki);
        else ans += (n-ki+v);
        ki = v;
    }
    cout << ans << endl;
}