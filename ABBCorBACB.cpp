/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,ans; cin >> t;
    string s;
    while(t--){
        ans = 0;
        cin >> s;
        int j= s.length();
        while(j--){
            for(int i=0; i<s.length(); ){
                if(s[i]=='A' && s[i+1]=='B'){
                    s.replace(i,1,"B");
                    s.replace(i+1,1,"C");
                    // s[i] = 'B';
                    // s[i+1] = 'C';
                    ans++;
                    i+=2;
                }
                else if(s[i]=='B' && s[i+1]=='A'){
                    s.replace(i,1,"C");
                    s.replace(i+1,1,"B");
                    // s[i] = 'C';
                    // s[i+1] = 'B';
                    ans++;
                    i+=2;
                }
                else i++;
            }
        }
        cout << ans << endl;
    }
}