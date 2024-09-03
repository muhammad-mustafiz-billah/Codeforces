/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k, ans, count; cin >> t;
    string s;
    while (t--){
        count = 0;ans=0;
        cin >> n >> k;
        cin >> s;
        for(int i=0; i<n; ){
            if(s[i]=='B'){
                ans++;
                i+=k;
            }
            else{
                count++;
                if(count == n) break;
                i++;
            }
        }
        cout << ans << endl;
    }
    
}