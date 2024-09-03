#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,count,flag; cin >> t;
    while(t--){
        count = 0,flag = 0;
        cin >> n;
        if(n%3==0 || n==1){
            while(n!=1){
                if(n%6==0){
                    n/=6;
                    count++;
                }
                else if(n%3==0){
                    n*=2;
                    count++;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) cout << count << endl;
        }
        else cout << -1 << endl;
        if(flag) cout << -1 << endl;
    }
}
