#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m,x_or,max,min; cin >> t;
    while(t--){
        max = -1;
        min = INT_MAX;
        cin >> n >> m;
        int a[n], b[m],a_prime[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                a_prime[j] = a[j] | b[i];
            }
            x_or =  a_prime[1] ^ a_prime[0];
            for(int j=2; j<n; j++){
                x_or ^= a_prime[j]; 
            }
            b[i] = x_or;
        }
        x_or =  a[1] ^ a[0];
        for(int j=2; j<n; j++){
            x_or ^= a[j]; 
        }
        for(int i=0; i<m; i++){
            if(b[i] > max) max = b[i];
            if(b[i] < min) min = b[i];
            if(x_or > max) max = x_or;
            if(x_or < min) min = x_or;
        }
        cout << min << " " << max << endl;
    }
}