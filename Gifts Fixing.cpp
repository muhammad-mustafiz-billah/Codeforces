/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,v,minC,minO,ans; cin >> n;
    while(t--){
        cin >> n;
        vector <int> a,b;
        for(int i=0; i<n; i++){
            cin >> v;
            a.push_back(v);
        }
        for(int i=0; i<n; i++){
            cin >> v;
            b.push_back(v);
        }
        minC = -1;
        minO = -1;
        for(int i=0; i<n; i++){
            if(a[i]>minC) minC = a[i];
            if(b[i]>minO) minO = b[i];
        }
        ans = 0;
        if(minO>minC){
            for(int i=0; i<n; i++){
                if(a[i]>minC && b[i]>minO){
                    ans += minC
                }
            }
        }
    }
}