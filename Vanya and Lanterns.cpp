/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l,v; cin >> n >> l;
    vector <int> a;
    for(int i=0; i<(int)n; i++){
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    int m = a[0];
    if(m < l-a[n-1]) m = l- a[n-1];
    int max=0;
    for(int i=0; i<n-1; i++){
        if(a[i+1]-a[i]>max) max = a[i+1]-a[i];
    }
    if(max%2==1 && max/2>=m) cout << max/2 << ".5000000000" << endl;
    else if(max%2==0 && max/2>=m) cout << max/2 << ".0000000000" << endl;
    else cout << m << ".0000000000" << endl;
}