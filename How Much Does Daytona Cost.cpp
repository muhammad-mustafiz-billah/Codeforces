/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,i; cin >> t;
    int v;
    while(t--){
        cin >> n >> k;
        vector <int> a;
        for(i=0; i<n; i++){
            cin >> v;
            a.push_back(v);
        }

        auto it = find(a.begin(), a.end(), k);
        
        if(it!=a.end()) cout << "YES" << endl;
        else cout << "NO" <<endl;
    }
}