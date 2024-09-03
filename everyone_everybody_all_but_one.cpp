#include<bits/stdc++.h>
using namespace std;

int main(){
    float t,n,value,flag,sum,i; cin >> t;
    while(t--){
        flag = 0,sum=0;
        cin >> n;
        vector <float> a;
        for( i=0; i<n; i++){
            cin >> value;
            a.push_back(value);
            sum+=value;
        }
        for( i=0; i<n; i++){
            if(a[i]==sum/n){
                cout << "YES" << endl;
                break;
            }
        }
        if(i==n) cout << "NO" << endl;
    }
}