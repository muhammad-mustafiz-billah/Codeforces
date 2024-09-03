/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,v,avg,max,max_index,min,min_index; cin >> t;
    here:
    while(t--){
        max = -1;
        min = INT_MAX;
        vector <int> a;
        for(int i=0; i<3; i++){
            cin >> v;
            if(max<v) max = v;
            if(min>v) min = v;
            a.push_back(v);
        }
        for(int i=0; i<3; i++){
            if(max==a[i]) {max_index = i;}
            if(min==a[i]) {min_index = i;}
        }
        if(max_index!=1){
            avg = abs(a[2]-a[0])/2;
            if(avg%a[min_index]==0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            if(abs(a[0]-a[1])%a[2]==0 || abs(a[2]-a[1])%a[0]==0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}