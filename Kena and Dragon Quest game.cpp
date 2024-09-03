/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m,x; cin >> t;
    while(t--){
        cin >> x >> n >> m;
        if(x>20){
            while(n--){
                x = x/2+10;
                if(x<=20) {break;}
            }
        }
        if(x>0){
            while(m--){
                x-=10;
                if(x<=0) {cout << "YES" << endl;break;}
            }
        }
        if(x>0) cout << "NO" << endl;
    }
}