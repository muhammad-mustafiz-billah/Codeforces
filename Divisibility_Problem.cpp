#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,ans; cin >> t;
    int a[t],b[t];
    for(int i=0; i<2*t; i++){
        if (i%2==0) cin >> a[i/2];
        else if(i%2==1) cin >> b[i/2];
    }
    for(int i=0; i<t; i++){
        if(a[i]%b[i]==0){
            cout << 0 << endl;
        }
        else {
            ans = b[i] - (a[i]%b[i]);
            cout << ans << endl;
        }
    }
}