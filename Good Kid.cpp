/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,v,product; cin >> t;
    while(t--){
        cin >> n;
        vector <int> a;
        for(int i=0; i<n; i++){
            cin >> v;
            a.push_back(v);
        }
        sort(a.begin(), a.end());
        a[0]++;
        product=1;
        for(int i=0; i<n; i++){
            product *=a[i];
        }
        cout << product << endl;
    }
}