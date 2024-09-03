/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x,y,count; cin >> t;
    while(t--){
        count = 0;
        vector <pair<int,int>> a;
        for(int i=0; i<3; i++){
            cin >> x >> y;
            a.push_back({x,y});
        }
        
        if(a[0].first == a[1].first || a[0].second == a[1].second) count++;
        if(a[2].first == a[1].first || a[2].second == a[1].second) count++;
        if(a[0].first == a[2].first || a[0].second == a[2].second) count++;

        if(count != 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}