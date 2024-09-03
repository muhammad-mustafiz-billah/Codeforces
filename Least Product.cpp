/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, value, countn, countp, count0, intdexn, intdexp, intdex0; cin >> t;
    while(t--){
        vector <int> v;
        count0 = countn = countp = 0;
        cin >> n;

        for(int i=0; i<n; i++){
            cin >> value;
            if(value<0) {countn++; intdexn = i;}
            else if(value>0) {countp++; intdexp = i;}
            else {count0++; intdex0 = i;}
        }

        if(count0) cout << 0 << endl;
        else{
            if(countn == n) cout << 0 << endl;
            else(countp == n);cout << 1 << endl << 1 << " " << 0 << endl;
        }
    }
}