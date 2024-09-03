/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,v; cin >> t;
    while(t--){
        vector <int> a;
        for(int i=0; i<3; i++){
            cin >> v;a.push_back(v);
        }
        sort(a.begin(),a.end());
        if(a[2]+a[1]>=10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}