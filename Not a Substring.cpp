/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,cs,ce,flag; cin >> t;
    string s;
    while(t--){
        cs = 0, ce = 0, flag = 0;
        cin >> s;
        n = s.length();
        vector <char> a;
        for(int i=0; i<n; i++){
            a.push_back(s[i]);
        }
        for(int i=0; i<a.size(); i++){
            if(a[i]==')' && cs<=ce){
                int* x = &a[0];
                flag = 1;
                a.insert(&a[i],'(');
                cs++,ce++;
            }
        }
        cs = 0, ce = 0;
        for(auto it: a){
            if(it=='(' && ce<=cs){
                flag = 1;
                a.insert(&it,')');
                cs++,ce++;
            }
        }
        if(flag==0) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(auto it: a){
                cout << it;
            }
            cout << endl;
        }
    }
}