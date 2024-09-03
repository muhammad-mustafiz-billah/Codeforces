#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x = n/100;
        int y = n%100;
        if((x==10 && y>=10) || (x==1 && y>1 && y<10)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}