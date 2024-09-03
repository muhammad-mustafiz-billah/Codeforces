/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,v,ko,ke,co=0,ce=0; cin >> n;
    for(int i=0; i<n; i++){
        cin >> v;
        if(v%2) {co++; ko = i+1;}
        else {ce++; ke = i+1;}
    }
    if(ce==1) cout << ke << endl;
    else if(co==1) cout << ko << endl;
}