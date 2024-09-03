/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,n; cin >> t;
    while(t--){
        cin >> a >> b;
        if((a+b) & 1) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
}