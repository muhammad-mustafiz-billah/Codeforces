/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,v,key; cin >> t;
    while (t--){
        vector <int> a;
        for(int i=0; i<4; i++){
            cin >> v;
            if(i==0) key=v;
            a.push_back(v);
        }
        sort(a.rbegin(), a.rend());
        for(int i=0; i<4; i++){
            if(key==a[i]){
                cout << i << endl;
                break;
            }
        }
    }
    
}