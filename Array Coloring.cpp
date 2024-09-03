#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,v,sum; cin >> t;
    while(t--){
        sum = 0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> v;
            sum += v;
        }
        if(sum%2==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}