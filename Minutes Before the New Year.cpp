/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,h,m; cin >> t;
    while(t--){
        cin >> h >> m;
        m = 60 - m;
        h = 24 - h - 1;
        cout << h*60+m << endl;
    }
}