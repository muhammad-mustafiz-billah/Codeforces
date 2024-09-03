/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,s,e,n; cin >> t;
    while(t--){
        cin >> n;
        vector <pair<int,int>> a,b;
        for(int i=0; i<n; i++){
            cin >> s >> e;
            a.push_back({s,e});
        }
        for(int i=0; i<n; i++){
            if(a[i].second >= a[0].second) b.push_back({a[i].first, a[i].second});
        }
        int max = -1,key;
        for(int i=0; i<b.size(); i++){
            if(b[i].first >= max) {max = b[i].first;key=i;}
        }
        if(b[0].first==max && key==0) cout << max << endl;
        else cout << -1 << endl;
    }
}