/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,sum; cin >> t;
    while(t--){
        sum=0;
        cin >> n;
        --n;
        for(long long i=n*4; i>=0; i-=8){
            sum += i*(n/2);
            n-=2;
        }
        cout << sum << endl;
    }
}