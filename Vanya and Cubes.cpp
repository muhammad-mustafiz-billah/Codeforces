/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int k=1,i=2,count=0;
    while(n>=k){
        n-=k;
        k+=i;
        ++i;
        // cout << k << endl;
        count ++;
    }
    cout << count << endl;
}