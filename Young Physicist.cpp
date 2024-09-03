/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,v; cin >> n;
    vector <int> a;
    for(int i=0; i<3*n; i++){
        cin >> v;
        a.push_back(v);
    }
    int sumX=0,sumY=0,sumZ=0;
    for(int i=0; i<3*n; i++){
        if(i%3==0) sumX+= a[i];
        else if(i%3==1) sumY+= a[i];
        else if(i%3==2) sumZ+= a[i];
    }
    if(sumX==0 && sumY==0 && sumZ==0) cout << "YES" << endl;
    else cout << "NO" << endl;
}