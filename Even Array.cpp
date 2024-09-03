/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,v,countO, countE; cin >> t;
    while(t--){
        countO = 0;
        countE = 0;
        cin >> n;
        
        for(int i=0; i<n; i++){
            cin >> v;
            if(i%2!=0 && v%2==0) countO++;
            else if(i%2==0 && v%2!=0) countE++;
        }
        if(countE==countO) cout << countE << endl;
        else cout << -1 << endl;
    }
}