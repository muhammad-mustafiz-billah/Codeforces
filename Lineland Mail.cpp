/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,v; cin >> n;
    vector <int> a;
    for(int i=0; i<n; i++){
        cin >> v;
        a.push_back(v);
    }
    for(int i=0; i<n; i++){
        if(i==0){
            cout << a[1]-a[0] << " " << a[n-1]-a[0] << endl;
        }
        else if(i==n-1){
            cout << a[n-1]-a[n-2] << " " << a[n-1]-a[0] << endl;
        }
        else{
            if(a[i+1]-a[i]<=a[i]-a[i-1]){
                cout << a[i+1]-a[i] << " ";
            }
            else{
                cout << a[i]-a[i-1] << " ";
            }
            if(a[n-1]-a[i]>=a[i]-a[0]){
                cout << a[n-1]-a[i] << endl;
            }
            else{
                cout << a[i]-a[0] << endl;
            }
        }
    }
}