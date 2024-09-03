/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q; cin >> n;
    int max=n+1;
    int min=n+1,flag=0;
    vector <pair<int,int>> a;
    for(int i=0; i<n; i++){
        cin >> p >> q;
        if(min>q) {min = q;max=p;}
        a.push_back({p,q});
    }
    for(int i=0; i<n; i++){
        if(a[i].second>min && a[i].first<max) {cout << "Happy Alex" << endl;flag=1;break;}
    }
    if(flag==0) cout << "Poor Alex" << endl;
}