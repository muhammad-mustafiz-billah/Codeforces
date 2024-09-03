#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, s, m, x, y; cin >> t;
    while(t--){
        cin >> n >> s >> m; 
        vector <pair<int, int>> v;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            v.push_back({x,y});
        }

        int ans = v[0].first;
        for(int i = 0; i < n-1; i++){
            if(ans < v[i+1].first - v[i].second) ans = v[i+1].first - v[i].second;
        }
        if(ans < m - v[n-1].second) ans = m - v[n-1].second;

        if(ans >= s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}