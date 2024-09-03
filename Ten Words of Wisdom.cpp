/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,key; cin >> t;
    while(t--){
        int n,v1,v2; cin >> n;
        vector <pair<int,int>> a;
        for(int i=0; i<n; i++){
            cin >> v1 >> v2;
            a.push_back(make_pair(v1,v2));
        }
        int max = -1;
        for(int i=0; i<n; i++){
            if(a[i].first <=10 && a[i].second > max) {max = a[i].second; key = i+1;}
        }
        cout << key << endl;
    }
}