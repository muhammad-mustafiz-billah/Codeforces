/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,temp; cin >> t;
    while(t--){
        cin >> a >> b;
        if(a<b){temp=a; a=b; b=temp;}
        if(2*b<a) cout << a*a << endl;
        else cout << 4*b*b << endl;
    }
}