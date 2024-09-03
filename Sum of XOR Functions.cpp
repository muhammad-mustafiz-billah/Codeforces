/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,v; cin >> n;
    vector <int> a;
    for(int i=0; i<n; i++){
        cin >> v;
        a.push_back(v);
    }
    int M = 998244353;
    int x_or = (a[0]^a[1])%M;
    for(int i=2; i<n; i++){
        x_or = (x_or^a[i])%M;
    }
    cout << x_or << endl;
}