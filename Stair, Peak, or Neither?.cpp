#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a, b, c;
    while(n--){
        cin >> a >> b >> c;
        if(a < b && b < c) cout << "STAIR" << endl;
        else if( a < b && b > c) cout << "PEAK" << endl;
        else cout << "NONE" << endl;
    }
}