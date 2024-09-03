/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int flag = 1;
    
    for(int i=1; i<s.length(); i++){
        if(s[i]>=65 && s[i]<=90) flag = 1;
        else {flag = 0;break;}
    }
    if(flag){
        if(s[0]>=97) s[0] -= 32;
        else s[0]+= 32;
        cout << s[0];
        for(int i=1; i<s.length(); i++){
            s[i] = tolower(s[i]);
            cout << s[i];
        }
        cout << endl;
    }
    else cout << s << endl;
}