#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,flag=0; cin >> t;
    while(t--){
        flag = 0;
        long long n;cin >> n;
        if(n%2){
            cout << "YES" << endl;
            continue;
        }
        else{
            while (n%2==0 && n > 2){
                n /= 2;
                if(n%2) flag = 1;
            }
            if(flag == 1) cout << "YES" << endl;
            else cout << "NO" << endl;         
        }
    }
}