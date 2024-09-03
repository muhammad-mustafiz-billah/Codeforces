#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,x,sum,diff,flag=1; cin >> t;
    while (t--){
        flag = 1;
        sum=0;
        cin >> n >> k >> x;
        if(k>n || k>x+1) {cout << -1 << endl;flag=0;}
        else{
            for(int i=0; i<k; i++){
                sum+=i;
            }
            diff = n-k;
            if(k==x) sum += diff*(x-1);
            else sum += diff*x;
        }
        if(flag) cout << sum << endl;
    }
    
}