/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,v; cin >> t;
    while(t--){
        cin >> n;
        vector <int> a;
        for(int i=0; i<n; i++){
            cin >> v;
            a.push_back(v);
        }
        sort(a.begin(), a.end());
        v = 1000;
        for(int i=0; i<n-1; i++){
            if(v>a[i+1]-a[i]) v = a[i+1]-a[i];
        }
        cout << v << endl;
    }
}