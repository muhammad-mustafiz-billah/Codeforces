#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k; cin >> t;
    while(t--){
        cin >> n >> k;
        int a[n];
        int b[n][n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << min(a[i],a[j]) << " ";
            }
            cout << endl;
        }
    }
}