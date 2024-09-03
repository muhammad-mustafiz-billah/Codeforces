#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x; cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<30; i++){
            x = pow(2,i+1)-1;
            if(n % x == 0){
                cout << n/x << endl;
                if(x>=n/2) break;
                break;
            }
        }
    }
}