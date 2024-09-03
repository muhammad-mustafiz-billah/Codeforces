/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

// n = 10^5
// v = 10^12

// 10^8

int main(){
    long long n,count,j; cin >> n; //4
    long long v; //1
    while(n--){             //10^3
        count = 0; //1
        cin >> v;               //1
        if(v==1) cout << "NO" << endl; //1
        else if(v&1 && v == ((long long)sqrt(v)) * ((long long)sqrt(v))){ 
            v = sqrt(v);                //10^6
            for(long long i = 3; i<=sqrt(v); i+=2){ // 10^3/2
                if(v%i==0) {cout << "NO" << endl; count = 1; break;}
            }
            if(count == 0) cout << "YES" << endl;
        }
        else if(v==4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}