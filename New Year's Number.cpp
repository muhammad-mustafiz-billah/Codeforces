#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n, flag; cin >> t;
    while(t--){
        flag = 0;
        cin >> n;
        if(n%2020 == 0 || n%2021==0) cout << "YES" << endl;
        else{
            while (n%2020!=0 && n>0){
                n-=2021;
                if(n%2020==0 && n>0){
                    flag = 1;
                    cout << "YES" << endl;
                    break;
                }
            }
            if (flag == 0) cout << "NO" << endl;
        }
    }
}