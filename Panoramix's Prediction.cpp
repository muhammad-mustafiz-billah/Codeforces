/*
****@Author:Muhammad Mustafiz Billah*****
*/
int is_prime(int m){
    int i;
    for(i=2; i<m; i++){
        if(m%i==0) break;
    }
    if(i==m) return 1;
    else return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,flag=0; cin >> n >> m;
    for(i=n+1; i<=m; i++){
        if(is_prime(i)==1){flag = 1;break;}
    }
    if(flag==1 && i==m) cout << "YES" << endl;
    else cout << "NO" << endl;
    // cout << is_prime(11) << endl;
}