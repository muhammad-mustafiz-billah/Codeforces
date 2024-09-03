#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0; cin >> n;
    while(n>0){
        if(n/100 >= 1){
            ans += (n/100);
            n %= 100;
        }
        if(n/20 >= 1){
            ans += (n/20);
            n %= 20;
        }
        if(n/10 >= 1){
            ans += (n/10);
            n %= 10;
        }
        if(n/5 >= 1){
            ans += (n/5);
            n %= 5;
        }
        if(n/1 >= 1){
            ans += (n/1);
            n %= 1;
        }
    }
    cout << ans << endl;
}