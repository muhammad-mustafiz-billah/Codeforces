/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n; cin >> t;
    while(t--){
        cin >> n;
        if(n%4) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            vector <int> a;
            for(int i=2; i<=n; i+=2){
                a.push_back(i);
            }
            for(int i=1; i<n-1; i+=2){
                a.push_back(i);
            }
            a.push_back(n+((n/2)-1));
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}