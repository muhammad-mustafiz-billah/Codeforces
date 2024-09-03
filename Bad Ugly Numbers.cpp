/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
    int i;
    for(i=2; i<=sqrt(n); i++){
        if(n%i==0)break;
    }
    if(i>sqrt(n)) return 1;
    else return 0;
}

int main(){
    int t,n,p,flag; cin >> t;
    int ans;
    while(t--){
        flag = 1;
        ans = -1;
        cin >> n;
        for(int i=2*pow(10,n-1)+1; i<pow(10,n); i+=2){
            flag=1;
            if(isPrime(i)==1){
                p = i;
                while(p){
                    if(p%10==1||p%10==0) {flag = 0;break;}
                    p/=10;
                }
                if(flag) {ans = i;break;}
            }
        }
        if(n!=1)cout << ans << endl;
        else cout << -1 << endl;
    }
}