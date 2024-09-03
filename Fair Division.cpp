/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,v,count1, count2, sum; cin >> t;
    while(t--){
        count1 = count2 = sum = 0;
        cin >> n;
        vector <int> a;
        for(int i=0; i<n; i++){
            cin >> v;
            sum += v;
            if(v%2) count1++;
            else count2++;
        }
        if(sum%2) cout << "NO" << endl;
        else if(sum%2==0 && count2==n) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}