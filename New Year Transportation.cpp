/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,t,v,i; cin >> n >> t;
    vector <long long> a;
    for(i=0; i<n; i++){
        cin >> v;
        a.push_back(v);
    }
    long long sum=1;
    for(i=0; i<=n; i++){
        if(i+1==sum) sum+=a[i];
        if(sum==t) break;
    }
    if(i<n) cout << "YES" << endl;
    else cout << "NO" << endl;
}