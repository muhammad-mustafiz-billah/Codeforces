#include<bits/stdc++.h>
using namespace std;

int main(){
    float t,n,value,flag,sum; cin >> t;
    while(t--){
        flag = 0;
        cin >> n;
        vector <float> a;
        for(int i=0; i<n; i++){
            cin >> value;
            a.push_back(value);
        }

        for(int i=0; i<n; i++){
            sum = 0;
            for(int j=0; j<n; j++){
                if(i==j) continue;
                sum+=a[j];
            }
            if(a[i]==sum/(n-1)){
                flag = 1;
                cout << "YES" << endl;
                // cout << a[i] << endl;
                break;
            }
        }
        if(flag==0) cout << "NO" << endl;
    }
}