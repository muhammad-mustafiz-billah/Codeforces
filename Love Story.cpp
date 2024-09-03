#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, ans; cin >> t; 
    while(t--){
        ans = 0;
        string s; cin >> s;
        if(s[0]!='c') ans++;
        if(s[1]!='o') ans++;
        if(s[2]!='d') ans++;
        if(s[3]!='e') ans++;
        if(s[4]!='f') ans++;
        if(s[5]!='o') ans++;
        if(s[6]!='r') ans++;
        if(s[7]!='c') ans++;
        if(s[8]!='e') ans++;
        if(s[9]!='s') ans++;
        cout << ans << endl;
    }
}