/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,x,y,a,b,ans,temp; cin >> t;
    while(t--){
        ans = 0;
        cin >> x >> y >> a >> b;
        if(y>x) {temp = x; x=y; y=temp;}
        if(2*a>=b){
           ans += y*b;
           ans += (x-y)*a;
        }
        else if(a<=b && 2*a<b){
            ans += (x+y)*a;
        }
        cout << ans << endl;
    }
}