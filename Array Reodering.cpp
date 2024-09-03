#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,value,count,i; cin >> t;
    while(t--){
        count = 0;
        cin >> n;
        vector <int> a;
        for(i=0; i<n; i++){
            cin >> value;
            a.push_back(value);
        }
        sort(a.begin(), a.end(), greater());
        for( i=0; i<n-1; i++){
            if(__gcd(a[i],2*a[i+1])>1) count++;
        }
        cout << count << endl;
    }
}