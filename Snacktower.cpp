/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, v, max; cin >> n;
    int count=n;
    vector<int> a,b;
    for(int i=0; i<n; i++){
        cin >> v;
        a.push_back(v);
        b.push_back(v);
    }
    sort(b.rbegin(), b.rend());
    max = b[0];
    for(int i=0,j=0; i<n; i++){
        if(a[i]<=b[j]){
            cout << b[i] << endl;
            max--;
            j++;
        }
        else{
            cout << endl;
        }
    }
    
}