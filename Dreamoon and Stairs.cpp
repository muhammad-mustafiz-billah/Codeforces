/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i; cin >> n >> m;
    if(n<m){cout << -1 << endl;return 0;}
    if(n%2==0)i=n/2;
    else i=n/2+1;
    for(; ;i++){
        if(i%m==0){
            cout << i << endl;
            return 0;
        }
    }
}