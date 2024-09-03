/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,v,sum; cin >> t;
    while(t--){
        cin >> n >> k;
        vector <int> a,b;
        for(int i=0; i<n; i++){
            cin >> v;
            a.push_back(v);
        }
        for(int i=0; i<n; i++){
            cin >> v;
            b.push_back(v);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i=0; i<k; i++){
            if(a[i]<b[n-1-i]){a[i]=b[n-1-i];}
            else break;
        }
        sum=0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        cout << sum << endl;
    }
}