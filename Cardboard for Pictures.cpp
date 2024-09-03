/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector <long long> A;
    // long long b;
    // for(long long i=1; i<=9*pow(10,9); i++){
    //     cin >> b;
    //     A.push_back(b);
    // }
    long long t,n,c,v,sum; cin >> t;
    while(t--){
        cin >> n >> c;
        vector <long long> a;
        for(long long i=0; i<n; i++){
            cin >> v;
            a.push_back(v);
        }
        long long l,r,m;
        l=1, r=pow(10,18);
        while(l<=r){
            sum=0;
            m = l + (r - l) / 2;;
            for(int i=0; i<n; i++){
                sum+= pow((2*m+a[i]),2);
            }
            if (sum == c){cout << m << endl;break;}
            else if (sum < c)
                l = m + 1;
            else
                r = m - 1;
        }
    }
}