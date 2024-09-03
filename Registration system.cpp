/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string v;
    map <string, int> m;
    for(int i=0; i<n; i++){
        cin >> v;
        m[v]++;
        if(m[v]==1) cout << "OK" << endl;
        else cout << v << m[v]-1 << endl;
    }
}