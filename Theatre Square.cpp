/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a; cin >> n >> m >> a;
    long long l,b;
    if(n%a) l=(n/a)+1;
    else l = n/a;
    if(m%a) b=(m/a)+1;
    else b=m/a;
    long long k = l*b;
    cout << k << endl;
    // cout << INT_MAX << endl;

}