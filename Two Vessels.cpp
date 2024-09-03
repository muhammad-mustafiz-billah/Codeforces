#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b,c; cin >> a >> b >> c;
        int diff = abs(a-b), ans;
        if(diff%2) diff++;
        ans = diff/2;
        if(ans%c==0) cout << ans/c << endl;

        else cout << ans/c+1 << endl;
    }
}