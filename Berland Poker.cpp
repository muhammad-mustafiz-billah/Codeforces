/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m,k,ans,max_card; cin >> t;
    while(t--){
        cin >> n >> m >> k;
        if(n/k>=m) ans = m;
        else if(n/k<m){
            max_card = n/k;
            m-=max_card;
            k--;
            if(m%k!=0) ans = m/k+1;
            else ans = m/k;
            ans = max_card - ans;
        }
        cout << ans << endl;
    }
}