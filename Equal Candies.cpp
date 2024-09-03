/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,v,sum; cin >> t;
    while(t--){
        sum = 0;
        cin >> n;
        int min = 10000001;
        for(int i=0; i<n; i++){
            cin >> v;
            if(min>v) min = v;
            sum+=v;
        }
        cout << sum-n*min << endl;  
    }
}