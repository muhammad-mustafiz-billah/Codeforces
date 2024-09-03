/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,k; cin >> t;
    long long x;
    long long sum_max,sum_min;
    while(t--){
        sum_max=0, sum_min=0;
        cin >> n >> k >> x;
        
            if(k%2==0){
                sum_max = (2*n-k+1)*(k/2);
            }
            else{
                sum_max = (2*n-k+1)*(k/2) + (2*n-k+1)/2;
            }
            sum_min = k*(k+1)/2;
        if(sum_max>=x && sum_min<=x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}