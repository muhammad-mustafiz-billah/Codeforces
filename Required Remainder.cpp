/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x,y,n,r; cin >> t;
    while(t--){
        cin >> x >> y >> n;
        r = n%x;
        if(r>=y) cout << n-r+y << endl;
        else cout << n-r+y-x << endl;
    }
}