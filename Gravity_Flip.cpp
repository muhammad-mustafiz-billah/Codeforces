#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b; cin >> n;
    vector <int> a;
    for(int i=0; i<n; i++){
        cin >> b;
        a.push_back(b);
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}