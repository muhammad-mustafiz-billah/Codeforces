/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    vector <pair<string, string>> v;
    string s1,s2;
    for(int i=0; i<m; i++){
        cin >> s1 >> s2;
        v.push_back({s1, s2});
    }
    vector <string> s;
    for (int i=0; i<n; i++){
        cin >> s1; 
        s.push_back(s1);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i] == v[j].first){
                if(v[j].first.length()<=v[j].second.length()) cout << v[j].first << " ";
                else cout << v[j].second << " ";
                break;
            }
        }
    }
    cout << endl;
}