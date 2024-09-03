/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a,b,c,d; cin >> t;
    while(t--){
        cin >> n >> a >> b >> c >> d;
        if((n*(a-b)) > c+d){cout << "No" << endl;}
        else if((n*(a+b)) < c-d){cout << "No" << endl;}
        else cout << "Yes" << endl;
    }
}