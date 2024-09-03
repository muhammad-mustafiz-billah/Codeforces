/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=0, b=0, n; cin >> n;
    string c,strb;
    vector <string> s;
    for(int i=0; i<n; i++){
        cin >> c;
        s.push_back(c);
    }
    string key = s[0];
    for(int i=0; i<n; i++){
        if(key==s[i]) a++;
        else{
            b++;
            strb = s[i];
        }
    }
    if(a>b) cout << key << endl;
    else cout << strb << endl;
}