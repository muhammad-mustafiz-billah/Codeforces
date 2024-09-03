/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,v; cin >> t;
    int count, max;
    while(t--){
        count = 0;
        max = -1;
        cin >> n;
        vector <int> a,b;
        for(int i=0; i<n; i++){
            cin >> v;
            a.push_back(v);
        }
        for(int i=1,j=0; i<=2*n; i++){
            if(a[j]!=i) {b.push_back(i);count++;j++;}
            if(count == n) break;
        }
        for(int i=0; i<n; i++){
            if(max < b[i]) max=b[i];
        }
        cout << max << endl;
    }
}