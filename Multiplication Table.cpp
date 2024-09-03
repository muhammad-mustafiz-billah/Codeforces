/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x; cin >> n >> x;
    int count = 0;
    if(n>x){
        for(int i=1; i<=sqrt(x); i++){
            if(x%i==0 && x/i<=n){
                count++;
            }
        }
    }
    else{
        for(int i=1; i<=sqrt(x); i++){
            if(x%i==0 && x/i<=n){
                count++;
            }
        }
    }
    if(x==1 || n*n==x) cout << 1 << endl;
    else cout << 2*(count) << endl;
    // else cout << 2*count << endl;
}