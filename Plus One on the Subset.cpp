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
        cout << a[n-1]-a[0] << endl;
    }
}