#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,flag = 0, value; cin >> n;
        vector <int> a;
        for(int i=0; i<n; i++){
            cin >> value;
            a.push_back(value);
        }
        sort(a.begin(), a.end());
        for(int i=0; i<n-1; i++){
            if(a[i] == a[i+1]){
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if(flag==0)cout << "YES" << endl;
    }
}
