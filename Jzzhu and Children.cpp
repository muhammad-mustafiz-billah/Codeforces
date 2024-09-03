/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,v,i=1; cin >> n >> m;
    int max=-1,max_index=n;
    for(i=1; i<=n; i++){
        cin >> v;
        if(v%m==0) v/=m;
        else v = v/m+1;
        if(max <= v) {max = v; max_index=i;}
    }
    cout << max_index << endl;
}