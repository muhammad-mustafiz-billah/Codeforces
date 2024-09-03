#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, sum = 0, value; cin >> n >> m;
    vector <int> a;
    for(int i=0; i<n; i++){
        cin >> value;
        a.push_back(value);
    }
    sort(a.begin(), a.end());
    for(int i=0; i<m; i++){
        if(a[i] <= 0)sum += a[i];
    }
    cout << -1*sum << endl;
}