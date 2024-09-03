/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,v; cin >> t;
    int max1, max2;
    while(t--){
        vector <int> a;
        for(int i=0; i<4; i++){
            cin >> v;
            a.push_back(v);
        }
        if(a[0]>a[1]) max1 = a[0];
        else max1 = a[1];
        if(a[2]>a[3]) max2 = a[2];
        else max2 = a[3];
        sort(a.begin(), a.end());
        if(max1+max2 == a[2]+a[3]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}