/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,count; cin >> t;
    while(t--){
        cin >> n;
        if(n==2) cout << -1 << endl;
        else if(n==1) cout << 1 << endl;
        else{
            int i=1,j=1;
            count = n*n;
            while(count--){
                if((n*n%2==1&&count>n*n/2)||(n*n%2==0&&count>=n*n/2)){
                    cout << 2*i << " ";
                    if(j==n){cout << endl; j=0;}
                    if(i==n*n/2) i=0;
                    i++;j++;
                }
                else{
                    cout << 2*i-1 << " ";
                    if(j==n){cout << endl; j=0;}
                    i++;j++;
                }
            }
        }
    }
}