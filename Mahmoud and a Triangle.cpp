/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,v,flag=0; cin >> n;
    int p=n;
    vector <int> a;
    while (p--){
        cin >> v;
        a.push_back(v);
    }
    sort(a.rbegin(), a.rend());
    for(int i=0; i<n-2; i++){
        if(a[i+1]+a[i+2]>a[i]) {flag = 1; break;}
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}