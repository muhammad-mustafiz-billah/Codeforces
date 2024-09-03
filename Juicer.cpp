/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,b,d,v,sum=0,count=0; cin >> n >> b >> d;
    for(int i=0; i<n; i++){
        cin >> v;
        if(v<=b)sum+=v;
        if(sum>d){
            count++;
            sum=0;
        }
    }
    cout << count << endl;
}