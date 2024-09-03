#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    if(n>m){
        int temp = n;
        n = m;
        m = temp;
    }
    if(n%2) cout << "Akshat" << endl;
    else cout << "Malvika" << endl;
}