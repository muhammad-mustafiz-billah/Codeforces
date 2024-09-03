/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b; cin >> n >> a >> b;
    if(n-a>0 && n-a<=b) cout << n-a << endl;
    else if(n-a>b) cout << b+1 << endl;
    else cout << 0 << endl;
}