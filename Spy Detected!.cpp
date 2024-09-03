#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,value; cin >> t;
    while(t--){
        cin >> n;
        vector <int> a;
        for(int i=0; i<n; i++){
            cin >> value;
            a.push_back(value);
        }int i;
        for(i=0; i<n-1; i++){
            if(a[i]!=a[i+1]) break;
        }
        if(i!=0) cout << i+2 << endl;
        else{
            if(a[0]==a[n-1]) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
}