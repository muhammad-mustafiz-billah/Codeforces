/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n; cin >> t;
    while(t--){
        cin >> n;
        if(n<2) cout << 1 << endl;
        else if(n%2==1) cout << n/2+1 << endl;
        else cout << n/2 << endl;
    }
}