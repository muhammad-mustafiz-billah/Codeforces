/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n,v1,v2; cin >> s >> n;
    vector <pair<int,int>> a;
    for(int i=0; i<n; i++){
        cin >> v1 >> v2;
        a.push_back(make_pair(v1, v2));
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        if(s<=a[i].first){
            cout << "NO" << endl;
            return 0;
        }
        else{
            s = s+a[i].second;
        }
    }
    cout << "YES" << endl;
}