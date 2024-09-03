/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    if(s.length()<5) {cout << "NO" << endl; return 0;}
    vector <char> a;
    int kh=0,ke=0,kl=0,ko=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='h' && kh==0) {a.push_back(s[i]);kh++;}
        else if(s[i]=='e' && ke==0 && kh==1) {a.push_back(s[i]);ke++;}
        else if(s[i]=='l' && kl<=1 && kh==1 && ke==1) {a.push_back(s[i]);kl++;}
        else if(s[i]=='o' && ko==0 && kh==1 && ke==1 && kl==2) {a.push_back(s[i]);ko++;}
    }

    if(a[0]=='h' && a[1]=='e' && a[2]=='l' && a[3]=='l' && a[4]=='o') cout << "YES" <<endl;
    else cout << "NO" << endl;
}