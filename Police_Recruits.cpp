#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, v, plus = 0, minusx = 0; cin >> n;
    for(int i=0; i<n; i++){
        cin >> v;
        if(plus==0 && v<0) minusx ++;
        else plus += v;
    }
    cout << minusx << endl;
}