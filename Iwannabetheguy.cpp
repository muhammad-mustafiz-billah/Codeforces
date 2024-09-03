/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int p,q,value;

    map <int, int> m;

    cin >> p;
    for(int i=0; i<p; i++){
        cin >> value;
        m[value]++;
    }

    cin >> q;
    for(int i=0; i<q; i++){
        cin >> value;
        m[value]++;
    }
    
    if(m.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
}