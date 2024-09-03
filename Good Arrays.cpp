/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,v; cin >> t;
    while(t--){
        map <int,int> m;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> v;
            m[v]++;
        }
        long long max=0,max_;
        auto it = m.begin();
        for(it = ++m.begin(); it != m.end(); it++){
            max += it->second;
        }
        max_=(--m.end())->first;
        // cout << max << endl;
            if(m.size()==1) cout << "NO" << endl;
            else if(m[1]>max &&  m[1]>max_) cout << "NO" << endl;
            else cout << "YES" << endl;
    }

    
}