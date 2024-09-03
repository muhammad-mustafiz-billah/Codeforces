/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        pair<int,int> p;
        cin >> p.first;
        cin >> p.second;
        cout << max(p.first,p.second) << endl;
    }
}