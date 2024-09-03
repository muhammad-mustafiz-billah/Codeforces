/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, v, sum; cin >> t;
    while(t--){
        sum = 0;
        cin >> n;
        while(n--){
            cin >> v;
            sum += v;
        }
        if( (long long)sqrt(sum)*(long long)sqrt(sum) == sum) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}