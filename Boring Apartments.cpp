/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,ans,d; cin >> t;
    string s;
    while(t--){
        ans = 0;
        cin >> s;
        d = (int)s[0]-48;
        
        ans = ((d-1)*10);
        if(s.length() == 1 ) ans += 1;
        else if(s.length() == 2) ans += 3;
        else if(s.length() == 3) ans += 6;
        else if(s.length() == 4) ans += 10;
        cout << ans << endl;
    }
}