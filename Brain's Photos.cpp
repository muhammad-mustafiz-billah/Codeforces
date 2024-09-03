/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m_n; cin >> n >> m_n;
    char c;
    map <char, int> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m_n; j++){
            cin >> c;
            m[c]++;
        }
    }
    if(m['C']>=1 || m['M']>=1 || m['Y'] >= 1) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;
}