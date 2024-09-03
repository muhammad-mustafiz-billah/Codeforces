#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, value; cin >> n >> m;
    vector <int> a;
    for(int i=0; i<m; i++){
        cin >> value;
        a.push_back(value);
    }
    sort(a.begin(), a.end());
    int min = INT_MAX;
    for(int i=0; i<=m-n; i++){
        if(min > (a[n-1+i]-a[i])) min = (a[n-1+i]-a[i]);
    }
    cout << min << endl;
}