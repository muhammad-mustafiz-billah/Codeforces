/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,sum,p;float sumd; cin >> t;
    while(t--){
        sumd=0;
        cin >> n;
        p=n;
        while(p>0){
            sumd+=p%10;
            p/=10;
        }
        sum = round((sumd-5)/10);
        while(n>0){
            sum+=n;
            n/=10;
        }
        cout << sum << endl;
    }
}