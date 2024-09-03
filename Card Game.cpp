#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int ans = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a > c && b >= d) {
            ans+=2;
        }
        else if(a >= c && b > d) {
            ans+=2;
        }
        if(b > c && a >= d) {
            ans+=2;
        }
        else if(b >= c && a > d) {
            ans+=2;
        }
        cout << ans << endl;    
    }
}