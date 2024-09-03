#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, b; cin >> t;
    
    while(t--){
        cin >> n >> a >> b;
        for(int i=0,j=0; i<n; i++){
            if(j==b) j=0;
            if(j<b){
                cout << (char)(97+j);
                j++;
            }
        }
        cout << endl;
    }
}