/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x, count=0; cin >> n >> m;
    if(m%n!=0) cout << -1 << endl;
    else{
        x = m/n;
        while(x!=1){
            if(x%2==0) {x/=2; count++;}
            else if(x%3==0) {x/=3; count++;}
            if(x!=1 && x%2!=0 && x%3!=0) {count=-1;break;}
        }
        cout << count << endl;
    }
}