/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n; cin >> t;
    string x = "Timru";
    while(t--){
        cin >> n;
        string s;cin >> s;
        if(s.length()==5){
            sort(s.begin(), s.end());
            // cout << s << endl;
            if(s == x) cout << "YES" << endl;
            else cout << "NO" <<endl;
        }
        else cout << "NO" <<endl;
    }
}