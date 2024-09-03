#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, count; cin >> t;
    string s;
    while(t--){
        count = 0;
        cin >> s;
        for(int i = 0; i < s.length()-1; i++){
            if(s[i] == s[i+1]) count++;
        }
        if(s.length() == 1) cout << "NO" << endl;
        else if(s.length()-1 == count) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(int i = 1; i < s.length(); i++){
                if(s[i] != s[0]) swap(s[i],s[0]);
            }
            cout << s << endl;
        }
    }
}