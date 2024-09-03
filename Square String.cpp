/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s,s1,s2;
        cin >> s;
        int n = s.length();
        if(n%2) cout << "NO" << endl;
        else{
            s1 = s.substr(0,n/2);
            s2 = s.substr(n/2,n/2);
            if(s1==s2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
       
}