/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0; cin >> n;
    string s,ss; cin >> s;
    map <string,int> m;
    for(int i=0; i<n-1; i++){
        ss=s.substr(i,2);
        m[ss]++;
    }
    int max = -1;
    for(auto pr : m){
        if(pr.second>max) max = pr.second;
    }
    for(auto pr : m){
        if(pr.second==max) {cout << pr.first << endl;break;}
    }
}