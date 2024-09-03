/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        string str = "abcdefghijklmnopqrstuvwxyz";
        str  = str.substr(0, k);
        while(n--) cout << str;
        cout << endl;
    }
    
}