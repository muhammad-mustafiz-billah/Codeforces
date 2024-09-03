/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,count; cin >> t;
    string s;
    while(t--){
        count = 0;
        cin >> n;
        cin >> s;
        map <char, int> m;
        for(int i=0; i<n; i++){
            m[s[i]]++;
        }
        for(auto it: m){
            count += it.second+1;
        }
        cout << count << endl;
    }
}