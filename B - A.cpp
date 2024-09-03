/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    while(t--){
        int n, sum =0; cin >> n;
        int a[n]; for(int i=0; i<n; i++) cin >> a[i];
        for(int i=1; i<n; i++){
            if(a[i] < a[i-1]) sum += i;
        }
        cout << sum << endl;
    }
}