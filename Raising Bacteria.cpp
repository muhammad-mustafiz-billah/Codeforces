/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int ans = 0;

    for(int i=0; i<1000; i++){
        // ans++;
        while(n%2==0){
            n/=2;
            if(n==0) break;
        }
        ans++;
        if(n==1) break;
        n-=1;
    }
    cout << ans << endl;
}