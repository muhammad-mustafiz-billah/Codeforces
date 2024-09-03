/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,v,count,key,key_end,flag,n; cin >> t;
    string str, p;
    while(t--){
        cin >> n;
        flag = 0;
        cin >> str;
        map <char, int> s;
        for(int i=0; i<str.length(); i++){
            s[str[i]]++;
        }
        for(auto it: s){
            count = 0;
            for(int i=0; i<n; i++){
                if(it.first==str[i]) count++;
                else{
                    if(count) break;
                    count = 0;
                }
            }
            if(count < it.second) {flag=1;break;}
        }
        if(flag==1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}