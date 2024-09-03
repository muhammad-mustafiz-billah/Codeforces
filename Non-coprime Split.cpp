#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,flag; cin >> t;
    while(t--){
        flag = 0;
        int l,r; cin >> l >> r;
        
        vector <pair<int, int>> a;
        for(int i=l; i<r; i++){
            for(int j=i+1; j<=r; j++){
                if(gcd(i,j)!=1){
                    cout << i << " " << j << endl;
                    flag = 1;
                    goto endloop;
                }
            }
        }
        endloop:
        if(flag==0) cout << -1 << endl;
    }
}