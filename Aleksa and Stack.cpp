/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,v,k=1,i,j=0; cin >> t;
    while(t--){
        cin >> n; 
        vector <int> a;
        for( i=k, j=0;j<n ; i+=2,j++){
            a.push_back(i);
        }
        for(int i: a){
            cout << i << " ";
        }
        cout << endl;
        k=i;
    }
}