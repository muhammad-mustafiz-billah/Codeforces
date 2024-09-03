#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,value,count; cin >> t;
    while (t--){
        count = 0;
        cin >> n;
        vector <int> a;
        for(int i=0; i<n; i++){
            cin >> value;
            a.push_back(value);
        }
        sort(a.begin(), a.end());
        // cout << a[0] << endl;
        for(int i=0; i<n-1; i++){
            if(a[i+1]-a[i]==0 || a[i+1]-a[i]==1){count++;}
        }
        if(count == n-1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}