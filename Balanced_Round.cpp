/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,count,v; cin >> t;
    while(t--){
        count=0;
        cin >> n >> k;
        vector <int> a;
        for(int i=0; i<n; i++){
            cin >> v; a.push_back(v);
        }
        sort(a.begin(), a.end());
        int max = -1;
        for(int i=0; i<n-1; i++){
                if(a[i+1]-a[i]<=k) count++;
                else {
                    if(max < count) max = count;
                    count = 0;
                }
        }
        if(max < count) max = count;
        cout << n-max-1 << endl;
    }
}